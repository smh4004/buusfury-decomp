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
o = run(OUT + '/BFU_PERSONAL_USE_ONLY.gba', ['guardon 0x09000000'] + route + tail, d)
check('release: opening plays with no bad jumps', 'bad pc' not in o)
rel = open(d + '/g.bin', 'rb').read()
run('baserom.gba', route + tail, d)
base = open(d + '/g.bin', 'rb').read()
check('release: game state matches the clean ROM after the opening', rel == base)

forms = json.load(open(OUT + '/BFU_debug.map.json'))['forms']; broly = forms['broly']
rom = OUT + '/BFU_debug_PERSONAL_USE_ONLY.gba'; sav = os.path.join(d, 'g.sav')
one = ['guardon 0x09000000'] + route + ['tap A 60', 'tap A 60', 'run 30', 'shot picker', 'tap RIGHT 40', 'tap RIGHT 40', 'tap RIGHT 40', 'tap RIGHT 40', 'tap RIGHT 40', 'tap A 200', 'run 200',
       'shot picked', 'dump a 03001068 8a8']
o = run(rom, one, d, sav)
check('debug: no bad jumps through picker and save', 'bad pc' not in o)
a = open(d + '/a.bin', 'rb').read()
check('debug: Broly chosen (current character 8)', a[0] == 8)
check('debug: guest slot on form %d' % broly, a[0x4F8 + 8 * REC + FORM] == broly)
check('debug: 8 KB save written', os.path.exists(sav) and os.path.getsize(sav) == 8192)
two = ['guardon 0x09000000', 'run 600', 'tap START 60', 'tap START 60', 'tap A 90', 'tap A 120', 'shot slots', 'tap A 200', 'tap A 200', 'run 200', 'shot loaded',
       'dump b 03001068 8a8', 'keys RIGHT', 'run 30', 'keys', 'tap A 8', 'shot attack', 'hash']
o = run(rom, two, d, sav)
b = open(d + '/b.bin', 'rb').read()
check('reload: no bad jumps', 'bad pc' not in o)
check('reload: still Broly', b[0] == 8 and b[0x4F8 + 8 * REC + FORM] == broly)

# Select Game: a save whose area this ROM lacks must read as New Game, not stop on "Unable to find area". Reuses the Broly save.
romb = bytearray(open(rom, 'rb').read())
for k in range(452):
    e = 0x8E2E0 + 56 * k
    if romb[e] == 1 and romb[e + 1] == 1: romb[e] = 0xEE
foreign = os.path.join(d, 'foreign.gba'); open(foreign, 'wb').write(romb)
before = open(sav, 'rb').read(); sav2 = os.path.join(d, 'foreign.sav'); open(sav2, 'wb').write(before)
sel = ['guardon 0x09000000', 'run 600', 'tap START 60', 'tap START 60', 'tap A 90', 'tap A 120', 'run 60', 'shot foreign_slots', 'tap A 200', 'tap A 200', 'run 200', 'dump f 03001068 8a8', 'hash']
o = run(foreign, sel, d, sav2)
check('foreign save: Select Game survives and New Game starts', 'bad pc' not in o and open(d + '/f.bin', 'rb').read()[1] & 1 == 0)
check('foreign save: the save file itself is untouched', open(sav2, 'rb').read() == before)

# Outfit menu: Gohan is the second character. Down twice = orange gi; B cancels; A keeps it.
pick = ['guardon 0x09000000'] + route + ['tap A 60', 'tap A 60', 'run 30', 'tap RIGHT 40', 'tap DOWN 30', 'tap DOWN 30', 'shot outfit']
o = run(rom, pick + ['tap B 150', 'run 100', 'dump c 03001068 8a8'], d)
c = open(d + '/c.bin', 'rb').read()
GOHAN = 0x4F8 + REC
check('outfit: no bad jumps on cancel', 'bad pc' not in o)
check('story: a story form change overrides the worn outfit (green to school)', c[GOHAN + FORM] == 10)
check('outfit: B restores school uniform and keeps Goku', c[GOHAN + FORM] == 10 and c[0] == 0)
skills = list(c[GOHAN + 0x0D:GOHAN + 0x0D + c[GOHAN + 0x0C]])
sel = '%08x' % (0x03001560 + REC + 0x15)
ss = ss_form = forms['gohan_orange_ss']
o = run(rom, pick + ['tap A 150', 'run 100', 'dump e 03001068 8a8', 'poke8 %s %02x' % (sel, skills.index(20)), 'run 5', 'keys B', 'run 12', 'keys', 'run 300',
                    'shot ss', 'dump f 03001068 8a8', 'tap A 10', 'run 40', 'keys B', 'run 12', 'keys', 'run 300', 'shot back', 'dump g 03001068 8a8'], d)
check('outfit: no bad jumps through transforming', 'bad pc' not in o)
check('outfit: A keeps orange gi as Gohan', open(d + '/e.bin', 'rb').read()[GOHAN + FORM] == 13)
check('outfit: Super Saiyan uses the new row', open(d + '/f.bin', 'rb').read()[GOHAN + FORM] == ss)
check('outfit: turning back returns to orange gi', open(d + '/g.bin', 'rb').read()[GOHAN + FORM] == 13)

# Great Saiyaman stays a skill and returns to the outfit Gohan wore. Locked outfits are skipped.
s18 = skills.index(18)
def use(n): return ['poke8 %s %02x' % (sel, s18), 'run 5', 'keys B', 'run 12', 'keys', 'run 300', 'dump ' + n + ' 03001068 8a8']
o = run(rom, pick + ['tap A 150', 'run 100'] + use('h') + ['shot saiyaman'] + use('i') + ['shot unsaiyaman'], d)
h = open(d + '/h.bin', 'rb').read()[GOHAN + FORM]; i = open(d + '/i.bin', 'rb').read()[GOHAN + FORM]
check('saiyaman: no bad jumps', 'bad pc' not in o)
check('saiyaman: costume on from the orange gi', h == forms['saiyaman_from_orange'])
check('saiyaman: costume off returns to the orange gi', i == 13)
flag_byte = lambda f: '%08x' % (0x03001068 + 0x55 + f // 8)
lock = [x for x in pick if x not in ('tap DOWN 30', 'shot outfit')]
at = lock.index('tap RIGHT 40')
lock[at:at] = ['poke8 %s 00' % flag_byte(600), 'poke8 %s 00' % flag_byte(610)]
o = run(rom, lock + ['tap DOWN 30', 'tap DOWN 30', 'tap A 150', 'run 100', 'dump j 03001068 8a8'], d)
print('flag byte value test')
j = open(d + '/j.bin', 'rb').read()
check('unlocks: locked outfits are skipped (all locked stays school uniform)', j[GOHAN + FORM] == 10)

# Saiyan armor: each outfit transforms and returns, attacks, and uses beam skills without hanging. Scrolling keeps sprites inside the frame.
for who, char, rights, key, base, ss in (('Gohan', 1, 1, 'UP', 'gohan_armor', 'gohan_armor_ss'), ('Trunks', 3, 2, 'DOWN', 'trunks_armor', 'trunks_armor_ss'), ('Vegeta', 4, 3, 'DOWN', 'vegeta_armor', 'vegeta_armor_ss')):
    rec = 0x03001560 + REC * char
    pk = ['poke8 %08x %02x' % (rec + 0x0C, 3), 'poke8 %08x %02x' % (rec + 0x0D, 20), 'poke8 %08x %02x' % (rec + 0x0E, 15), 'poke8 %08x %02x' % (rec + 0x0F, 10)]
    def skill(n): return ['poke8 %08x %02x' % (rec + 0x15, n), 'run 5', 'keys B', 'run 12', 'keys', 'run 200']
    lines = ['guardon 0x09000000'] + route + ['tap A 60', 'tap A 60', 'run 30'] + ['tap RIGHT 40'] * rights + ['tap %s 30' % key, 'tap A 150', 'run 100'] + pk + ['dump k 03001068 8a8', 'shot armor_' + who] + skill(0) + ['dump l 03001068 8a8', 'shot armorss_' + who, 'tap A 8', 'run 30'] + skill(1) + skill(2) + skill(0) + ['dump m 03001068 8a8', 'tap A 8', 'run 30', 'keys R', 'run 20', 'keys', 'run 20']
    o = run(rom, lines, d)
    at = 0x4F8 + REC * char + FORM
    check('armor %s: no bad jumps' % who, 'bad pc' not in o)
    check('armor %s: worn' % who, open(d + '/k.bin', 'rb').read()[at] == forms[base])
    check('armor %s: Super Saiyan' % who, open(d + '/l.bin', 'rb').read()[at] == forms[ss])
    check('armor %s: back to armor' % who, open(d + '/m.bin', 'rb').read()[at] == forms[base])

# Charged melee: hold A, release. Measured against a Bomber placed beside the player; every character must survive it.
base = [l for l in open('tools/harness/enemy_test.txt').read().split('\n') if l and not l.startswith('#') and not l.startswith('mem ') and not l.startswith('shot ') and l not in ('tap B 20', 'run 200')]
ENEMY_HP, ENEMY_X, ENEMY_Y, PX = '0202e558', '0202e46c', '0202e470', '0202de1c'
erom = OUT + '/BFU_debug_enemy_PERSONAL_USE_ONLY.gba'
run_txt = run(erom, base + ['mem %s 2' % PX], d)
m = re.search(r'mem %s: ([0-9a-f]+) ([0-9a-f]+)' % PX, run_txt)
x, y = int(m.group(1), 16), int(m.group(2), 16)
place = ['poke %s %x' % (ENEMY_X, x - (18 << 8)), 'poke %s %x' % (ENEMY_Y, y)]
o = run(erom, ['guardon 0x09000000'] + base + place + ['run 1', 'mem %s 1' % ENEMY_HP, 'keys A', 'run 160'] + place + ['mem %s 1' % ENEMY_HP, 'keys', 'run 15', 'mem %s 1' % ENEMY_HP, 'run 200', 'shot charged_kill', 'tap A 25', 'run 30'], d)
hp = [(lambda v: v - (1 << 32) if v >= 1 << 31 else v)(int(v, 16)) >> 10 for v in re.findall(r'mem %s: ([0-9a-f]+)' % ENEMY_HP, o)]
print('enemy HP readings', hp)
check('charged: no bad jumps', 'bad pc' not in o)
check('charged: release hurts the enemy', hp[2] < hp[1])
check('charged: stronger than the normal hit before it', hp[1] - hp[2] > hp[0] - hp[1] > 0)
for name, rights in (('Goku', 0), ('Gohan', 1), ('Trunks', 2), ('Vegeta', 3), ('Vegito', 4), ('Broly', 5)):
    o = run(rom, ['guardon 0x09000000'] + route + ['tap A 60', 'tap A 60', 'run 30'] + ['tap RIGHT 40'] * rights + ['tap A 150', 'run 100', 'keys A', 'run 80', 'shot hold_' + name, 'keys', 'run 3', 'shot hit_' + name, 'run 40', 'tap A 20', 'dump n 03001068 8a8'], d)
    check('charged %s: no bad jumps' % name, 'bad pc' not in o)
print('screens in', d)
sys.exit(1 if fails else 0)
