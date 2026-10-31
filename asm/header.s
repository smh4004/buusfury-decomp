@ GBA cartridge header (0x08000000-0x080000BF).
@ The Nintendo logo is pulled from baserom.gba at build time; nothing copyrighted lives here.
	.syntax unified
	.arm
	.text
	.global RomHeader
RomHeader:
	b _start
RomHeaderNintendoLogo:
	.incbin "baserom.gba", 0x4, 0x9C
RomHeaderGameTitle:
	.ascii "DBZBUUSFURY\0"
RomHeaderGameCode:
	.ascii "BG3E"
RomHeaderMakerCode:
	.ascii "70"
RomHeaderMagic:
	.byte 0x96
RomHeaderMainUnitCode:
	.byte 0
RomHeaderDeviceType:
	.byte 0
RomHeaderReserved1:
	.space 7
RomHeaderSoftwareVersion:
	.byte 0
RomHeaderChecksum:
	.byte 0x84
RomHeaderReserved2:
	.space 2
