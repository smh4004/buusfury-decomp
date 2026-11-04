#!/usr/bin/env python3
"""Fires a beam in all four directions as every character, outfit and Super Saiyan form, and lays the results out as contact sheets to look at.
  python3 ultimate/audit_beams.py <debug rom> <map json> <work dir> [only character]"""
import json, os, subprocess, sys, tempfile
from concurrent.futures import ThreadPoolExecutor
from PIL import Image, ImageDraw
ROM, MAP, D = sys.argv[1:4]; ONLY = sys.argv[4] if len(sys.argv) > 4 else None
H = 'tools/harness/harness'; REC = 0x68; RECS = 0x03001560; G = 0x03001068; PLAYER = 0x03001C34; CAM = 0x030019BC; BEAM = 15
forms = json.load(open(MAP))['forms']; rname = {v: k for k, v in forms.items()}
cfg = json.load(open('ultimate/outfits.json'))['characters']
route = open('tools/harness/long.txt').read().split('\n')[:93]
ORDER = [0, 1, 3, 4, 6, 7, 8]                 # the picker's row, with Gogeta joined
form_of = lambda v: v if isinstance(v, int) else forms[v]
jobs = []
for rights, c in enumerate(ORDER):
    if ONLY and str(c) != ONLY: continue
    outfits = cfg.get(str(c)) or [{'form': None, 'name': 'base'}]
    for downs, o in enumerate(outfits): jobs.append((c, rights, downs, o['name']))

class Game:
    def __init__(self):
        env = dict(os.environ); env.pop('HARNESS_SAV', None)
        self.dir = tempfile.mkdtemp(prefix='face', dir=D)
        self.p = subprocess.Popen([H, ROM, '/dev/stdin', self.dir], stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True, bufsize=1, env=env)
        self.bad = False
    def send(self, *lines):
        for l in lines: self.p.stdin.write(l + '\n')
        self.p.stdin.flush()
    def mem(self, addr, n=1):
        self.send('mem %08X %d' % (addr, n))
        while True:
            l = self.p.stdout.readline()
            if not l: raise RuntimeError('harness ended')
            if 'bad pc' in l: self.bad = True
            if l.startswith('mem %08x' % addr): return [int(x, 16) for x in l.split(':')[1].split()]
    def close(self):
        try: self.p.stdin.close(); self.p.wait(timeout=20)
        except Exception: self.p.kill()

def refill(rec):
    return ['poke8 %08X FF' % (rec + o) for o in (0x1A, 0x1E, 0x20)] + ['poke8 %08X 00' % (rec + o) for o in (0x1B, 0x1F, 0x21)] + ['poke8 %08X FF' % (rec + 0x16), 'poke8 %08X 00' % (rec + 0x17)]

def fire(g, rec, key, name, skill):
    """Face a direction, use the move, and keep the area around the player while it is held and just after release."""
    g.send('poke8 %08X 01' % (rec + 0x0C), 'poke8 %08X %02X' % (rec + 0x0D, skill), 'poke8 %08X 00' % (rec + 0x15), *refill(rec),
           'keys ' + key, 'run 3', 'keys', 'run 5', 'keys B', 'run 40')
    pl = g.mem(PLAYER)[0]; x, y = g.mem(pl + 0x1A0, 2); cx, cy = g.mem(CAM, 2)
    g.send('shot %s_h' % name, 'keys', 'run 12', 'shot %s_r' % name, 'run 100'); g.mem(G)
    return ((x >> 8) - (cx - (1 << 32) if cx >> 31 else cx), (y >> 8) - (cy - (1 << 32) if cy >> 31 else cy), name)

STAY = {20, 21, 22, 18, 14, 8}                # transformations, costume, teleport and the punch aren't fired
def one(job):
    c, rights, downs, label = job
    g = Game(); rows = []
    try:
        rec = RECS + c * REC
        g.send('guardon 0x09000000', *route, 'poke8 %08X 03' % (RECS + 7 * REC), 'tap A 60', 'tap A 60', 'run 30', *['tap RIGHT 40'] * rights, *['tap DOWN 40'] * downs, 'tap A 200', 'run 120', *['tap A 60'] * 8, 'run 60'); g.mem(G)
        cur = g.mem(G)[0] & 255
        words = g.mem(rec + 0x0C, 2); raw = b''.join(w.to_bytes(4, 'little') for w in words)
        moves = list(raw[1:1 + raw[0]]); own = [m for m in moves if m not in STAY]
        if c == 0: own = [m for m in own]
        trans = [m for m in moves if m in (20, 21, 22)]
        if c == 0: trans = [20, 22]
        if c == 7: trans = [20, 21]
        seen = set(); stage = 0
        for step in [None] + trans + trans[:1]:
            if step is not None:
                g.send('poke8 %08X 01' % (rec + 0x0C), 'poke8 %08X %02X' % (rec + 0x0D, step), 'poke8 %08X 00' % (rec + 0x15), *refill(rec), 'keys B', 'run 4', 'keys', 'run 170'); g.mem(G)
            form = g.mem(rec + 0x14)[0] & 255
            if form in seen: continue
            seen.add(form)
            for skill in own:
                shots = {}
                for key in ('DOWN', 'UP', 'LEFT', 'RIGHT'):
                    name = 'f%d_s%d_%s' % (form, skill, key)
                    shots[key] = fire(g, rec, key, name, skill)
                rows.append(dict(c=cur, form=form, label=label, skill=skill, shots=shots, dir=g.dir))
    finally:
        bad = g.bad; g.close()
    return job, rows, bad

with ThreadPoolExecutor(int(os.environ.get('JOBS', '5'))) as ex: results = list(ex.map(one, jobs))
CELL = 72; SCALE = 2; rows = [r for _, rr, _ in results for r in rr]
print('moves fired:', len(rows), 'bad jumps:', [j for j, _, b in results if b])
per = 8
for page in range(0, len(rows), per):
    part = rows[page:page + per]
    W = Image.new('RGB', (110 + 8 * CELL * SCALE, len(part) * CELL * SCALE), (30, 30, 30)); dr = ImageDraw.Draw(W)
    for i, r in enumerate(part):
        dr.text((4, i * CELL * SCALE + 8), '%s\nform %d\n%s\nchar %d\nskill %d' % (r['label'], r['form'], rname.get(r['form'], ''), r['c'], r['skill']), fill=(255, 255, 255))
        for k, key in enumerate(('DOWN', 'UP', 'LEFT', 'RIGHT')):
            x, y, name = r['shots'][key]
            for j, sfx in enumerate('hr'):
                m = Image.open('%s/%s_%s.png' % (r['dir'], name, sfx)).convert('RGB')
                box = (x - CELL // 2, y - CELL // 2 - 8, x + CELL // 2, y + CELL // 2 - 8)
                W.paste(m.crop(box).resize((CELL * SCALE, CELL * SCALE), Image.NEAREST), (110 + (2 * k + j) * CELL * SCALE, i * CELL * SCALE))
    W.save('%s/sheet_%02d.png' % (D, page // per))
print('sheets', (len(rows) + per - 1) // per)
