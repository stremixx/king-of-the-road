/* Linker script for King of the Road (.qol section at VA 0x007bb000) */
OUTPUT_FORMAT("elf32-i386")
OUTPUT_ARCH(i386)
ENTRY(qol_entry)

/* Engine functions in king.exe */
FUN_0050b5f0 = 0x0050b5f0;
FUN_005dcf80 = 0x005dcf80;
FUN_005ab580 = 0x005ab580;
FUN_005ab330 = 0x005ab330;
FUN_00603230 = 0x00603230;
FUN_00603370 = 0x00603370;
FUN_005ee8e0 = 0x005ee8e0;

/* Engine globals in king.exe */
DAT_00671998 = 0x00671998; /* "EFFECTS" */
DAT_0067d0ec = 0x0067d0ec; /* "xpyramid" */
DAT_0067d0c0 = 0x0067d0c0; /* double xpyramid */
DAT_0064a668 = 0x0064a668; /* double 0.0 */
DAT_006956b0 = 0x006956b0; /* Display/Window manager this ptr */
DAT_006957b0 = 0x006957b0; /* Current width */
DAT_006957b4 = 0x006957b4; /* Current height */
DAT_006957bc = 0x006957bc; /* Video flags */
DAT_006957c8 = 0x006957c8; /* TRUCK.INI path ptr */
DAT_00695c00 = 0x00695c00; /* Main Viewer object ptr */
DAT_00695c0c = 0x00695c0c; /* 3D Cabin Camera object ptr */
DAT_006cdbd0 = 0x006cdbd0; /* Game options struct ptr */
DAT_006cdc6c = 0x006cdc6c; /* Left HUD X */
DAT_006cdc70 = 0x006cdc70; /* Left HUD Y */
DAT_006cdc74 = 0x006cdc74; /* Right HUD X */
DAT_006cdc78 = 0x006cdc78; /* Right HUD Y */
DAT_006cdc7c = 0x006cdc7c; /* Competition HUD X */
DAT_006cdc80 = 0x006cdc80; /* Competition HUD Y */
DAT_006d0fd8 = 0x006d0fd8; /* Camera state ptr */
DAT_006f58ac = 0x006f58ac; /* Rearview mirror width */
DAT_006f599c = 0x006f599c; /* Rearview mirror X */
DAT_0071f7fc = 0x0071f7fc; /* Active D3D width */
DAT_0071f800 = 0x0071f800; /* Active D3D height */
DAT_0071f840 = 0x0071f840; /* Available VRAM */

SECTIONS
{
    . = 0x007bb000;
    .qol 0x007bb000 : SUBALIGN(4)
    {
        *(.text.entry)
        *(.text*)
        *(.rodata*)
        *(.data*)
        *(.bss*)
    }
    /DISCARD/ :
    {
        *(.note*)
        *(.comment*)
        *(.eh_frame*)
    }
}
