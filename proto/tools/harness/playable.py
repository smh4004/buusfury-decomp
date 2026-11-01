#!/usr/bin/env python3
"""Make an emulator-bootable copy of a prototype build: the dump's first word branches to 0x08000088 (inside the
Nintendo logo; the development cartridge was started another way), so emulators hang on a white screen. This writes a
copy whose first word is `b 0x080000C0` (crt0). usage: playable.py IN.gba OUT.gba"""
import sys
d = bytearray(open(sys.argv[1], 'rb').read())
d[0:4] = bytes.fromhex('2e0000ea')
open(sys.argv[2], 'wb').write(d)
