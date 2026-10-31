/* Linker script for Dragon Ball Z: Buu's Fury (USA) disassembly. */
OUTPUT_ARCH(arm)
ENTRY(_start)

MEMORY
{
    ROM   (rx)  : ORIGIN = 0x08000000, LENGTH = 32M
    IWRAM (rwx) : ORIGIN = 0x03000000, LENGTH = 32K
}

SECTIONS
{
    .text :
    {
        build/asm/header.o(.text);
        INCLUDE "build/code_objs.ld"
    } > ROM

    .rodata :
    {
        build/data/rodata.o(.rodata);
    } > ROM

    /* RW image: copied to 0x03000000 by crt0 (DMA3 from __iwram_lma). */
    .iwram :
    {
        __iwram_start = .;
        build/asm/iwram.o(.text);
        __iwram_end = .;
    } > IWRAM AT > ROM
    __iwram_lma = LOADADDR(.iwram);

    /DISCARD/ : { *(.ARM.attributes) *(.comment) }
}
