@ Assembler macros for the Buu's Fury disassembly (pret-style).

	.macro thumb_func_start name
	.align 1, 0
	.global \name
	.thumb
	.thumb_func
	.type \name, %function
	.endm

	.macro arm_func_start name
	.align 2, 0
	.global \name
	.arm
	.type \name, %function
	.endm
