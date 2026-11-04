#!/usr/bin/env python3
"""Throws the Spirit Bomb in every room of Zone 26, plus West City and Hercule City, in turn facing each way, and lays out what it looks like.
  python3 ultimate/audit_bomb.py <zone debug rom> <work dir>
Reports bad jumps and whether the bomb finished each time. Look at the sheets for the rest."""
import json, os, subprocess, sys
from PIL import Image, ImageDraw
ROM, D = sys.argv[1:3]; os.makedirs(D, exist_ok=True)
sys.path[:0] = ['ultimate', 'ultimate/lib', 'tools/scripts']
import zone26
H = 'tools/harness/harness'; G = 0x03001068; REC0 = 0x03001560; PLAYER = 0x03001C34; CAM = 0x030019BC; AT = 0x0300197C; SB = 0x0203FF40
P = open(os.environ['BFU_PROTO'], 'rb').read(); cfg = json.load(open('ultimate/zone26.json'))
LINKS = zone26.links(cfg, {a: zone26.floor_mask(P, os.environ['BFU_PROTO'], a) for a in range(1, 16)})
KEYS = 'DOWN UP LEFT RIGHT'.split()
start = open('tools/harness/long.txt').read().split('\n')[1:93] + ['tap A 60'] * 4 + ['run 60', 'keys DOWN', 'run 30', 'keys', 'run 200']
env = dict(os.environ); env.pop('HARNESS_SAV', None)
p = subprocess.Popen([H, ROM, '/dev/stdin', D], stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True, bufsize=1, env=env)
bad = [False]
def send(*lines):
    for l in lines: p.stdin.write(l + '\n')
    p.stdin.flush()
def mem(a, n=1):
    send('mem %08X %d' % (a, n))
    while True:
        l = p.stdout.readline()
        if not l: raise SystemExit('harness ended')
        if 'bad pc' in l: bad[0] = True
        if l.startswith('mem %08x' % a): return [int(x, 16) for x in l.split(':')[1].split()]
def go(door):
    pl = mem(PLAYER)[0]; x0, y0, x1, y1 = door['rect']
    send('poke %08X %08X' % (pl + 0x1A0, (x0 + x1) // 2 << 8), 'poke %08X %08X' % (pl + 0x1A4, ((y0 + y1) // 2) << 8), 'keys ' + KEYS[door['key']], 'run 12', 'keys', 'run 110'); mem(G)
results = []
STOPS = (30, 60, 45, 25, 20, 12, 30)
def throw(name, face):
    send('poke8 %08X 01' % (REC0 + 0x0C), 'poke8 %08X 13' % (REC0 + 0x0D), 'poke8 %08X 00' % (REC0 + 0x15), 'poke8 03001576 FF', 'poke8 03001577 7F', 'poke8 0300157A FF', 'poke8 0300157B 00', 'keys ' + KEYS[face], 'run 3', 'keys', 'run 4', 'keys B', 'run 4', 'keys')
    pics = []
    for i, n in enumerate(STOPS):
        send('run %d' % n, 'shot %s_%d' % (name, i)); mem(G); pics.append('%s/%s_%d.png' % (D, name, i))
    send('run 120')
    left = mem(SB)[0] >> 16
    results.append((name, face, pics, left))
    print(name, 'facing', KEYS[face], 'phase after', left, flush=True)
send('guardon 0x09000000', *start); mem(G)
seen = {1}; face = 0
throw('room1', face)
def walk(a):
    global face
    for door in LINKS[a]:
        b = door.get('to')
        if b is None or b in seen or 'world' in door: continue
        go(door); now = mem(AT)[0]; seen.add(b); face = (face + 1) % 4
        throw('room%d' % b, face)
        walk(b)
        back = [x for x in LINKS[b] if x.get('to') == a]
        if back: go(back[0])
walk(1)
go([x for x in LINKS[1] if 'world' in x][0])
face = (face + 1) % 4; throw('westcity', face)
send('poke8 %08X %02X' % (G + 0x55 + 862 // 8, 1 << 862 % 8))
pl = mem(PLAYER)[0]
send('poke %08X %08X' % (pl + 0x1A0, 96 << 8), 'poke %08X %08X' % (pl + 0x1A4, (328 + 22) << 8), 'run 2', 'keys UP', 'run 6', 'keys', 'run 4', 'tap A 80', 'run 200'); mem(G)
face = (face + 1) % 4; throw('hercule', face)
for page in range(0, len(results), 6):
    part = results[page:page + 6]
    W = Image.new('RGB', (len(STOPS) * 180, len(part) * 120))
    for r, (name, f, pics, left) in enumerate(part):
        for c, pic in enumerate(pics):
            W.paste(Image.open(pic).convert('RGB').resize((180, 120), Image.NEAREST), (c * 180, r * 120))
        ImageDraw.Draw(W).text((3, r * 120 + 3), '%s %s' % (name, KEYS[f]), fill=(255, 255, 0))
    W.save('%s/bomb_%d.png' % (D, page // 6))
print('bad jumps:', bad[0], 'unfinished:', [r[0] for r in results if r[3]])
p.stdin.close()
