#!/usr/bin/env python3
"""Walk Zone 26 on foot (build `--debug --zone` first; set BFU_PROTO, BFU_LOG2): no position pokes, only held keys, the way a player gets
through. From Snake Way's debug door, every door both ways, then on to Android 13. test_zone26.py pokes the fighter onto each door, so it
can't see a door nobody can reach. Also checks the debug door leaves the rest of Snake Way walkable."""
import collections, json, os, subprocess, sys
sys.path[:0] = ['ultimate', 'ultimate/lib', 'tools/scripts']
import zone26
OUT = sys.argv[1]; ROM = 'ultimate/out/BFU_debug_zone_PERSONAL_USE_ONLY.gba'
PROTO = os.environ['BFU_PROTO']; cfg = json.load(open('ultimate/zone26.json'))
masks, D, _ = zone26.final_masks(open(PROTO, 'rb').read(), PROTO, os.environ['BFU_LOG2'], cfg)
fails = []
def check(n, ok):
    print(('PASS ' if ok else 'FAIL ') + n)
    if not ok: fails.append(n)
h = subprocess.Popen(['tools/harness/harness', ROM, '/dev/stdin', OUT], stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True, bufsize=1)
def tx(*ls):
    for l in ls: h.stdin.write(l + '\n')
    h.stdin.flush()
def rd(addr):
    tx('mem %08X 1' % addr)
    while True:
        l = h.stdout.readline()
        if not l: sys.exit('the game stopped')
        if l.startswith('mem %08x' % addr): return int(l.split()[2], 16)
def room(): return rd(0x0300197C) & 0xFFFF
def pos():
    p = rd(0x03001C34); return rd(p + 0x1A0) >> 8, rd(p + 0x1A4) >> 8
KEYS = {(0, 1): 'DOWN', (0, -1): 'UP', (-1, 0): 'LEFT', (1, 0): 'RIGHT'}; HERE = lambda a: a << 8 | 26
def path(a, frm, door):
    """Prefer the middle of the floor: try a wide margin round the body first, as a player would."""
    m = masks[a]; x0, y0, x1, y1 = door['rect']; s = (frm[0] & ~3, frm[1] & ~3)
    for r in (16, 12, 8, 4, 0):
        ok = lambda x, y: all(zone26.walkable(m, x + dx, y + dy) for dx in (-r, r) for dy in (-r, r))
        prev = {s: None}; q = collections.deque([s])
        while q:
            c = q.popleft()
            if x0 <= c[0] < x1 and y0 <= c[1] < y1 and zone26.walkable(m, *c):
                out = []
                while c: out.append(c); c = prev[c]
                return out[::-1]
            for dx, dy in KEYS:
                n = (c[0] + dx * 4, c[1] + dy * 4)
                if n not in prev and (ok(*n) or (zone26.walkable(m, *n) and x0 - 12 <= n[0] < x1 + 12 and y0 - 12 <= n[1] < y1 + 12)): prev[n] = c; q.append(n)
    return None
def through(a, door):
    """Walk to the door and press into it. Returns None once through, else what went wrong."""
    want = (door.get('world', 26) | door['to'] << 8)
    p = path(a, pos(), door)
    if p is None: return 'no way to the door from %s' % (pos(),)
    legs = []
    for u, v in zip(p, p[1:]):
        d = (v[0] - u[0]) // 4, (v[1] - u[1]) // 4
        if legs and legs[-1][0] == d: legs[-1][1] = v
        else: legs.append([d, v])
    for d, v in legs:
        tx('keys ' + KEYS[d]); last = None; idle = 0
        while True:
            tx('run 1'); x, y = pos()
            if room() == want: tx('keys'); return None
            if (x - v[0]) * d[0] >= -1 and (y - v[1]) * d[1] >= -1: break
            idle = idle + 1 if (x, y) == last else 0; last = (x, y)
            if idle > 60: tx('keys'); return 'stopped at %s heading %s' % ((x, y), KEYS[d])
        tx('keys')
    tx('keys ' + 'DOWN UP LEFT RIGHT'.split()[door['key']], 'run 60', 'keys', 'run 60')
    return None if room() == want else 'door did nothing at %s' % (pos(),)
intro = open('tools/harness/long.txt').read().split('\n')[1:93] + ['tap A 60'] * 4 + ['run 60']
tx(*intro)
snake = room(); x0, y0 = pos(); tx('keys RIGHT', 'run 40', 'keys DOWN', 'run 12', 'keys', 'run 30')
check('Snake Way: walking right and stepping down stays on Snake Way', room() == snake and pos()[0] > x0)
tx('keys LEFT', 'run 40', 'keys', 'run 2')
p = rd(0x03001C34); tx('poke %08X %08X' % (p + 0x1A0, x0 << 8), 'poke %08X %08X' % (p + 0x1A4, y0 << 8), 'keys DOWN', 'run 30', 'keys', 'run 200')
check('Snake Way: Down on the starting spot reaches Zone 26', room() == HERE(1))
def go(a, b):
    if a == zone26.building_room():
        tx('keys DOWN', 'run 120', 'keys', 'run 90'); ok = room() == HERE(2); check('the house in room 2 leads back to room 2', ok); return ok
    tx('poke8 03001576 FF', 'poke8 03001577 7F')       # Android 13 may hit you on the way out of his room
    door = [x for x in D[a] if x['to'] == b and x.get('world', 26) == 26][0]
    tx('run 40'); e = through(a, door); tx('run 60')
    check('%2d -> %2d on foot%s' % (a, b, ': ' + e if e else ''), not e and room() == HERE(b))
    return not e
route = (1, 2, zone26.building_room(), 2, 3, 4, 5, 6, 7, 8, 9, 8, 10, 11, 12, 13, 14, 15)
for a, b in zip(route, route[1:]):
    if not go(a, b): break
else:
    tx('run 60', 'shot walk_arena'); check('Android 13 reached', room() == HERE(15))
    back = route[::-1]
    for a, b in zip(back, back[1:]):
        if not go(a, b): break
# Once he's beaten: back in through the arena door, no one there, and out again the same way, all the way to West City.
SONG = 0x083BB78C + 20 * zone26.GLACIER_SONG
check('Glacier plays Era of Darkness', rd(0x030038B0) == SONG)
G = 0x03001068
def on(n):
    a = G + 0x55 + n // 8; tx('poke8 %08X %02X' % (a, (rd(a & ~3) >> (8 * (a & 3)) & 255) | 1 << n % 8))
for n in (884, 885, 886, 882): on(n)
p = rd(0x03001C34); door = [x for x in D[14] if x['to'] == 15][0]; x0, y0, x1, y1 = door['rect']
route = (1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 14)
for a, b in zip(route, route[1:]):
    d = [x for x in D[a] if x['to'] == b and x.get('world', 26) == 26][0]; x0, y0, x1, y1 = d['rect']; p = rd(0x03001C34)
    tx('poke %08X %08X' % (p + 0x1A0, (x0 + x1) // 2 << 8), 'poke %08X %08X' % (p + 0x1A4, (y0 + y1) // 2 << 8), 'keys ' + 'DOWN UP LEFT RIGHT'.split()[d['key']], 'run 12', 'keys', 'run 110')
check('after the win: back at the arena door', room() == HERE(14))
go(14, 15); tx('run 120', 'shot walk_after_win')
check('after the win: nobody in the arena', room() == HERE(15) and rd(0x03001BB0) == 0)
back = (15, 14, 13, 12, 11, 10, 8, 7, 6, 5, 4, 3, 2, 1)
for a, b in zip(back, back[1:]):
    if not go(a, b): break
d = [x for x in D[1] if x.get('world') == 4][0]; tx('run 30'); e = through(1, d)
check('after the win: on foot all the way out to West City%s' % (': ' + e if e else ''), not e and room() & 255 == 4)
tx('shot walk_end'); h.stdin.close(); h.wait(10)
print('FAILED:' if fails else 'all passed', fails or '')
sys.exit(1 if fails else 0)
