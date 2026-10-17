#!/usr/bin/env python3
"""
Binary Patcher for Hard Truck 2: King of the Road (king.exe)
Injects the compiled .qol section (from king_linux_port/qol_patch.c) at VA 0x007bb000
and hooks the resolution, Hor+ widescreen camera, 3D cabin frustum, 2D HUD, mirror,
and >2GB VRAM / RAM functions.
"""

import os
import shutil
import struct
import sys

IMAGE_BASE = 0x00400000
QOL_VA = 0x007BB000
QOL_RVA = QOL_VA - IMAGE_BASE
QOL_RAW_OFFSET = 0x002C6000
QOL_SECTION_SIZE = 0x00001000


def va_to_file_offset(va: int) -> int:
    """Convert a Virtual Address in .text (0x00401000..0x00649fff) to file offset."""
    if 0x00401000 <= va < 0x0064A000:
        return va - 0x00400000
    raise ValueError(f"VA 0x{va:08x} outside .text section")


def make_jmp(src_va: int, dst_va: int) -> bytes:
    rel = dst_va - (src_va + 5)
    return b"\xE9" + struct.pack("<i", rel)


def make_call(src_va: int, dst_va: int) -> bytes:
    rel = dst_va - (src_va + 5)
    return b"\xE8" + struct.pack("<i", rel)


def patch_executable(game_dir: str, qol_bin_path: str) -> None:
    king_exe = os.path.join(game_dir, "king.exe")
    king_bak = os.path.join(game_dir, "king.exe.bak")
    king_qol = os.path.join(game_dir, "king_qol.exe")

    if not os.path.exists(king_bak):
        print(f"[*] Backing up original {king_exe} -> {king_bak}")
        shutil.copy2(king_exe, king_bak)

    with open(king_bak, "rb") as f:
        pe = bytearray(f.read())

    with open(qol_bin_path, "rb") as f:
        qol_code = f.read()

    if len(qol_code) > QOL_SECTION_SIZE:
        raise RuntimeError(f".qol payload too large: {len(qol_code)} > {QOL_SECTION_SIZE}")

    # 1. Update PE Header to add 5th section (.qol)
    e_lfanew = struct.unpack_from("<I", pe, 0x3C)[0]
    assert pe[e_lfanew : e_lfanew + 4] == b"PE\x00\x00", "Invalid PE signature"

    num_sections = struct.unpack_from("<H", pe, e_lfanew + 6)[0]
    assert num_sections == 4, f"Expected 4 sections in unpatched king.exe, found {num_sections}"
    struct.pack_into("<H", pe, e_lfanew + 6, 5)

    # Update SizeOfImage from 0x003bb000 to 0x003bc000
    opt_hdr = e_lfanew + 0x18
    size_of_opt = struct.unpack_from("<H", pe, e_lfanew + 0x14)[0]
    struct.pack_into("<I", pe, opt_hdr + 0x38, QOL_RVA + QOL_SECTION_SIZE)

    # Write 5th IMAGE_SECTION_HEADER (.qol)
    sec_table = opt_hdr + size_of_opt
    qol_sec_hdr = sec_table + 4 * 40
    # Verify space is empty
    assert all(b == 0 for b in pe[qol_sec_hdr : qol_sec_hdr + 40]), "Section header slot not empty"

    sec_name = b".qol\x00\x00\x00\x00"
    sec_chars = 0x60000020  # CNT_CODE | MEM_EXECUTE | MEM_READ
    struct.pack_into(
        "<8sIIIIIIHHI",
        pe,
        qol_sec_hdr,
        sec_name,
        QOL_SECTION_SIZE,  # VirtualSize
        QOL_RVA,           # VirtualAddress
        QOL_SECTION_SIZE,  # SizeOfRawData
        QOL_RAW_OFFSET,    # PointerToRawData
        0,                 # PointerToRelocations
        0,                 # PointerToLinenumbers
        0,                 # NumberOfRelocations
        0,                 # NumberOfLinenumbers
        sec_chars,         # Characteristics
    )

    # Append .qol section data at file offset 0x002c6000
    assert len(pe) == QOL_RAW_OFFSET, f"Expected file size 0x{QOL_RAW_OFFSET:x}, got 0x{len(pe):x}"
    pe.extend(qol_code.ljust(QOL_SECTION_SIZE, b"\x90"))

    def write_at_va(va: int, data: bytes) -> None:
        off = va_to_file_offset(va)
        pe[off : off + len(data)] = data

    # 2. Install hooks into .qol jump table (VA 0x007bb000)
    # Hook 1: 3D Gameplay Resolution Setup (FUN_005126d0 at 0x005127a7)
    write_at_va(0x005127A7, make_jmp(0x005127A7, QOL_VA + 0x00))

    # Hook 2: Dynamic 2D HUD & Competition Panel Coordinates (FUN_00510750 at 0x005107ba)
    write_at_va(0x005107BA, make_jmp(0x005107BA, QOL_VA + 0x05))

    # Hook 3: Dynamic Top-Right Rearview Mirror X Coordinate (FUN_00596cd0 at 0x005970ef)
    write_at_va(0x005970EF, make_jmp(0x005970EF, QOL_VA + 0x0A))

    # Hook 4: Hor+ Widescreen World & 3D Cabin Camera Frustum (FUN_005969c0 at 0x005969c0)
    write_at_va(0x005969C0, make_jmp(0x005969C0, QOL_VA + 0x0F))

    # Hook 5: 3D Cabin Side-Mirror Reflection 2D Projection Scale (FUN_00594990 at 0x00594fb8)
    write_at_va(0x00594FB8, make_call(0x00594FB8, QOL_VA + 0x14))

    # Hook 6: 3rd-Person External 3D Gauges (PanelSpace) Bottom-Left Anchor (FUN_00535a90 at 0x0053615a)
    write_at_va(0x0053615A, make_call(0x0053615A, QOL_VA + 0x19))

    # 3. Direct instruction patches for arbitrary display modes, >2GB VRAM, >=4GB RAM, and CRT/AVI fixes
    # 3a. Accept any custom resolution in DirectDraw EnumDisplayModes callback (0x005d4240)
    # mov ecx, [esp+8]; mov dword ptr [ecx+0x18], 1; xor eax, eax; ret 8
    write_at_va(
        0x005D4240,
        b"\x8B\x4C\x24\x08"              # mov ecx, [esp+8]
        b"\xC7\x41\x18\x01\x00\x00\x00"  # mov dword ptr [ecx+0x18], 1
        b"\x33\xC0"                      # xor eax, eax
        b"\xC2\x08\x00",                 # ret 8
    )

    # 3b. Clamp reported VRAM & texture memory in FUN_005d6860 and FUN_005d68a0 to 512 MB (0x20000000)
    # Prevents signed 32-bit overflow on modern GPUs with >=2GB VRAM
    write_at_va(0x005D6860, b"\xB8\x00\x00\x00\x20\xC3")  # mov eax, 0x20000000; ret
    write_at_va(0x005D68A0, b"\xB8\x00\x00\x00\x20\xC3")  # mov eax, 0x20000000; ret

    # 3c. Convert signed VRAM/TexMem comparisons to unsigned in FUN_005d72d0 & FUN_005126d0
    write_at_va(0x005D7438, b"\x73")          # jge -> jae
    write_at_va(0x00512854, b"\x73")          # jge -> jae
    write_at_va(0x00512879, b"\x73")          # jge -> jae
    write_at_va(0x00512895, b"\x0F\x82")      # jl  -> jb
    write_at_va(0x005128C6, b"\x73")          # jge -> jae
    write_at_va(0x005128EA, b"\x73")          # jge -> jae
    write_at_va(0x00512908, b"\x73")          # jge -> jae
    write_at_va(0x0051292C, b"\x0F\x93")      # setge -> setae
    write_at_va(0x00512954, b"\x0F\x93")      # setge -> setae

    # 3d. Prevent GlobalMemoryStatus wrap-around on >=4GB RAM from lowering texture quality
    write_at_va(0x00512978, b"\xEB")          # jae -> jmp

    # 3e. Unsigned shift right when computing log2(vmem_MB) in FUN_00514ed0 (0x00514fc0)
    # Replaces: cdq; and edx, 0xfffff; add eax, edx; sar eax, 0x14 (12 bytes)
    write_at_va(0x00514FC0, b"\xC1\xE8\x14" + b"\x90" * 9)  # shr eax, 0x14; nop*9

    # 3f. Default slarge=0 in FUN_005103f0 so 1600x1200 / high-res tier skips the 2001 CRT warning popup
    write_at_va(0x00510414, b"\x6A\x00")      # push 0 (default slarge=0)
    write_at_va(0x00510424, b"\x00")          # local_10 = 0

    # 3g. Skip legacy Indeo 5 startup & newgame AVI playback and enter DirectDraw 0xe00 mode at 0x005282dd
    write_at_va(0x0052827B, b"\xEB\x60\x90\x90\x90")  # jmp 0x005282dd in FUN_00528000
    write_at_va(0x00510759, b"\xEB\x11")              # jmp 0x0051076c in FUN_00510750

    # 3h. Disable full backbuffer CPU readback for raindrop refraction (keeps DAT_00701510 = 0 in FUN_005a4e10)
    # Eliminates full-screen GetRenderTargetData / glReadPixels stall on every frame
    write_at_va(0x005A4E10, b"\x31\xC0\xA3\x10\x15\x70\x00\xC3")  # xor eax, eax; mov ds:0x00701510, eax; ret

    with open(king_qol, "wb") as f:
        f.write(pe)
    with open(king_exe, "wb") as f:
        f.write(pe)

    print(f"[+] Successfully patched {king_exe} and {king_qol} ({len(pe)} bytes)")


if __name__ == "__main__":
    base_dir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    game_dir = os.path.join(base_dir, "game files")
    qol_bin = os.path.join(base_dir, "king_linux_port", "qol_patch.bin")
    patch_executable(game_dir, qol_bin)

