CC = gcc
LD = ld
OBJCOPY = objcopy
SDL2_CFLAGS := $(shell sdl2-config --cflags)
SDL2_LIBS   := $(shell sdl2-config --libs) -lm

.PHONY: all clean patch

all: qol_patch.bin king_of_the_road patch

qol_patch.o: qol_patch.c
	$(CC) -m32 -ffreestanding -masm=intel -O2 -fno-pic -fno-pie -fno-stack-protector -fno-asynchronous-unwind-tables -c $< -o $@

qol_patch.elf: qol_patch.o king_syms.ld
	$(LD) -m elf_i386 -T king_syms.ld $< -o $@

qol_patch.bin: qol_patch.elf
	$(OBJCOPY) -O binary --only-section=.qol $< $@

king_of_the_road: main_linux.c
	$(CC) -O2 -Wall -Wextra $< -o $@ $(SDL2_CFLAGS) $(SDL2_LIBS)
	cp -f $@ "../king_of_the_road"

patch: qol_patch.bin
	python3 patch_king_pe.py

clean:
	rm -f qol_patch.o qol_patch.elf qol_patch.bin king_of_the_road

