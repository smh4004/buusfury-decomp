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
SAIYAMAN = [(10, 14), (15, 'saiyaman_from_green'), (13, 'saiyaman_from_orange')]
INTRO = 'assets/scripts/gUnknown_0877CBF0.evt'
FIELD = 'assets/scripts/gUnknown_08780550.evt'


def debug_edits(first_form):
    """Join Vegito and guest Broly at the start, and open the picker, then save, when the intro ends."""
    heal = ''.join('    push %d\n    set %s\n' % (v, n) for v, n in ((500, 'max_hp'), (500, 'hp'), (100, 'max_ki'), (100, 'ki')))
    flags = ''.join('    pushn %d\n    call set_flag\n' % f for f in sorted({u['flag'] for u in json.load(open('ultimate/outfits.json'))['unlocks']}))
    join = ('step auto code\n' + flags + '    call 0x97(1)\n    call 0x97(6)\n    call 0x97(8)\n    call 0x95(1)\n' + heal + '    call 0xD0(10)\n    call 0xA4(1, 20)\n    call 0xA4(1, 18)\n    call 0x95(6)\n' + heal + '    call 0x95(8)\n' + heal +
            '    call 0xD0(%d)\n    call 0x95(0)\n    end\n' % first_form)
    s = open(INTRO).read()
    assert 'step 19 raw' in s
    open(INTRO, 'w').write(s.replace('step 19 raw', join + 'step 19 raw', 1))
    s = open(FIELD).read()
    tail = '    set 0x10\n    end\n'
    i = s.rfind(tail)
    assert i > 0
    open(FIELD, 'w').write(s[:i] + '    set 0x10\n    call 0x8D\n    call 0x%X\n    end\n' % DEBUG_NATIVE + s[i + len(tail):])


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


def patch_forms(rom, clean, cfg):
    old = find_once(rom, clean[FORMS:FORMS + FORM_SIZE * FORM_COUNT], 'form table')
    rows = bytearray(rom[old:old + FORM_SIZE * FORM_COUNT])
    index = {}
    for k, r in enumerate(cfg['rows']):
        row = bytearray(rows[FORM_SIZE * r['copy']:FORM_SIZE * (r['copy'] + 1)])
        struct.pack_into('<HH', row, 2, r['name'], r.get('status_name', r['name']))
        row[0x0C] = r['owner']
        struct.pack_into('<H', row, 0x0E, r['character'])
        if 'portrait' in r:
            row[0x10:0x16] = bytes([r['portrait']]) * 6
        row[0x16] = r.get('up', 255)
        row[0x17] = r.get('down', 255)
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
    for c in range(9):
        lst = cfg.get(str(c), [])
        index.append('{%d,%d}' % (len(table), len(lst)))
        table += ['{%d,0,%d,(const u16 *)L"%s"}' % (o['form'], o['flag'], o['name']) for o in lst]
    d = tempfile.mkdtemp()
    fm = json.load(open(OUT + '/_forms.json'))
    pairs = ['{%d,%d}' % (base, 14 if row == 14 else fm[row]) for base, row in SAIYAMAN]
    c = open('ultimate/src/outfit.c').read() + '\nconst u16 outfit_index[9][2] = {%s};\nconst struct outfit outfit_table[] = {%s};\nconst u8 saiyaman_map[][2] = {%s};\nconst int saiyaman_count = %d;\n' % (','.join(index), ','.join(table) or '{0,0,0,0}', ','.join(pairs), len(pairs))
    open(d + '/o.c', 'w').write(c)
    flags = ['-mthumb', '-mcpu=arm7tdmi', '-O2', '-ffreestanding', '-fno-builtin', '-nostdlib', '-fshort-wchar', '-DSOUND_MOVE=0x%X' % symbol('gUnknown_0831947C'), '-DFONT=0x%X' % symbol('gUnknown_0807012C')]
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
    IN, OUT_SITE = 0x1C5F2, 0x1C2D2
    if rom[IN:IN + 10] != bytes.fromhex('0e202875301cff305130') or rom[OUT_SITE:OUT_SITE + 8] != bytes.fromhex('0a202875301cf030'):
        sys.exit('Great Saiyaman code changed')
    rom[IN:IN + 10] = bytes.fromhex('0149fe460847') + struct.pack('<I', sym['saiyaman_hook_in'] | 1)
    rom[OUT_SITE:OUT_SITE + 12] = bytes.fromhex('0149fe460847') + struct.pack('<I', sym['saiyaman_hook_out'] | 1) + bytes.fromhex('c046')
    return at + len(code)


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
        for p, s in unlock_edits_paths().items():
            saved.setdefault(p, s)
        unlock_edits()
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
    os.makedirs(OUT, exist_ok=True)
    json.dump(index, open(OUT + '/_forms.json', 'w'))
    free = add_outfits(rom, clean, (free + 3) & ~3)
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
