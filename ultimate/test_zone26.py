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
hp1 = boss(base, 30000)[0]; check('Android 13 is in the arena with 30000 HP', hp1 is not None)
phase = kill(base, 30000) + ['poke8 03001577 7F'] + ['tap A 25'] * 11 + ['run 170', 'shot change', 'mem 0300197C 1']
out = run(phase); check('beating Android 13 starts his change', at(out) == (16 << 8 | 26))
two = phase + ['keys UP', 'run 60', 'keys', 'run 120', 'shot phase2', 'mem 0300197C 1']
out = run(two); check('walking up to him starts phase two', at(out) == (17 << 8 | 26))
hp2 = boss(two, 75000)[0]; check('Super 13 has 75000 HP', hp2 is not None)
end = kill(two, 75000) + ['poke8 03001577 7F'] + ['tap A 30'] * 16 + ['shot struggle'] + ['keys A', 'run 1', 'keys', 'run 1'] * 120
end += ['shot bomb', 'run 500', 'shot home_after', 'mem 0300197C 1', 'tap A 40', 'keys LEFT', 'run 10', 'keys', 'dump g 03001068 8a8']
out = run(end); g = open(d + '/g.bin', 'rb').read(); flag = lambda n: g[0x55 + n // 8] >> (n % 8) & 1; g_flag_off = g[0x55 + 149 // 8] & ~(1 << 149 % 8)
check('no bad jumps through the whole fight', 'bad pc' not in out)
check('beating Super 13 plays the finish and sets flag 621', flag(621) == 1 and flag(625) == 1)
check('the finish returns you to West City', at(out) == 0x0104)
talk = lambda b: talk_to(b)
home = end[:end.index('tap A 40')]
# Join state as in a real game: neither Gogeta nor the guest yet (debug joins the guest at the start).
reward = talk(home + ['poke8 %08X 02' % (0x03001560 + 8 * 0x68), 'poke8 %08X 02' % (0x03001560 + 7 * 0x68)]) + ['shot said', 'tap A 60', 'shot said2', 'tap A 60', 'tap A 60', 'tap A 60', 'run 60', 'shot after', 'dump g 03001068 8a8']
out = run(reward); g = open(d + '/g.bin', 'rb').read()
check('the resident gives the rewards: Saiyan armor and Broly Full Power', all(flag(n) for n in (610, 611, 612, 613, 614, 615, 616, 622)))
forms = json.load(open('ultimate/out/BFU_debug_zone.map.json'))['forms']; rec = lambda c: g[0x4F8 + c * 0x68:0x4F8 + (c + 1) * 0x68]
check('the reward adds DBS Gogeta and Super 13 to the party', rec(7)[0] & 1 == 1 and rec(8)[0] & 1 == 1 and rec(7)[0x14] == forms['gogeta_dbs'] and rec(8)[0x14] == forms['super13'])
check('joining as Super 13, the guest has SS Deadly Bomber, not Eraser Cannon', list(rec(8)[0x0C:0x10]) == [3, 7, 8, 25])
check('Gohan learns Special Beam Cannon from the reward', 26 in list(rec(1)[0x0D:0x0D + rec(1)[0x0C]]))
check('DBS Gogeta keeps his own moves and gains both transformations', list(rec(7)[0x0C:0x12]) == [5, 7, 3, 5, 20, 21])
print('   Gogeta joined at', list(rec(7)[0x28:0x2B]), 'guest at', list(rec(8)[0x28:0x2B]))

# Start of the quest: from 26:1's road back to West City, walk up to the same resident, get sent in.
intro = list(start); go(intro, [x for x in D[1] if 'world' in x][0], PL, 'home')
intro = talk(intro) + ['shot ask', 'tap A 60', 'shot ask2', 'tap A 60', 'shot ask3', 'tap A 200', 'run 120', 'mem %s 1' % AT, 'shot zone']
out = run(intro); ats = [l for l in out.splitlines() if l.startswith('mem 0300197c')]
check('the resident sends you to Zone 26 once the game is beaten', int(ats[-1].split(':')[1].split()[0], 16) & 0xFFFF == 0x011A)

# Boss Rush: once Super 13 is beaten the resident offers it. Nine bosses in a row, then the reward back in West City.
flag_on = lambda n: 'poke8 %08X %02X' % (0x03001068 + 0x55 + n // 8, 1 << n % 8)
rush = list(start); go(rush, [x for x in D[1] if 'world' in x][0], PL, 'rhome')
rush = talk(rush + [flag_on(622)]) + ['shot board', 'tap A 200', 'run 120', 'mem %s 1' % AT, 'shot rush0']
out = run(rush); check('the resident offers the Boss Rush and sends you to its first room', at(out) == (zone26.RUSH_FIRST << 8 | 26))
def boss_any(base):
    """The living boss after the test has already cut its HP."""
    run(base + ['dump w 02000000 40000']); w = open(d + '/w.bin', 'rb').read(); best = (None, 0, 0)
    for i in range(0x28C, len(w) - 4, 4):
        v = struct.unpack_from('<i', w, i)[0]
        if 0 < v <= 64 << 10 and struct.unpack_from('<I', w, i - 0x28C)[0] == 0x0804C484:
            best = (0x02000000 + i, ) + struct.unpack_from('<II', w, i - 0xEC)
    return best
def rush_boss(base, hp):
    """The boss by its class and HP, allowing for a few stray punches from the test on the way in."""
    run(base + ['dump w 02000000 40000']); w = open(d + '/w.bin', 'rb').read(); best = (None, 0, 0)
    for i in range(0x28C, len(w) - 4, 4):
        v = struct.unpack_from('<i', w, i)[0]
        if (hp - 5000) << 10 < v <= hp << 10 and struct.unpack_from('<I', w, i - 0x28C)[0] == 0x0804C484:
            best = (0x02000000 + i, ) + struct.unpack_from('<II', w, i - 0xEC)
    return best
for k, _ in enumerate(zone26.RUSH):
    hp = zone26.RUSH_HP[k]
    here = at(run(rush + ['mem %s 1' % AT]))
    found = rush_boss(rush, hp)
    check('Boss Rush fight %d is there with %d HP' % (k + 1, hp), found[0] is not None)
    if found[0] is None: break
    # The bosses move and teleport, so look again and try again until the room changes. Going down here would end at the title screen, whose A presses start a new game, so his HP is kept up in both places it lives.
    for attempt in range(12):
        found = rush_boss(rush, hp)
        if found[0] is None: found = boss_any(rush)
        a_, x_, y_ = found; pl_ = ptr(rush)
        heal = ['poke8 03001577 7F', 'poke %08X %08X' % (pl_ + 0x28C, 30000 << 10)]
        near = ['poke %08X %08X' % (pl_ + 0x1A0, x_), 'poke %08X %08X' % (pl_ + 0x1A4, y_ + (20 << 8))]
        rush = rush + heal + ['poke %08X %08X' % (a_, 2 << 10)] + near + ['keys UP', 'run 3', 'keys', 'tap A 14'] + heal + ['tap A 30'] * 6 + heal + ['run 150', 'mem %s 1' % AT]
        out = run(rush)
        if 'bad pc' in out or at(out) != here: break
    print('   fight %d took %d tries' % (k + 1, attempt + 1))
    run(rush + ['shot rush%d' % (k + 1)])
    if k < len(zone26.RUSH) - 1: check('beating it moves on to the next room', 'bad pc' not in out and at(out) == ((zone26.RUSH_FIRST + k + 1) << 8 | 26))
check('beating the last one brings you home to West City', at(out) == 0x0104)
done = talk(rush + ['poke8 %08X 04' % (0x03001068 + 0x55 + 641 // 8)]) + ['shot rushtalk', 'tap A 60', 'tap A 60', 'tap A 60', 'tap A 60', 'run 60', 'shot rushdone', 'dump g 03001068 8a8']
out = run(done); g = open(d + '/g.bin', 'rb').read()
check('the resident pays the reward', flag(641) == 1 and 'bad pc' not in out)
again = talk(done) + ['shot rushagain', 'tap A 200', 'run 120', 'mem %s 1' % AT]
out = run(again); check('after the reward he offers the Boss Rush again', at(out) == (zone26.RUSH_FIRST << 8 | 26))
print('rush screens in', d)

# Spirit Bomb: Goku has it in this build (skill 19). Select it, use it next to Super 13, and it should hurt him and spend energy.
a13, x, y = boss(route + ['run 30'], 30000); hpa = a13
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
