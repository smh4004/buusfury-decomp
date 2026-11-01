"""Fixed-size game tables <-> CSV (used by assets.py).

Each table is a run of fixed-size records. Columns are typed (u8/s8/u16/s16/u32/s32/ptr). A `ptr` column holds a label
from data/rodata_*.s (or `label + 0xK`, or a hex address for code, or 0), so a pointer can be aimed at any other object,
including objects added by other tools. Columns starting with `_` are read-only hints (UI text for a string index) and
are ignored on build. A changed record is written back in place: records keep their size and the row count is fixed.

Field meanings marked (inferred) come from comparing records with what the game shows; rename columns freely in
SPECS, since only the types and order matter to the build.
"""
import os, re, csv, struct
import labels as L
import bfscript as B

ROM = 0x08000000
UI_PTRS = 0x6BCE8

# name, offset, count, record size, [(column, offset, type, ui?)]
SPECS = {
    'areas': (0x8E2E0, 452, 56, [
        ('world', 0, 'u8'), ('area', 1, 'u8'), ('b2', 2, 'u8'), ('b3', 3, 'u8'), ('b4', 4, 'u8'), ('b5', 5, 'u8'),
        ('b6', 6, 'u8'), ('b7', 7, 'u8'), ('w08', 8, 'u32'), ('name', 0xC, 'u32', 'ui'),
        ('p10', 0x10, 'ptr'), ('p14', 0x14, 'ptr'), ('p18', 0x18, 'ptr'), ('p1C', 0x1C, 'ptr'), ('p20', 0x20, 'ptr'),
        ('w24', 0x24, 'u32'), ('w28', 0x28, 'u32'), ('scene', 0x2C, 'ptr'), ('p30', 0x30, 'ptr'), ('p34', 0x34, 'ptr')]),
    'equipment': (0x6F82EC, 162, 44, [
        ('name', 0, 'u16', 'ui'), ('desc', 2, 'u16', 'ui'), ('icon_w', 4, 'u32'), ('icon_h', 8, 'u32'),
        ('icon_oam', 0xC, 'u32'), ('icon', 0x10, 'ptr'), ('slot', 0x14, 'u8'), ('level_plus_50', 0x15, 'u8'),
        ('stat0', 0x16, 's8'), ('stat1', 0x17, 's8'), ('stat2', 0x18, 's8'), ('stat3', 0x19, 's8'),
        ('stat4', 0x1A, 's8'), ('stat5', 0x1B, 's8'), ('w1C', 0x1C, 'u32'), ('price', 0x20, 's32'),
        ('w24', 0x24, 'u32'), ('w28', 0x28, 'u32')]),
    'items': (0x3BD500, 24, 52, [
        ('category', 0, 'u16'), ('name', 2, 'u16', 'ui'), ('name2', 4, 'u16', 'ui'), ('plural', 6, 'u16', 'ui'),
        ('desc', 8, 'u16', 'ui'), ('h0A', 0xA, 'u16'), ('icon_w', 0xC, 'u32'), ('icon_h', 0x10, 'u32'),
        ('icon_oam', 0x14, 'u32'), ('icon', 0x18, 'ptr'), ('icon2_w', 0x1C, 'u32'), ('icon2_h', 0x20, 'u32'),
        ('icon2_oam', 0x24, 'u32'), ('icon2', 0x28, 'ptr'), ('price', 0x2C, 'u32'), ('effect', 0x30, 'ptr')]),
    'scouter': (0x74D380, 232, 16, [
        ('name', 0, 'u16', 'ui'), ('desc', 2, 'u16', 'ui'), ('character', 4, 'u32'), ('w08', 8, 'u32'), ('w0C', 0xC, 's32')]),
}
FMT = {'u8': '<B', 's8': '<b', 'u16': '<H', 's16': '<h', 'u32': '<I', 's32': '<i', 'ptr': '<I'}
NOTES = {
    'areas': 'gAreaTable: one row per area. name = UI string index (area name). scene -> record whose first word is the '
             'map (map record + 4). p10-p34: scripts, event lists and actor lists of the area (inferred).',
    'equipment': 'Equipment. slot: 0 body, 1 hands, 2 feet, 3 accessory. level_plus_50: required level + 50 (inferred). '
                 'stat0-5: signed bonuses (STR/POW/END/SPD order inferred). price -1 = not sold.',
    'items': 'Consumables and key items. category 0 = usable, 1 = key item. effect -> bytecode run when used '
             '(assets/scripts/items/*.scr).',
    'scouter': 'Scouter/journal entries: name and description strings plus the character id (index into the '
               'character collision table at 0x086B6BB4).',
}


def u32(d, o): return struct.unpack_from('<I', d, o)[0]


def ui_string(d, i):
    if i >= 1534: return ''
    o = u32(d, UI_PTRS + 4 * i) - ROM; e = o
    while struct.unpack_from('<H', d, e)[0]: e += 2
    return d[o:e].decode('utf-16-le')


def ptr_text(v):
    if v == 0: return '0'
    o = v - ROM
    if 0x54FBC <= o < 0x7B79A4: return L.symbol(o)
    return '0x%08X' % v


def ptr_expr(s):
    """CSV text -> assembly expression for .4byte."""
    s = s.strip()
    return s if s and not re.match(r'^-?(0x[0-9A-Fa-f]+|\d+)$', s) else str(int(s, 0) & 0xFFFFFFFF)


def export(d, name, path):
    off, n, size, cols = SPECS[name]
    with open(path, 'w', newline='', encoding='utf-8') as f:
        f.write('# %s\n' % NOTES.get(name, ''))
        w = csv.writer(f)
        hdr = ['index']
        for c in cols:
            hdr.append(c[0])
            if len(c) > 3 and c[3] == 'ui': hdr.append('_' + c[0] + '_text')
        w.writerow(hdr)
        for i in range(n):
            r = off + size * i; row = [i]
            for c in cols:
                v = struct.unpack_from(FMT[c[2]], d, r + c[1])[0]
                row.append(ptr_text(v) if c[2] == 'ptr' else v)
                if len(c) > 3 and c[3] == 'ui': row.append(ui_string(d, v))
            w.writerow(row)


def build(d, name, path, ctx):
    off, n, size, cols = SPECS[name]
    rows = [r for r in csv.reader(l for l in open(path, encoding='utf-8') if not l.startswith('#'))]
    hdr, rows = rows[0], rows[1:]
    if len(rows) != n: raise ValueError('%s: must keep %d rows' % (path, n))
    ix = {h: i for i, h in enumerate(hdr)}
    for i, row in enumerate(rows):
        r = off + size * i
        orig = d[r:r + size]
        # assemble the record: bytes for numbers, symbolic .4byte for pointers
        parts = []; pos = 0; data = bytearray(orig); syms = {}
        for c in cols:
            v = row[ix[c[0]]]
            if c[2] == 'ptr':
                if ptr_text(u32(orig, c[1])) == v.strip(): continue
                syms[c[1]] = ptr_expr(v)
            else:
                struct.pack_into(FMT[c[2]], data, c[1], int(v, 0))
        if not syms and bytes(data) == orig: continue
        lines = []; p = 0
        for o in sorted(syms):
            if o > p: lines.append('\t.byte %s' % ', '.join(str(b) for b in data[p:o]))
            lines.append('\t.4byte %s' % syms[o]); p = o + 4
        if p < size: lines.append('\t.byte %s' % ', '.join(str(b) for b in data[p:size]))
        ctx.asm(r, r + size, '\n'.join(lines) + '\n', size, '%s%d' % (name, i))


# ------------------------------------------------------------------ item effect scripts
def effect_scripts(d):
    off, n, size, cols = SPECS['items']
    out = []
    for i in range(n):
        p = u32(d, off + size * i + 0x30)
        if p: out.append((i, p - ROM, ui_string(d, struct.unpack_from('<H', d, off + size * i + 2)[0])))
    return out


def export_script(d, start, path, title, names):
    text, end = B.disasm(d, start, names)
    open(path, 'w').write('; %s  (%s, 0x%08X). Bytecode: see tools/scripts/bfscript.py.\n%s'
                          % (title, L.symbol(start), ROM + start, text))
    return end


def build_script(d, a, path, ctx, names):
    code = B.asm(open(path).read(), names)
    if code == d[a['start']:a['end']]: return
    ctx.put(a['start'], a['end'], code, 'scr')
