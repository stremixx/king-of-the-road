# Hard Truck 2: King of the Road - Linux Port & Modern Widescreen Suite

A native Linux launcher, modern quality-of-life (QoL) suite, and binary engine patch for the classic 2001 trucking simulator **Hard Truck 2: King of the Road** (*Дальнобойщики 2* by SoftLab-NSK).

---

## Table of Contents

- [Overview](#overview)
- [Key Features](#key-features)
- [How It Works](#how-it-works)
  - [1. Linux SDL2 Launcher (`king_of_the_road`)](#1-linux-sdl2-launcher-king_of_the_road)
  - [2. The `.qol` PE Binary Patch Module (`qol_patch.c`)](#2-the-qol-pe-binary-patch-module-qol_patchc)
  - [3. PE Section Injector (`patch_king_pe.py`)](#3-pe-section-injector-patch_king_pepy)
  - [4. Reverse-Engineered Source (`king_build/`)](#4-reverse-engineered-source-king_build)
- [Requirements](#requirements)
- [Installation & Setup](#installation--setup)
- [Usage & Command-Line Options](#usage--command-line-options)
- [Repository Structure](#repository-structure)
- [Legal & Disclaimer](#legal--disclaimer)

---

## Overview

The original 2001 release of *King of the Road* was developed for Windows 98/Me/2000 and CRT monitors running DirectDraw / DirectX 7. Running the original game on modern systems—especially modern Linux environments—presents several compounding challenges:

1. **Resolution Constraints**: Hard-coded video mode logic limited 3D rendering to 4:3 resolutions (640×480 up to 1600×1200), stretching or cropping horribly on modern 16:9, 16:10, 21:9, and 32:9 displays.
2. **Camera & Frustum Distortion**: Naive resolution expansion creates severe vertical clipping or distorted fish-eye views without Hor+ frustum calculation.
3. **Memory & VRAM Overflows**: Modern graphics cards with >2 GB VRAM and systems with >=4 GB RAM cause signed 32-bit integer overflows in the engine's memory detection, triggering texture downgrades and crashes.
4. **Codec Hangs**: Outdated Indeo Video 5 (IV50) AVI cutscenes crash modern media frameworks.
5. **Aspect Ratio Mismatch**: 2D menus (800×600) get stretched when forcing widescreen mode.
6. **Rendering Pipeline Stalls**: Modern DirectDraw-to-D3D9 translation layers suffer massive performance stalls if the CPU and GPU constantly exchange full-frame readbacks during gameplay.

This project resolves all of these issues through a combination of an interactive native Linux launcher, binary hooks injected directly into `king.exe`, and configuration orchestration.

---

## Key Features

- **True Hor+ Widescreen & Ultrawide Rendering**:
  - Full support for 1080p, 1440p, 4K, 21:9 ultrawide, and custom resolutions.
  - Hor+ camera frustum scaling keeps vertical field-of-view constant while expanding peripheral vision naturally across the 1st-person world camera, 3rd-person chase camera, and 3D interior cabin camera.
- **Aspect Ratio Preservation**:
  - Keeps the original 4:3 2D Main Menu intact with clean pillarboxing while switching seamlessly to full widescreen in 3D driving mode.
- **Dynamic HUD & Mirror Placement**:
  - Dashboard gauges, speedometers, competition tables, and rearview mirrors are dynamically anchored to the edges of the widescreen viewport rather than floating awkwardly in the middle of the screen.
- **Modern Hardware & Memory Stability Fixes**:
  - **>2 GB VRAM Fix**: Clamps video memory queries to prevent negative integer overflow on modern GPUs.
  - **>=4 GB RAM Fix**: Prevents `GlobalMemoryStatus` wrap-around from forcing lowest-quality texture models.
  - **CRT Warning Bypass**: Eliminates the legacy "Monitor does not support 1600x1200" warning popup.
  - **Indeo 5 Bypass**: Bypasses crashed legacy intro videos to jump straight into DirectDraw hardware initialization.
  - **Backbuffer Readback Optimization**: Disables full-frame CPU software readbacks for raindrop distortion, maintaining smooth 60+ FPS in rain.
- **Interactive SDL2 Launcher & Headless CLI**:
  - Dual interface: an interactive graphical configuration launcher with keyboard navigation, plus extensive CLI flags for scripting and Steam Deck integration.

---

## How It Works

```
                        ┌─────────────────────────────────────────────────────────┐
                        │             ./king_of_the_road (Linux SDL2)            │
                        └───────────────────────────┬─────────────────────────────┘
                                                    │
                               Writes settings to   │ Detects resolution & launches
                                                    ▼
                   ┌──────────────────────────────────────────────────┐
                   │    game files/TRUCK.INI  &  game files/dxcfg.ini │
                   └────────────────────────┬─────────────────────────┘
                                            │
                                            ▼
                   ┌──────────────────────────────────────────────────┐
                   │               Wine (Windows Runtime)             │
                   └────────────────────────┬─────────────────────────┘
                                            │
                                            ▼
                   ┌──────────────────────────────────────────────────┐
                   │         king.exe (Hard Truck 2 Engine)           │
                   ├──────────────────────────────────────────────────┤
                   │  .text Section (Hooked entrypoints)              │
                   │    ├─ 0x005127A7 ──► Hook 1: Custom Resolution   │
                   │    ├─ 0x005107BA ──► Hook 2: Dynamic 2D HUD Offsets
                   │    ├─ 0x005970EF ──► Hook 3: Top-Right Mirror X  │
                   │    ├─ 0x005969C0 ──► Hook 4: Hor+ Frustum Scaler │
                   │    ├─ 0x00594FB8 ──► Hook 5: Cabin Mirror Scale  │
                   │    └─ 0x0053615A ──► Hook 6: 3D Gauges Anchor    │
                   ├──────────────────────────────────────────────────┤
                   │  .qol Section (Virtual Address 0x007BB000)       │
                   │    Compiled from king_linux_port/qol_patch.c     │
                   └──────────────────────────────────────────────────┘
```

### 1. Linux SDL2 Launcher (`king_of_the_road`)
- Written in C99 using SDL2.
- Inspects connected monitor displays to detect native desktop resolution.
- Reads and updates the game's `TRUCK.INI` (engine settings) and `dxcfg.ini` (DirectDraw wrapper settings).
- Manages Wine prefix execution (`WINEPREFIX`, `wine`, wow64 mode, and virtual desktop configuration).
- Includes an interactive on-screen menu (`--gui`) and silent launch mode (`--play` or `--no-gui`).

### 2. The `.qol` PE Binary Patch Module (`qol_patch.c`)
- Written in freestanding x86 assembly and C, compiled with `-m32 -ffreestanding -fno-pic -fno-pie`.
- Linked against `king_syms.ld` into a dedicated PE section named `.qol` located at Virtual Address `0x007bb000`.
- Provides six targeted engine hooks:
  1. **Hook 1 (`0x005127a7`)**: Overrides hard-coded resolution table indexes with arbitrary resolution values (`width` and `height`) supplied via `TRUCK.INI [QOL]`.
  2. **Hook 2 (`0x005107ba`)**: Computes horizontal shift offsets for all 2D HUD elements (dashboard, icons, gauges, and competition ledger).
  3. **Hook 3 (`0x005970ef`)**: Recalculates the top-right mirror X position dynamically: `screen_width - mirror_width`.
  4. **Hook 4 (`0x005969c0`)**: Performs dynamic Hor+ frustum scaling:
     $$\text{xpyramid}_{\text{widescreen}} = \text{xpyramid}_{\text{base}} \times \left( \frac{\text{Aspect Ratio}}{4/3} \right)$$
     Applies to the first-person camera, external camera, and interior 3D cabin camera (`DAT_00695c0c`).
  5. **Hook 5 (`0x00594fb8`)**: Adjusts interior side-mirror 2D projection scaling to match the modified camera field of view.
  6. **Hook 6 (`0x0053615a`)**: Anchors external 3D tachometer and speedometer gauges (`panelspace`) to the bottom-left corner of the widescreen display.

### 3. PE Section Injector (`patch_king_pe.py`)
- Automatically backs up `game files/king.exe` to `king.exe.bak`.
- Appends the compiled `.qol` payload into the executable as a 5th PE section header.
- Installs the entry point jumps into `.text`.
- Patches PE byte sequences to fix legacy engine bugs (>2 GB VRAM detection, >=4 GB RAM overflow, CRT popups, and Indeo 5 video player hangs).

### 4. Reverse-Engineered Source (`king_build/`)
- Contains decompiled source files (over 4,000 reverse-engineered functions) extracted from Ghidra for analysis, documentation, and reference.

---

## Requirements

- **Operating System**: Linux (x86_64 or i686)
- **Runtime**: Wine 7.0+ (`wine` / `wine64`)
- **Build Tools**:
  - `gcc` & `gcc-multilib` (for 32-bit compilation)
  - `ld` & `objcopy`
  - `make`
  - `libsdl2-dev` (for launcher compilation)
  - Python 3.8+
- **Game Assets**: A valid copy of *Hard Truck 2: King of the Road* (GOG version recommended).

---

## Installation & Setup

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/king-of-the-road-linux.git
   cd "king-of-the-road-linux"
   ```

2. **Provide your game files**:
   Place your installed *King of the Road* game files (containing `king.exe`, `TRUCK.INI`, `ENV/`, `COMMON/`, etc.) into the `game files/` directory:
   ```bash
   mkdir -p "game files"
   # Copy game files into this folder
   ```
   > **Note**: The `game files/` directory is excluded via `.gitignore` to prevent distributing copyrighted game assets.

3. **Build the launcher and apply binary patches**:
   ```bash
   make -C king_linux_port clean all
   ```
   This will:
   - Compile `qol_patch.c` into `qol_patch.bin`.
   - Compile the native Linux launcher binary `king_of_the_road`.
   - Run `patch_king_pe.py` to create the widescreen-ready `game files/king.exe`.

4. **Launch the game**:
   ```bash
   ./king_of_the_road
   ```

---

## Usage & Command-Line Options

The launcher can be run interactively or configured directly via command-line flags.

```
Usage: ./king_of_the_road [options]
```

### Options Table

| Option | Argument | Description | Default |
|---|---|---|---|
| `-r, --res` | `<WxH>` | Set 3D gameplay resolution (e.g. `1920x1080`, `2560x1440`, `3440x1440`) | `1920x1080` |
| `-f, --fullscreen` | *None* | Run in borderless desktop fullscreen mode | Active |
| `-w, --windowed` | *None* | Run in windowed mode | Disabled |
| `--fov` | `<value>` | Set base 4:3 horizontal frustum width (`1.20` to `2.40`) | `1.60` |
| `--vsync` | `<on\|off>` | Enable or disable vertical synchronization | `on` |
| `--msaa` | `<off\|2x\|4x\|8x>` | Anti-aliasing quality level (set `off` for best performance) | `off` |
| `--af` | `<on\|off>` | Enable or disable 16x anisotropic texture filtering | `on` |
| `--skip-intro` | `<on\|off>` | Skip startup publisher videos | `on` |
| `--unlock-presets` | *None* | Re-maps in-game video options to 720p / 900p / 1080p / Custom | Active |
| `--gui` | *None* | Force opening the interactive SDL2 configuration launcher | Active |
| `--play, --no-gui` | *None* | Launch the game immediately without opening the SDL2 launcher | Disabled |
| `--apply-only` | *None* | Save configuration to `TRUCK.INI` & `dxcfg.ini` and exit | Disabled |
| `--status` | *None* | Display current configuration, resolution, FOV, and patch status | Disabled |
| `-h, --help` | *None* | Show usage information and exit | Disabled |

### Examples

- **Launch immediately in 1080p widescreen**:
  ```bash
  ./king_of_the_road --res 1920x1080 --play
  ```

- **Configure for a 1440p monitor and apply configuration without launching**:
  ```bash
  ./king_of_the_road --res 2560x1440 --fov 1.65 --apply-only
  ```

- **Check current configuration status**:
  ```bash
  ./king_of_the_road --status
  ```

---

## Repository Structure

```
├── .gitignore               # Excludes proprietary assets and build files
├── README.md                # Project documentation and guide
├── king_of_the_road         # Compiled root Linux launcher executable
├── king_linux_port/         # Linux launcher & binary patch codebase
│   ├── Makefile             # Build automation
│   ├── main_linux.c         # Native SDL2 launcher source
│   ├── qol_patch.c          # Assembly/C engine hook routines
│   ├── king_syms.ld         # Linker script placing .qol at VA 0x007bb000
│   └── patch_king_pe.py     # PE injector and engine bug fix script
├── king_build/              # Decompiled C code tree for engine research
├── Kingoftheroad/           # Ghidra reverse engineering project files
└── game files/              # Local game directory (ignored by git)
```

---

## Legal & Disclaimer

*Hard Truck 2: King of the Road* is copyright © 2001 SoftLab-NSK / 1C Company / Buka Entertainment. This repository contains only open-source porting tools, launcher code, and binary patch scripts. No copyrighted game assets, proprietary textures, audio, or game executables are distributed in this repository. You must own a legally acquired copy of the game to use this software.
