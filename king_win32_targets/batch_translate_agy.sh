#!/usr/bin/env bash

set -euo pipefail

INPUT_DIR="$HOME/king_win32_targets"
OUTPUT_DIR="$HOME/king_linux_port"
mkdir -p "$OUTPUT_DIR"

SYSTEM_PROMPT="You are a static binary recompilation assistant porting a Windows 9x/2000 game to native Linux (x86_64). \
Refactor this decompiled C function: \
1. Replace Win32 API calls (user32, kernel32, gdi32, winmm) with equivalent standard POSIX or SDL2 functions. \
2. Replace DirectX (DirectDraw, DirectSound, DirectInput) references with SDL2 / modern OpenGL equivalents where applicable. \
3. Retain exact variable names, control flow, loops, and decompiled Ghidra types (e.g. undefined4, byte, int). \
4. Output ONLY valid, compilable C code with necessary POSIX/SDL2 header includes. No conversational commentary."

for src_file in "$INPUT_DIR"/*.c; do
    fname=$(basename "$src_file")
    out_file="$OUTPUT_DIR/$fname"

    # Skip files that have already been converted
    if [ -f "$out_file" ]; then
        echo "Skipping already converted $fname..."
        continue
    fi

    echo "Porting $fname with agy..."
    
    # Pipe the prompt and the source file into agy
    {
        echo "$SYSTEM_PROMPT"
        echo -e "\n--- SOURCE FILE: $fname ---\n"
        cat "$src_file"
    } | agy > "$out_file"

    # Throttle slightly to stay well within API limits
    sleep 0.5
done

echo "Translation complete. Output stored in: $OUTPUT_DIR"
