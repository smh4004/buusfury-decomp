#!/usr/bin/env python3
"""Buu's Fury Ultimate Edition build. Run from the repo root.

    python3 ultimate/build.py [--debug]

Needs baserom.gba (clean USA Buu's Fury, checked by SHA-1) and assets from `make extract`.
Steps: apply edits to assets (debug only for now), `make modern`, move the form table past the ROM's old end,
append ultimate/forms.json rows, then write ultimate/out/BFU[_debug].bps and a personal-use .gba.
Asset edits are always undone afterwards, so assets/ stays a clean extract.
"""
import hashlib, json, os, shutil, struct, subprocess, sys, tempfile
sys.path.insert(0, os.path.join('tools'))
sys.path.insert(0, 'ultimate/lib')
import bps
import numpy as np
import sprites, artclean

CLEAN_SHA1 = 'f1c4b07554d2a3b1ad2f325307051e775ce68087'
ROM_BASE = 0x08000000
FORMS, FORM_COUNT, FORM_SIZE = 0x6B82EC, 54, 24
NATIVES = 0x55098
CODE_END = 0x54FBC
SPACE = 0x800000                 # new data starts at the old 8 MB end: forms, then code
ACTORS_AT = 0x820000             # moved actor table and imported sprites
COMBO_SHA1 = 'f02d179accbeb9b68bcaef8720eb0ae426dde6ee'
PROTO = os.environ.get('BFU_PROTO', 'protoD.gba')   # Prototype D cart: Super 13 and Zone 26
LOG2 = os.environ.get('BFU_LOG2', 'log2.gba')      # Legacy of Goku II (USA): Zone 26's snow tiles
COMBO = os.environ.get('BFU_COMBO', 'combo.gba')   # Legacy of Goku I & II cart; LoG2 = its second 8 MB
DEBUG_NATIVE = 0xF7              # debug builds only: "save to slot 1" (not used by any game script)
OUT = 'ultimate/out'
SAIYAMAN = [(10, 14), (15, 'saiyaman_from_green'), (13, 'saiyaman_from_orange')]
ACTORS_FILE = 'assets/areas/a033_w01_01_Snakeway.actors'
INTRO = 'assets/scripts/gUnknown_0877CBF0.evt'
FIELD = 'assets/scripts/gUnknown_08780550.evt'


QUEST_NPC = 'assets/scripts/gUnknown_08785580.evt'   # the West City resident outside the Z-Mart


def quest_npc(src):
    """Post-game, this resident sends you to Zone 26, and rewards you once Super 13 is beaten (his death script runs this list)."""
    head, old = src.split('step 1 say', 1)
    return head + '''step 1 code
    pushn 622
    call flag
    jz L1
    push 11
    end
L1:
    pushn 621
    call flag
    jz L2
    push 8
    end
L2:
    call flag(149)
    jz L3
    push 4
L3:
    end
step 2 say''' + old.rstrip() + '''
step auto code
    push 99
    end
step auto say 0x85 "Something's wrong past the Z-Mart. Dr. Gero's old computer has woken up!"
step auto say 0x85 "It built one last Android, up in the snow. Hurry!"
step auto code
    call 0x78(30)
    pushn 26, 1, 1, 128, 240
    call 0x77
    call 0x79(30)
    end
step auto code
    push 99
    end
step auto say 0x85 "The signal stopped! You beat Super 13!"
step auto say 0x85 "Capsule Corporation left Saiyan armor for you. Change into it from the Switch Character menu."
step auto code
    pushn 622
    call set_flag
    pushn 610
    call set_flag
    pushn 611
    call set_flag
    pushn 612
    call set_flag
    push 99
    end
step auto say 0x85 "West City's quiet again. Thanks to you."
'''


def debug_edits(first_form):
    """Join Vegito and guest Broly at the start, and open the picker, then save, when the intro ends."""
    heal = ''.join('    push %d\n    set %s\n' % (v, n) for v, n in ((500, 'max_hp'), (500, 'hp'), (100, 'max_ki'), (100, 'ki')))
    flags = ''.join('    pushn %d\n    call set_flag\n' % f for f in sorted({o['flag'] for l in json.load(open('ultimate/outfits.json'))['characters'].values() for o in l if o['flag']}))
    if '--zone' in sys.argv: flags += '    pushn 149\n    call set_flag\n'
    join = ('step auto code\n' + flags + '    call 0x97(1)\n    call 0x97(3)\n    call 0x97(4)\n    call 0x97(6)\n    call 0x97(8)\n    call 0x95(3)\n' + heal + '    call 0xD0(21)\n    call 0x95(4)\n' + heal + '    call 0xD0(26)\n    call 0x95(1)\n' + heal + '    call 0xD0(15)\n    pushn 1, 107\n    call 0x9D\n    call 0xA4(1, 20)\n    call 0xA4(1, 18)\n    call 0x95(6)\n' + heal + '    call 0x95(8)\n' + heal +
            '    call 0xD0(%d)\n    call 0x95(0)\n    end\n' % first_form)
    s = open(INTRO).read()
    assert 'step 19 raw' in s
    open(INTRO, 'w').write(s.replace('step 19 raw', join + 'step 19 raw', 1))
    if '--enemy' in sys.argv:
        open(ACTORS_FILE, 'a').write('enemy 8 0x70 0xB0 34   ; debug: a Bomber to test attacks on\n')
    s = open(FIELD).read()
    zone = '--zone' in sys.argv
    tail = '    set 0x10\n    end\n'
    i = s.rfind(tail)
    assert i > 0
    open(FIELD, 'w').write(s[:i] + (tail if zone else '    set 0x10\n    call 0x8D\n    call 0x%X\n    end\n' % DEBUG_NATIVE) + s[i + len(tail):])


def unlock_edits():
    """Set each outfit's unlock flag where the story first gives that outfit."""
    cfg = json.load(open('ultimate/outfits.json'))
    touched = {}
    for u in cfg['unlocks']:
        p = 'assets/scripts/%s.evt' % u['list']
        s = open(p).read()
        touched.setdefault(p, s)
        if u['find'] not in s:
            sys.exit('unlock site not found in ' + p)
        open(p, 'w').write(s.replace(u['find'], '    pushn %d\n    call set_flag\n' % u['flag'] + u['find'], 1))
    return touched


def unlock_edits_paths():
    cfg = json.load(open('ultimate/outfits.json'))
    return {'assets/scripts/%s.evt' % u['list']: open('assets/scripts/%s.evt' % u['list']).read() for u in cfg['unlocks']}


def save_stub(addr):
    """Thumb native: sub_08004962(&G, slot 0, position, 0), the game's full save call."""
    src = """.syntax unified
.thumb
push {r4, lr}
sub sp, #8
ldr r0, =0x03001068
movs r1, #0
str r1, [sp]
movs r2, #120
str r2, [sp, #4]
mov r2, sp
movs r3, #0
ldr r4, =0x08004963
bl 1f
add sp, #8
pop {r4}
pop {r0}
bx r0
1: bx r4
.ltorg
"""
    d = tempfile.mkdtemp()
    open(d + '/s.s', 'w').write(src)
    subprocess.run(['arm-none-eabi-as', '-mthumb', '-mcpu=arm7tdmi', d + '/s.s', '-o', d + '/s.o'], check=True)
    subprocess.run(['arm-none-eabi-objcopy', '-O', 'binary', d + '/s.o', d + '/s.bin'], check=True)
    return open(d + '/s.bin', 'rb').read()


def find_once(rom, needle, what):
    i = rom.find(needle)
    if i < 0 or rom.find(needle, i + 1) >= 0:
        sys.exit('%s: expected exactly one match' % what)
    return i


def add_actors(rom, clean):
    combo = open(COMBO, 'rb').read()
    if hashlib.sha1(combo).hexdigest() != COMBO_SHA1:
        sys.exit('%s is not the Legacy of Goku I & II (USA) cart (SHA-1 mismatch); set BFU_COMBO.' % COMBO)
    cfg = json.load(open('ultimate/actors.json'))
    slots = cfg.pop('_slots')
    for k, a in cfg.items():
        if not k.startswith('_') and 'replace' not in a: a['log2_slots'] = slots
    pal = np.frombuffer(clean[0x701B0 + 768:0x701B0 + 1536], np.uint8).reshape(256, 3)
    usable = [i for i in range(1, 256) if i not in artclean.MENU_SLOTS]
    cfg['super13'] = {'proto_actor': 230}
    ids, end = sprites.build_actors(rom, cfg, None, ACTORS_AT, combo[0x800000:], lambda act: (usable, pal), open(PROTO, 'rb').read())
    return ids, end


def patch_forms(rom, clean, cfg, actors):
    old = find_once(rom, clean[FORMS:FORMS + FORM_SIZE * FORM_COUNT], 'form table')
    rows = bytearray(rom[old:old + FORM_SIZE * FORM_COUNT])
    index = {}
    ids = {r['id']: k for k, r in enumerate(cfg['rows'])}
    for k, r in enumerate(cfg['rows']):
        row = bytearray(rows[FORM_SIZE * r['copy']:FORM_SIZE * (r['copy'] + 1)])
        if 'name' in r:
            struct.pack_into('<HH', row, 2, r['name'], r.get('status_name', r['name']))
        row[0x0C] = r['owner']
        struct.pack_into('<H', row, 0x0E, actors[r['actor']] + 9 if 'actor' in r else r['character'])
        if 'portrait' in r:
            row[0x10:0x16] = bytes([r['portrait']]) * 6
        for off, key in ((0x16, 'up'), (0x17, 'down')):
            v = r.get(key, 255)
            row[off] = v if isinstance(v, int) else FORM_COUNT + ids[v]
        if 'flags' in r:
            struct.pack_into('<H', row, 0, r['flags'])
        rows += row
        index[r['id']] = FORM_COUNT + k
    for k, e in cfg.get('edit', {}).items():
        o = FORM_SIZE * int(k)
        if 'up' in e: rows[o + 0x16] = index[e['up']]
        if 'down' in e: rows[o + 0x17] = index[e['down']]
    if len(rows) // FORM_SIZE > 255:
        sys.exit('too many forms: 255 is the "none" marker')
    rom[SPACE:SPACE + len(rows)] = rows
    n = 0
    for o in range(0, CODE_END, 4):
        if struct.unpack_from('<I', rom, o)[0] == ROM_BASE + old:
            struct.pack_into('<I', rom, o, ROM_BASE + SPACE)
            n += 1
    if n != 37:
        sys.exit('form table: expected 37 code references, found %d' % n)
    return index, SPACE + len(rows)


def symbol(name):
    out = subprocess.run(['arm-none-eabi-nm', 'buusfury_modern.elf'], capture_output=True, text=True, check=True).stdout
    for line in out.splitlines():
        p = line.split()
        if p[-1] == name:
            return int(p[0], 16)
    sys.exit('symbol %s not found' % name)


def add_outfits(rom, clean, at):
    """Compile the outfit code with its table at `at`, then point the Switch Character screen's vtable at it."""
    cfg = json.load(open('ultimate/outfits.json'))['characters']
    index, table = [], []
    fm = json.load(open(OUT + '/_forms.json'))
    for c in range(9):
        lst = cfg.get(str(c), [])
        index.append('{%d,%d}' % (len(table), len(lst)))
        form = lambda v: v if isinstance(v, int) else fm[v]
        table += ['{%d,%d,%d,(const u16 *)L"%s"}' % (form(o['form']), o.get('also', 255), o['flag'], o['name']) for o in lst]
    d = tempfile.mkdtemp()
    pairs = ['{%d,%d}' % (base, 14 if row == 14 else fm[row]) for base, row in SAIYAMAN]
    c = open('ultimate/src/outfit.c').read() + '\nconst u16 outfit_index[9][2] = {%s};\nconst struct outfit outfit_table[] = {%s};\nconst u8 saiyaman_map[][2] = {%s};\nconst int saiyaman_count = %d;\n' % (','.join(index), ','.join(table) or '{0,0,0,0}', ','.join(pairs), len(pairs))
    open(d + '/o.c', 'w').write(c)
    flags = ['-mthumb', '-mcpu=arm7tdmi', '-O2', '-ffreestanding', '-fno-builtin', '-nostdlib', '-fshort-wchar', '-DSOUND_MOVE=0x%X' % symbol('gUnknown_0831947C'), '-DFONT=0x%X' % symbol('gUnknown_0807012C'), '-DMELEE_RECTS=0x083C344C', '-DSOUND_HIT=0x%X' % symbol('gUnknown_083192A8')]
    syms = ['-Wl,--defsym=form_table=0x%X' % (ROM_BASE + SPACE), '-Wl,-Ttext=0x%X' % (ROM_BASE + at), '-Wl,-e,picker_update', '-Wl,--no-warn-rwx-segments']
    lib = subprocess.run(['arm-none-eabi-gcc', '-mthumb', '-mcpu=arm7tdmi', '-print-libgcc-file-name'], capture_output=True, text=True, check=True).stdout.strip()
    subprocess.run(['arm-none-eabi-gcc'] + flags + syms + [d + '/o.c', lib, '-o', d + '/o.elf'], check=True)
    subprocess.run(['arm-none-eabi-objcopy', '-O', 'binary', d + '/o.elf', d + '/o.bin'], check=True)
    code = open(d + '/o.bin', 'rb').read()
    nm = subprocess.run(['arm-none-eabi-nm', d + '/o.elf'], capture_output=True, text=True, check=True).stdout
    sym = {l.split()[2]: int(l.split()[0], 16) for l in nm.splitlines() if len(l.split()) == 3}
    if set(rom[at:at + len(code)]) != {0xFF}:
        sys.exit('outfit code space is not free')
    rom[at:at + len(code)] = code
    vt = symbol('_0804A5E0') - ROM_BASE
    for slot, want, name in ((5, 0x0802EBA5, 'picker_update'), (8, 0x0802ECEB, 'picker_input')):
        if ROM_BASE + vt + struct.unpack_from('<i', rom, vt + 4 * slot)[0] != want:
            sys.exit('vtable slot %d changed' % slot)
        struct.pack_into('<i', rom, vt + 4 * slot, (sym[name] | 1) - (ROM_BASE + vt))
    for vt, want, name in ((0x4C384, 0x08012D8B, 'state_a'), (0x4BEF0, 0x08012DEF, 'state_b'), (0x4C790, 0x08013023, 'state_c'), (0x4C3A8, 0x080131BB, 'state_d')):
        if ROM_BASE + vt + struct.unpack_from('<i', rom, vt + 8)[0] != want:
            sys.exit('state vtable changed at 0x%X' % vt)
        struct.pack_into('<i', rom, vt + 8, (sym[name] | 1) - (ROM_BASE + vt))
    if rom[0x3C344C:0x3C348C] != clean[0x3C344C:0x3C348C]:
        sys.exit('melee rectangles moved')
    IN, OUT_SITE = 0x1C5F2, 0x1C2D2
    if rom[IN:IN + 10] != bytes.fromhex('0e202875301cff305130') or rom[OUT_SITE:OUT_SITE + 8] != bytes.fromhex('0a202875301cf030'):
        sys.exit('Great Saiyaman code changed')
    rom[IN:IN + 10] = bytes.fromhex('0149fe460847') + struct.pack('<I', sym['saiyaman_hook_in'] | 1)
    rom[OUT_SITE:OUT_SITE + 12] = bytes.fromhex('0149fe460847') + struct.pack('<I', sym['saiyaman_hook_out'] | 1) + bytes.fromhex('c046')
    patch_slot_read(rom, sym)
    return at + len(code)


def thumb_bl(at, to):
    d = (to - (at + 4)) >> 1
    return struct.pack('<HH', 0xF000 | (d >> 11 & 0x7FF), 0xF800 | (d & 0x7FF))


def patch_slot_read(rom, sym):
    """Send the game's three save-slot reads through slot_read. Code that far away is out of bl range, so sub_08004A76's
    18 bytes become two veneers; its one job moves to slot_area."""
    AREA, VENEER = 0x4A76, 0x4A7A
    if rom[AREA:AREA + 18] != bytes.fromhex('45214901401808b54178007803f0bbff08bd'):
        sys.exit('sub_08004A76 changed: %s' % rom[AREA:AREA + 18].hex())
    rom[AREA:AREA + 18] = bytes.fromhex('024a1047024a1047') + bytes(2) + struct.pack('<II', sym['slot_area'] | 1, sym['slot_read'] | 1)
    sites = [i for i in range(0x4000, 0x30000, 2) if rom[i:i + 4] == thumb_bl(i, 0x48A0)]
    if len(sites) != 3:
        sys.exit('expected 3 save-slot reads, found %s' % [hex(i) for i in sites])
    for i in sites:
        rom[i:i + 4] = thumb_bl(i, VENEER)


def main():
    debug = '--debug' in sys.argv
    clean = open('baserom.gba', 'rb').read()
    if hashlib.sha1(clean).hexdigest() != CLEAN_SHA1:
        sys.exit("baserom.gba isn't the clean Buu's Fury (USA) ROM (SHA-1 mismatch).")
    if not os.path.exists('assets/manifest.json'):
        subprocess.run(['make', 'extract'], check=True, stdout=subprocess.DEVNULL)
    cfg = json.load(open('ultimate/forms.json'))
    saved = {p: open(p).read() for p in (INTRO, FIELD, ACTORS_FILE)}
    try:
        for p, s in unlock_edits_paths().items():
            saved.setdefault(p, s)
        unlock_edits()
        saved.setdefault(QUEST_NPC, open(QUEST_NPC).read())
        npc = quest_npc(saved[QUEST_NPC])
        open(QUEST_NPC, 'w').write(npc)
        if debug:
            debug_edits(FORM_COUNT)
        subprocess.run(['make', 'modern'], check=True, stdout=subprocess.DEVNULL)
    finally:
        for p, s in saved.items():
            open(p, 'w').write(s)
    rom = bytearray(open('buusfury_modern.gba', 'rb').read())
    if len(rom) != 0x800000 or set(rom[-16:]) != {0xFF}:
        sys.exit('modern ROM has outgrown the 8 MB base; move SPACE')
    rom += b'\xff' * 0x800000
    actors, actors_end = add_actors(rom, clean)
    index, free = patch_forms(rom, clean, cfg, actors)
    os.makedirs(OUT, exist_ok=True)
    json.dump(index, open(OUT + '/_forms.json', 'w'))
    free = add_outfits(rom, clean, (free + 3) & ~3)
    sys.path.insert(0, 'ultimate')
    import zone26
    zone_end, zone_info = zone26.apply(rom, clean, PROTO, LOG2, actors_end, actors, debug and '--zone' in sys.argv)
    print('zone 26 tiles:', zone_info)
    actors_end = zone_end
    npc = symbol('gUnknown_080783A0') - ROM_BASE      # the quest giver stands still: his wander box shrinks to his own spot
    struct.pack_into('<4H', rom, npc - 8, 320, 360, 320, 360)
    if debug:
        at = (free + 3) & ~3
        code = save_stub(at)
        rom[at:at + len(code)] = code
        tab = find_once(rom, clean[NATIVES:NATIVES + 64], 'native table')
        struct.pack_into('<I', rom, tab + 4 * DEBUG_NATIVE, ROM_BASE + at + 1)
    os.makedirs(OUT, exist_ok=True)
    name = ('BFU_debug_enemy' if '--enemy' in sys.argv else 'BFU_debug_zone' if '--zone' in sys.argv else 'BFU_debug') if debug else 'BFU'
    if free >= ACTORS_AT or actors_end > 0x1000000:
        sys.exit('ROM layout overflow')
    size = (actors_end + 0xFFFFF) & ~0xFFFFF
    out = bytes(rom[:size])
    if bps.apply(clean, bps.make(clean, out)) != out:
        sys.exit('BPS round trip failed')
    open('%s/%s.bps' % (OUT, name), 'wb').write(bps.make(clean, out))
    open('%s/%s_PERSONAL_USE_ONLY.gba' % (OUT, name), 'wb').write(out)
    json.dump({'forms': index, 'first_free': hex(free)}, open('%s/%s.map.json' % (OUT, name), 'w'), indent=1)
    print('%s: %d bytes, sha1 %s, patch %d bytes, forms %s' % (name, len(out), hashlib.sha1(out).hexdigest(),
          os.path.getsize('%s/%s.bps' % (OUT, name)), index))


main()
