@ Read-only data (0x08054FBC-0x087B79A3): tables and game assets.
@ Pulled from baserom.gba at build time.
	.section .rodata
	.global gRodataStart
gRodataStart:
	.incbin "baserom.gba", 0x54FBC, 0x7B79A4 - 0x54FBC
