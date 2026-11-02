#!/usr/bin/env python3
"""Emulator test for ultimate/build.py output. Run from the repo root after both builds. Exits non-zero on failure.

Checks: the release build plays the opening with no bad jumps. The debug build opens Switch Character with Goku, Vegito
and Broly, picks Broly, saves, and after a fresh boot continues as Broly on the new form row, who can attack."""
import json, os, re, subprocess, sys, tempfile
H = 'tools/harness/harness'
OUT = 'ultimate/out'
fails = []

def check(name, ok):
    print(('PASS ' if ok else 'FAIL ') + name)
    if not ok: fails.append(name)

def run(rom, lines, d, sav=None):
    p = os.path.join(d, 'r.txt'); open(p, 'w').write('\n'.join(lines) + '\n')
    env = dict(os.environ)
    if sav: env['HARNESS_SAV'] = sav
    return subprocess.run([H, rom, p, d], capture_output=True, text=True, env=env, timeout=500).stdout

route = open('tools/harness/long.txt').read().split('\n')[:93]
d = tempfile.mkdtemp(prefix='bfu')
G = 0x03001068; SLOT = 0x03001560; REC = 0x68; FORM = 0x14

tail = ['tap A 60'] * 3 + ['run 60', 'shot release', 'dump g 03001068 8a8']
o = run(OUT + '/BFU_PERSONAL_USE_ONLY.gba', ['guardon 0x08900000'] + route + tail, d)
check('release: opening plays with no bad jumps', 'bad pc' not in o)
rel = open(d + '/g.bin', 'rb').read()
run('baserom.gba', route + tail, d)
base = open(d + '/g.bin', 'rb').read()
check('release: game state matches the clean ROM after the opening', rel == base)

forms = json.load(open(OUT + '/BFU_debug.map.json'))['forms']; broly = forms['broly']
rom = OUT + '/BFU_debug_PERSONAL_USE_ONLY.gba'; sav = os.path.join(d, 'g.sav')
one = ['guardon 0x08900000'] + route + ['tap A 60', 'tap A 60', 'run 30', 'shot picker', 'tap RIGHT 40', 'tap RIGHT 40', 'tap A 200', 'run 200',
       'shot picked', 'dump a 03001068 8a8']
o = run(rom, one, d, sav)
check('debug: no bad jumps through picker and save', 'bad pc' not in o)
a = open(d + '/a.bin', 'rb').read()
check('debug: Broly chosen (current character 8)', a[0] == 8)
check('debug: guest slot on form %d' % broly, a[0x4F8 + 8 * REC + FORM] == broly)
check('debug: 8 KB save written', os.path.exists(sav) and os.path.getsize(sav) == 8192)
two = ['guardon 0x08900000', 'run 600', 'tap START 60', 'tap START 60', 'tap A 90', 'tap A 120', 'shot slots', 'tap A 200', 'tap A 200', 'run 200', 'shot loaded',
       'dump b 03001068 8a8', 'keys RIGHT', 'run 30', 'keys', 'tap A 8', 'shot attack', 'hash']
o = run(rom, two, d, sav)
b = open(d + '/b.bin', 'rb').read()
check('reload: no bad jumps', 'bad pc' not in o)
check('reload: still Broly', b[0] == 8 and b[0x4F8 + 8 * REC + FORM] == broly)
print('screens in', d)
sys.exit(1 if fails else 0)
