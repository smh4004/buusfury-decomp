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
import bps

CLEAN_SHA1 = 'f1c4b07554d2a3b1ad2f325307051e775ce68087'
ROM_BASE = 0x08000000
FORMS, FORM_COUNT, FORM_SIZE = 0x6B82EC, 54, 24
NATIVES = 0x55098
CODE_END = 0x54FBC
SPACE = 0x800000                 # new data starts at the old 8 MB end
DEBUG_NATIVE = 0xF7              # debug builds only: "save to slot 1" (not used by any game script)
OUT = 'ultimate/out'
INTRO = 'assets/scripts/gUnknown_0877CBF0.evt'
FIELD = 'assets/scripts/gUnknown_08780550.evt'


def debug_edits(first_form):
    """Join Vegito and guest Broly at the start, and open the picker, then save, when the intro ends."""
    heal = ''.join('    push %d\n    set %s\n' % (v, n) for v, n in ((500, 'max_hp'), (500, 'hp'), (100, 'max_ki'), (100, 'ki')))
    join = ('step auto code\n    call 0x97(6)\n    call 0x97(8)\n    call 0x95(6)\n' + heal + '    call 0x95(8)\n' + heal +
            '    call 0xD0(%d)\n    call 0x95(0)\n    end\n' % first_form)
    s = open(INTRO).read()
    assert 'step 19 raw' in s
    open(INTRO, 'w').write(s.replace('step 19 raw', join + 'step 19 raw', 1))
    s = open(FIELD).read()
    tail = '    set 0x10\n    end\n'
    i = s.rfind(tail)
    assert i > 0
    open(FIELD, 'w').write(s[:i] + '    set 0x10\n    call 0x8D\n    call 0x%X\n    end\n' % DEBUG_NATIVE + s[i + len(tail):])


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


def patch_forms(rom, clean, cfg):
    old = find_once(rom, clean[FORMS:FORMS + FORM_SIZE * FORM_COUNT], 'form table')
    rows = bytearray(rom[old:old + FORM_SIZE * FORM_COUNT])
    index = {}
    for k, r in enumerate(cfg['rows']):
        row = bytearray(rows[FORM_SIZE * r['copy']:FORM_SIZE * (r['copy'] + 1)])
        struct.pack_into('<HH', row, 2, r['name'], r.get('status_name', r['name']))
        row[0x0C] = r['owner']
        struct.pack_into('<H', row, 0x0E, r['character'])
        row[0x10:0x16] = bytes([r['portrait']]) * 6
        row[0x16] = r.get('up', 255)
        row[0x17] = r.get('down', 255)
        if 'flags' in r:
            struct.pack_into('<H', row, 0, r['flags'])
        rows += row
        index[r['id']] = FORM_COUNT + k
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


def main():
    debug = '--debug' in sys.argv
    clean = open('baserom.gba', 'rb').read()
    if hashlib.sha1(clean).hexdigest() != CLEAN_SHA1:
        sys.exit("baserom.gba isn't the clean Buu's Fury (USA) ROM (SHA-1 mismatch).")
    if not os.path.exists('assets/manifest.json'):
        subprocess.run(['make', 'extract'], check=True, stdout=subprocess.DEVNULL)
    cfg = json.load(open('ultimate/forms.json'))
    saved = {p: open(p).read() for p in (INTRO, FIELD)}
    try:
        if debug:
            debug_edits(FORM_COUNT)
        subprocess.run(['make', 'modern'], check=True, stdout=subprocess.DEVNULL)
    finally:
        for p, s in saved.items():
            open(p, 'w').write(s)
    rom = bytearray(open('buusfury_modern.gba', 'rb').read())
    if len(rom) != 0x800000 or set(rom[-16:]) != {0xFF}:
        sys.exit('modern ROM has outgrown the 8 MB base; move SPACE')
    rom += b'\xff' * 0x100000
    index, free = patch_forms(rom, clean, cfg)
    if debug:
        at = (free + 3) & ~3
        code = save_stub(at)
        rom[at:at + len(code)] = code
        tab = find_once(rom, clean[NATIVES:NATIVES + 64], 'native table')
        struct.pack_into('<I', rom, tab + 4 * DEBUG_NATIVE, ROM_BASE + at + 1)
    os.makedirs(OUT, exist_ok=True)
    name = 'BFU_debug' if debug else 'BFU'
    out = bytes(rom)
    if bps.apply(clean, bps.make(clean, out)) != out:
        sys.exit('BPS round trip failed')
    open('%s/%s.bps' % (OUT, name), 'wb').write(bps.make(clean, out))
    open('%s/%s_PERSONAL_USE_ONLY.gba' % (OUT, name), 'wb').write(out)
    json.dump({'forms': index, 'first_free': hex(free)}, open('%s/%s.map.json' % (OUT, name), 'w'), indent=1)
    print('%s: %d bytes, sha1 %s, patch %d bytes, forms %s' % (name, len(out), hashlib.sha1(out).hexdigest(),
          os.path.getsize('%s/%s.bps' % (OUT, name)), index))


main()
