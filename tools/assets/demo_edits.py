#!/usr/bin/env python3
"""Apply the Phase 3 demo edits to an extracted assets/ tree (run `make extract` first), then `make modern`.
  1. dialogue: the intro line "Previously in ... LEGACY OF GOKU 2..." becomes a longer LoG4 line (goes to bank 6)
  2. palette:  colour 119 (Snake Way road blue) -> red
  3. map tile: Snake Way BG1 chunk 0, row 18 col 25 -> tile slot 0x01A (a yellow cloud tile)"""
import os, sys
os.chdir(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..'))
p = 'assets/text/dialogue.txt'; s = open(p, encoding='utf-8').read()
old = '@0:809:49\n!Previously in DRAGON BALL Z: LEGACY OF GOKU 2...\n'
assert old in s, 'intro line not found (already edited?)'
open(p, 'w', encoding='utf-8').write(s.replace(old, '@0:809:49\n!Previously in DRAGON BALL Z: LEGACY OF GOKU 4, edited from the disassembly source...\n'))
p = 'assets/palette/master.txt'; L = open(p).read().split('\n')
L[1 + 119] = '255   0   0  # 119  (edited: road blue -> red)'; open(p, 'w').write('\n'.join(L))
p = 'assets/maps/snakeway/L1_c00.csv'; R = [r.split(',') for r in open(p).read().split()]
R[18][25] = '01A'; open(p, 'w').write('\n'.join(','.join(r) for r in R) + '\n')
print('demo edits applied; now run: make modern')
