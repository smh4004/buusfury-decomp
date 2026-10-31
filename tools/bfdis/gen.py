#!/usr/bin/env python3
"""Generate the assembly source tree from baserom.gba.

usage: gen.py baserom.gba [--reanalyze]

Writes:
  .analysis/analysis.pickle         (cached analyzer state, not committed)
  asm/code_*.s                  code area 0x080000C0..TEXT_END
  asm/iwram.s                   RW image copied to IWRAM by crt0
  config/code_files.txt         link order
"""
import sys, os, pickle, struct, collections, hashlib
sys.path.insert(0, os.path.dirname(__file__))
from analyze import full_analysis, ctor_targets, vtable_layout, CTOR_LO, CTOR_HI, ROM
from emit import Emitter

BASEROM_SHA1 = 'f1c4b07554d2a3b1ad2f325307051e775ce68087'
TEXT_END = 0x54FBC                 # first byte of .rodata
IWRAM = (0x7B79A4, 0x03000000, 0x1004)
SPLIT_TARGET = 0x2000

def load_rom(path):
    d = open(path, 'rb').read()
    if hashlib.sha1(d).hexdigest() != BASEROM_SHA1:
        sys.exit('baserom.gba: wrong SHA-1 (need %s)' % BASEROM_SHA1)
    return d

def analyze(d, cache):
    if os.path.exists(cache) and '--reanalyze' not in sys.argv:
        return pickle.load(open(cache, 'rb'))
    A = full_analysis(d, TEXT_END, IWRAM)
    db = dict(insn=A.insn, pool={k: sorted(v) for k, v in A.pool.items()}, jt=A.jt,
              funcs=dict(A.funcs), labels=sorted(A.labels), vt_bases=A.vt_bases,
              vt_ents=A.vt_ents, iwram=IWRAM, calls={k: sorted(v) for k, v in A.calls.items()})
    db['ctor'] = {e: (t, m) for e, t, m in ctor_targets(d)}
    # MI thunk literals: word at thunk+16 is relative to (add ip,pc,ip)+8
    relpool = {}
    for a, (m, s) in A.insn.items():
        if m == 'a' and A.u32(a) == 0xE08FC00C and A.off(a - 8) is not None and A.u32(a - 8) == 0xE59FC008:
            la = a + 8; tgt = la + A.s32(la)
            relpool[la] = (la, tgt & ~1, 't' if tgt & 1 else 'a')
            db['labels'].append(la)
    db['relpool'] = relpool
    os.makedirs(os.path.dirname(cache), exist_ok=True)
    pickle.dump(db, open(cache, 'wb'))
    return db

def load_symbols(path):
    sym = {}
    if os.path.exists(path):
        for line in open(path):
            line = line.split('#')[0].strip()
            if not line: continue
            a, n = line.split()[:2]
            sym[int(a, 16)] = n
    return sym

def load_raw(path):
    s = set()
    if os.path.exists(path):
        for line in open(path):
            line = line.split('#')[0].strip()
            if line: s.add(int(line.split()[0], 16))
    return s

def main():
    root = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    os.chdir(root)
    d = load_rom('baserom.gba')
    db = analyze(d, '.analysis/analysis.pickle')
    sym = load_symbols('config/symbols.txt')
    raw = load_raw('config/raw_insns.txt')
    E = Emitter(d, db, sym, raw)

    # ---- choose split points: function starts not crossed by any local branch/pool/jt span
    lo, hi = ROM + 0xC0, ROM + TEXT_END
    cross = collections.Counter()
    spans = []
    for la, refs in db['pool'].items():
        for r in refs: spans.append((r, la))
    for t, (n, base, tg, esz) in db['jt'].items():
        for x in tg: spans.append((base - 4, x))
        spans.append((base - 4, t + n * esz))
    for a, (m, s) in db['insn'].items():
        if m == 't' and s == 2:
            h = E.u16(a)
            if (h >> 12) == 0xD and ((h >> 8) & 0xF) < 0xE:
                off = h & 0xFF; off = off - 0x100 if off & 0x80 else off; spans.append((a, a + 4 + off * 2))
            elif (h >> 11) == 0x1C:
                off = h & 0x7FF; off = off - 0x800 if off & 0x400 else off; spans.append((a, a + 4 + off * 2))
            elif (h >> 11) == 0x14:
                spans.append((a, ((a + 4) & ~3) + (h & 0xFF) * 4))
        elif m == 'a':
            w = E.u32(a)
            if (w & 0x0F000000) == 0x0A000000:
                off = w & 0xFFFFFF; off = off - 0x1000000 if off & 0x800000 else off; spans.append((a, a + 8 + off * 4))
    ev = collections.Counter()
    fstarts = set(db['funcs'])
    for x, y in spans:
        if y in fstarts and y in db['insn']: continue    # tail call: linker resolves
        if x > y: x, y = y, x
        ev[x + 1] += 1; ev[y + 1] -= 1   # open interval (x, y]
    cuts = []
    pts = sorted(set(list(ev.keys()) + [f for f in db['funcs'] if lo < f < hi]))
    depth = 0; last = lo
    fset = set(f for f in db['funcs'] if lo < f < hi and f in db['insn'])
    for p in pts:
        depth += ev.get(p, 0)
        if p in fset and depth == 0 and p - last >= SPLIT_TARGET:
            cuts.append(p); last = p
    # vtable / ctor area gets its own file
    for x in (ROM + CTOR_LO, ROM + 0x491F0, ROM + 0x4E490):
        pass
    bounds = [ROM + 0xC0, ROM + 0x158] + [c for c in cuts if c > ROM + 0x158] + [hi]
    bounds = sorted(set(bounds))

    # ---- two passes so every referenced address gets a label
    E.needed_hint = set()
    files = []
    for p in range(2):
        E.needed = set()
        files = []
        for i in range(len(bounds) - 1):
            a, b = bounds[i], bounds[i + 1]
            name = 'crt0' if a == ROM + 0xC0 else 'code_%08X' % a
            files.append((name, a, b, E.emit_range(a, b, [])))
        iw = E.emit_range(IWRAM[1], IWRAM[1] + IWRAM[2], [])
        E.needed_hint = set(E.needed)

    # ---- defined/referenced per file -> globals
    import re
    defs = {}
    allfiles = files + [('iwram', IWRAM[1], IWRAM[1] + IWRAM[2], iw)]
    for name, a, b, lines in allfiles:
        for l in lines:
            m = re.match(r'^([A-Za-z_]\w*):', l)
            if m: defs[m.group(1)] = name
    os.makedirs('asm', exist_ok=True)
    order = []
    for name, a, b, lines in allfiles:
        used = set(re.findall(r'\b(_[0-9A-F]{8}|sub_[0-9A-F]{8}|[A-Za-z]\w+)\b', '\n'.join(lines)))
        mine = {k for k, v in defs.items() if v == name}
        ext = sorted(k for k in used if k in defs and defs[k] != name)
        glob = sorted(k for k in mine if any(k in s for s in []))
        hdr = ['@ Generated by tools/bfdis/gen.py -- region 0x%08X-0x%08X' % (a, b),
               '\t.include "asm/macros.inc"', '\t.syntax unified', '\t.text', '']
        with open('asm/%s.s' % name, 'w') as f:
            f.write('\n'.join(hdr + lines) + '\n')
        order.append(name)
    # every label referenced from another file must be global
    xref = collections.defaultdict(set)
    for name, a, b, lines in allfiles:
        used = set(re.findall(r'\b(_[0-9A-F]{8}|sub_[0-9A-F]{8})\b', '\n'.join(lines)))
        for u in used:
            if u in defs and defs[u] != name: xref[defs[u]].add(u)
    for name in xref:
        p = 'asm/%s.s' % name
        s = open(p).read()
        s = s.replace('\t.text\n', '\t.text\n' + ''.join('\t.global %s\n' % g for g in sorted(xref[name])), 1)
        open(p, 'w').write(s)
    os.makedirs('config', exist_ok=True)
    open('config/code_files.txt', 'w').write('\n'.join(o for o in order if o != 'iwram') + '\n')
    print('files', len(order), 'needed labels', len(E.needed))

if __name__ == '__main__':
    main()
