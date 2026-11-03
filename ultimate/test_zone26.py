#!/usr/bin/env python3
"""Emulator test for Zone 26 (build `--debug --zone` first; set BFU_PROTO). From Snake Way (debug door) plays every door both ways,
then the Super 13 fight and its reward, and the West City resident who starts the quest."""
import json, os, re, struct, subprocess, sys, tempfile
sys.path[:0] = ['ultimate', 'ultimate/lib', 'tools/scripts']
import zone26
H, ROM = 'tools/harness/harness', 'ultimate/out/BFU_debug_zone_PERSONAL_USE_ONLY.gba'
PROTO = os.environ['BFU_PROTO']; P = open(PROTO, 'rb').read()
cfg = json.load(open('ultimate/zone26.json'))
masks = {a: zone26.floor_mask(P, PROTO, a) for a in range(1, 16)}
D = zone26.links(cfg, masks)
fails = []
def check(n, ok):
    print(('PASS ' if ok else 'FAIL ') + n)
    if not ok: fails.append(n)
d = sys.argv[1] if len(sys.argv) > 1 else tempfile.mkdtemp(prefix='z26')
def run(lines):
    p = d + '/s.txt'; open(p, 'w').write('\n'.join(lines) + '\n')
    return subprocess.run([H, ROM, p, d], capture_output=True, text=True, timeout=500).stdout
start = open('tools/harness/long.txt').read().split('\n')[1:93] + ['tap A 60'] * 4 + ['run 60', 'keys DOWN', 'run 30', 'keys', 'run 200']
AT = '0300197C'; KEYS = 'DOWN UP LEFT RIGHT'.split()
PL, BOSS_PL = 0x0202F8E4, 0x0202F238   # the player object: where it lives in a plain room and with Android 13 loaded
def go(lines, door, pl, tag, settle=110):
    x0, y0, x1, y1 = door['rect']
    lines += ['poke %08X %08X' % (pl + 0x1A0, (x0 + x1) // 2 << 8), 'poke %08X %08X' % (pl + 0x1A4, ((y0 + y1) // 2) << 8),
              'keys ' + KEYS[door['key']], 'run 12', 'keys', 'run %d' % settle, 'mem %s 1' % AT, 'shot ' + tag]
lines = list(start); moves = []; seen = set()
def walk(a):
    for door in D[a]:
        b = door['to']
        if 'world' in door or (a, b) in seen: continue
        seen.update(((a, b), (b, a))); moves.append((a, b)); go(lines, door, BOSS_PL if a == 15 else PL, 'm%02d' % len(moves))
        walk(b)
        back = [x for x in D[b] if x['to'] == a][0]; moves.append((b, a)); go(lines, back, BOSS_PL if b == 15 else PL, 'm%02d' % len(moves))
walk(1)
out = run(lines); got = [int(l.split(':')[1].split()[0], 16) for l in out.splitlines() if l.startswith('mem 0300197c')]
bad = [(m, hex(g)) for m, g in zip(moves, got) if (g & 255, g >> 8 & 255) != (26, m[1])]
check('all %d door moves land in the right room' % len(moves), len(got) == len(moves) and not bad)
if bad: print(bad)
check('no bad jumps through the zone', 'bad pc' not in out)

def talk_to(base):
    """He wanders later, so right after arriving he's still at his spawn: stand just below him and press A."""
    pl = int([l for l in run(base + ['mem 03001C34 1']).splitlines() if l.startswith('mem 03001c34')][-1].split()[2], 16)
    return base + ['poke %08X %08X' % (pl + 0x1A0, 320 << 8), 'poke %08X %08X' % (pl + 0x1A4, 382 << 8), 'run 2', 'keys UP', 'run 6', 'keys', 'run 4', 'tap A 80']


route = list(start)
for a in (1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 14):
    nxt = {8: 10}.get(a, a + 1); go(route, [x for x in D[a] if x['to'] == nxt and 'world' not in x][0], PL, 'r%02d' % a)
def ptr(base):
    return int([l for l in run(base + ['mem 03001C34 1']).splitlines() if l.startswith('mem 03001c34')][-1].split()[2], 16)
def boss(base, hp):
    run(base + ['dump w 02000000 40000']); w = open(d + '/w.bin', 'rb').read(); i = w.find(struct.pack('<I', hp << 10))
    return (0x02000000 + i, ) + struct.unpack_from('<II', w, i - 0xEC) if i >= 0 else (None, 0, 0)
def kill(base, hp):
    """Leave the boss 2 HP, stand below it and punch."""
    pl = ptr(base); a, x, y = boss(base, hp)
    return base + ['poke %08X %08X' % (a, 2 << 10), 'poke8 03001577 7F', 'poke %08X %08X' % (pl + 0x1A0, x), 'poke %08X %08X' % (pl + 0x1A4, y + (20 << 8)),
                   'keys UP', 'run 6', 'keys', 'tap A 14', 'tap A 14', 'tap A 14']
def at(out):
    return int([l for l in out.splitlines() if l.startswith('mem 0300197c')][-1].split(':')[1].split()[0], 16) & 0xFFFF
base = route + ['run 30', 'shot arena']
hp1 = boss(base, 60000)[0]; check('Android 13 is in the arena with 60000 HP', hp1 is not None)
phase = kill(base, 60000) + ['poke8 03001577 7F'] + ['tap A 25'] * 11 + ['run 170', 'shot change', 'mem 0300197C 1']
out = run(phase); check('beating Android 13 starts his change', at(out) == (16 << 8 | 26))
two = phase + ['keys UP', 'run 240', 'keys', 'run 120', 'shot phase2', 'mem 0300197C 1']
out = run(two); check('walking up to him starts phase two', at(out) == (17 << 8 | 26))
hp2 = boss(two, 150000)[0]; check('Super 13 has 150000 HP', hp2 is not None)
end = kill(two, 150000) + ['poke8 03001577 7F'] + ['tap A 30'] * 16 + ['shot struggle'] + ['keys A', 'run 1', 'keys', 'run 1'] * 120
end += ['shot bomb', 'run 500', 'shot home_after', 'mem 0300197C 1', 'tap A 40', 'keys LEFT', 'run 10', 'keys', 'dump g 03001068 8a8']
out = run(end); g = open(d + '/g.bin', 'rb').read(); flag = lambda n: g[0x55 + n // 8] >> (n % 8) & 1; g_flag_off = g[0x55 + 149 // 8] & ~(1 << 149 % 8)
check('no bad jumps through the whole fight', 'bad pc' not in out)
check('beating Super 13 plays the finish and sets flag 621', flag(621) == 1 and flag(625) == 1)
check('the finish returns you to West City', at(out) == 0x0104)
talk = lambda b: talk_to(b)
home = end[:end.index('tap A 40')]
reward = talk(home) + ['shot said', 'tap A 60', 'shot said2', 'tap A 60', 'tap A 60', 'tap A 60', 'run 60', 'shot after', 'dump g 03001068 8a8']
out = run(reward); g = open(d + '/g.bin', 'rb').read()
check('the resident gives the reward: Saiyan armor', all(flag(n) for n in (610, 611, 612, 622)))

# Start of the quest: from 26:1's road back to West City, walk up to the same resident, get sent in.
intro = list(start); go(intro, [x for x in D[1] if 'world' in x][0], PL, 'home')
intro = talk(intro) + ['shot ask', 'tap A 60', 'shot ask2', 'tap A 60', 'shot ask3', 'tap A 200', 'run 120', 'mem %s 1' % AT, 'shot zone']
out = run(intro); ats = [l for l in out.splitlines() if l.startswith('mem 0300197c')]
check('the resident sends you to Zone 26 once the game is beaten', int(ats[-1].split(':')[1].split()[0], 16) & 0xFFFF == 0x011A)

# Spirit Bomb: Goku has it in this build (skill 19). Select it, use it next to Super 13, and it should hurt him and spend energy.
a13, x, y = boss(route + ['run 30'], 60000); hpa = a13
sb = route + ['run 30', 'poke %08X %08X' % (BOSS_PL + 0x1A0, x), 'poke %08X %08X' % (BOSS_PL + 0x1A4, y + (64 << 8)), 'keys UP', 'run 4', 'keys', 'run 4',
              'poke8 03001575 4', 'poke8 0300157B 00', 'poke8 0300157A 64', 'poke8 03001577 7F', 'mem 03001578 2', 'tap B 10', 'mem %08X 1' % hpa]
for i, n in enumerate((40, 40, 40, 30, 30, 20, 20, 30)):
    sb += ['poke8 03001577 7F', 'run %d' % n, 'shot sb%d' % i]
sb += ['mem %08X 1' % hpa, 'mem 03001578 2', 'mem 0203FF40 1']
out = run(sb); mems = [l for l in out.splitlines() if l.startswith('mem')]
left = lambda l: int(l.split(':')[1].split()[0], 16)
check('no bad jumps with the Spirit Bomb', 'bad pc' not in out)
hps = [m for m in mems if m.startswith('mem %08x' % hpa)]
check('the Spirit Bomb hits hard', len(hps) >= 2 and left(hps[-1]) < left(hps[0]) - (800 << 10))
print('bomb memory', mems[-1], hps)
check('the Spirit Bomb finishes', left(mems[-1]) >> 16 == 0)

# The Z-Mart's front door works too, and opens onto the game's own shop.
shop = list(start)
for a in (1,):
    go(shop, [x for x in D[a] if x['to'] == 2 and 'world' not in x][0], PL, 'to2')
go(shop, [x for x in D[2] if 'world' in x][0], PL, 'shop')
out = run(shop); ats = [l for l in out.splitlines() if l.startswith('mem 0300197c')]
check("the Z-Mart door opens the shop", int(ats[-1].split(':')[1].split()[0], 16) & 0xFFFF == 92 << 8)

# Before the ending (flag 149 clear) he still only talks about ghosts: no way in.
early = list(start); go(early, [x for x in D[1] if 'world' in x][0], PL, 'home2')
early += ['poke8 %08X %02X' % (0x03001068 + 0x55 + 149 // 8, g_flag_off)]
early = talk(early) + ['shot ghost', 'tap A 60', 'tap A 60', 'tap A 60', 'run 120', 'mem %s 1' % AT]
out = run(early); ats = [l for l in out.splitlines() if l.startswith('mem 0300197c')]
check('before the ending he stays a normal resident', int(ats[-1].split(':')[1].split()[0], 16) & 0xFFFF == 0x0104)
if fails: print('FAILED:', fails); sys.exit(1)
print('screens in', d)
