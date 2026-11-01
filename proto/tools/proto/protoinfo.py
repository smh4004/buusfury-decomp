#!/usr/bin/env python3
"""What the prototype tells us about the final game: writes build/extras/ from your own ROMs.

usage (from proto/):  python3 tools/proto/protoinfo.py [FINAL_ROM]     (default FINAL_ROM = ../baserom.gba)

Outputs (all generated from the ROMs at run time; nothing here is committed):
  function_map.txt     prototype function -> final function (exact = same instructions apart from call/literal
                       offsets; ~NN% = similar, matched between exact anchors in the same order)
  source_files.txt     the prototype's assert() source paths, the functions that reference each one, and their
                       final counterparts: which .cpp file a final-game function came from
  flag_names.txt       the 309 story-flag names (debug flag editor table) with the final flag number where the
                       scripts show it (see docs/differences.md for how the numbers were matched)
  strings_proto_only.txt / strings_final_only.txt   text (ASCII and UTF-16) found in only one of the two ROMs
  debug_codes.txt      the two button sequences checked by the gameplay input handler (removed in the final)
"""
import os, sys, struct, re, bisect, pickle, difflib, collections, subprocess, hashlib

HERE = os.path.dirname(os.path.abspath(__file__))
PROTO = os.path.dirname(os.path.dirname(HERE))           # proto/
FINAL = os.path.dirname(PROTO)                           # repository root (final game)
OUT = os.path.join(PROTO, 'build', 'extras')
ROM = 0x08000000
PROTO_SHA1 = '4594e2d524e2d77cdf0e58ae7512e1052cc5bc02'
FINAL_SHA1 = 'f1c4b07554d2a3b1ad2f325307051e775ce68087'

# addresses found by hand (docs/differences.md)
P_NATIVES, F_NATIVES = 0x4C2DC, 0x55098                # gScriptNativeFuncs (248 entries)
P_GLOBAL, F_GLOBAL = 0x38E1B0, 0x79B704                # gGlobalScripts
P_FLAGNAMES, N_FLAGNAMES = 0x73503C, 309               # gDebugFlagNames
P_SEQ = 0xA24B8                                        # input sequences at +0x20 (6 keys) and +0x2C (8 keys)
F_RODATA = (0x54FBC, 0x7B79A4)
P_RODATA = (0x4C0F8, 0x73FE10)
FLAG_NATIVES = {0x1B, 0x1C, 0x1D, 0x1E}                # is_set, is_clear, set, clear (same ids in both ROMs)


def load(root, path, sha):
    d = open(path, 'rb').read()
    if hashlib.sha1(d).hexdigest() != sha:
        sys.exit('%s: wrong SHA-1 (need %s)' % (path, sha))
    cache = os.path.join(root, '.analysis', 'analysis.pickle')
    if not os.path.exists(cache):
        print('analysing', root, '(once; cached in .analysis/)')
        subprocess.check_call([sys.executable, '-c', 'import sys; sys.path.insert(0, "tools/bfdis"); import gen; '
                               'gen.analyze(gen.load_rom("baserom.gba"), ".analysis/analysis.pickle")'], cwd=root)
    db = pickle.load(open(cache, 'rb'))
    funcs = sorted(a for a in db['funcs'] if ROM <= a < ROM + len(d))
    return d, db, funcs


def u32(d, o): return struct.unpack_from('<I', d, o)[0]


def fend(funcs, a):
    i = bisect.bisect_right(funcs, a)
    return funcs[i] if i < len(funcs) else a + 2


def thumb(d, db, a, e, limit=400):
    """-> [(addr, halfword or None for BL, size)] of the Thumb instructions in [a, e)."""
    out = []; x = a
    while x < e and len(out) < limit:
        if x not in db['insn']: x += 2; continue
        m, s = db['insn'][x]
        if m != 't': x += s; continue
        out.append((x, struct.unpack_from('<H', d, x - ROM)[0], s)); x += s
    return out


def bl_target(d, x):
    h1, h2 = struct.unpack_from('<HH', d, x - ROM)
    off = ((h1 & 0x7FF) << 12) | ((h2 & 0x7FF) << 1)
    return x + 4 + (off - 0x800000 if off & 0x400000 else off)


def exact_sig(ins):
    r = []
    for x, h, s in ins:
        if s == 4: r += [0xF000, 0xF800]
        elif h >> 11 == 9: r.append(h & 0xFF00)          # ldr rX, [pc, #imm]: keep the register only
        else: r.append(h)
    return tuple(r)


def coarse_sig(ins):
    return [0xF8 if s == 4 else (h >> 8 if h >> 13 else h >> 11) for x, h, s in ins]


def match_functions(P, F):
    (pd, pdb, pf), (fd, fdb, ff) = P, F
    pi = {a: thumb(pd, pdb, a, fend(pf, a)) for a in pf}
    fi = {a: thumb(fd, fdb, a, fend(ff, a)) for a in ff}
    byp, byf = collections.defaultdict(list), collections.defaultdict(list)
    for a, ins in pi.items(): byp[exact_sig(ins)].append(a)
    for a, ins in fi.items(): byf[exact_sig(ins)].append(a)
    m = {}
    for s, l in byp.items():
        if len(s) >= 4 and len(l) == 1 and len(byf.get(s, [])) == 1: m[l[0]] = byf[s][0]
    # callees of exact pairs, call by call
    taken = set(m.values()); changed = True
    while changed:
        changed = False
        for p, f in list(m.items()):
            bp = [bl_target(pd, x) for x, h, s in pi[p] if s == 4]
            bf = [bl_target(fd, x) for x, h, s in fi[f] if s == 4]
            if len(bp) != len(bf): continue
            for x, y in zip(bp, bf):
                if x in pi and y in fi and x not in m and y not in taken and len(pi[x]) == len(fi[y]):
                    m[x] = y; taken.add(y); changed = True
    exact = dict(m)
    # monotonic anchors (longest increasing run), then fuzzy pairing inside each gap
    pairs = sorted(m.items()); tails, idx, prev = [], [], [None] * len(pairs)
    for i, (p, f) in enumerate(pairs):
        j = bisect.bisect_left(tails, f)
        if j == len(tails): tails.append(f); idx.append(i)
        else: tails[j] = f; idx[j] = i
        prev[i] = idx[j - 1] if j else None
    seq = []; k = idx[-1] if idx else None
    while k is not None: seq.append(pairs[k]); k = prev[k]
    seq.reverse()
    pix = {a: i for i, a in enumerate(pf)}; fix = {a: i for i, a in enumerate(ff)}
    cp = {a: coarse_sig(i) for a, i in pi.items()}; cf = {a: coarse_sig(i) for a, i in fi.items()}
    bounds = [(-1, -1)] + [(pix[p], fix[f]) for p, f in seq] + [(len(pf), len(ff))]
    ratio = {p: 1.0 for p in m}
    for (a0, b0), (a1, b1) in zip(bounds, bounds[1:]):
        gp = [pf[i] for i in range(a0 + 1, a1) if pf[i] not in m and len(cp[pf[i]]) >= 3]
        gf = [ff[i] for i in range(b0 + 1, b1) if ff[i] not in taken]
        if not gp or not gf or len(gp) * len(gf) > 40000: continue
        cand = []
        for x in gp:
            for y in gf:
                r = difflib.SequenceMatcher(None, cp[x], cf[y], autojunk=False).ratio()
                if r >= 0.7: cand.append((r, x, y))
        cand.sort(reverse=True); up, uf = set(), set()
        for r, x, y in cand:
            if x in up or y in uf: continue
            m[x] = y; ratio[x] = r; up.add(x); uf.add(y)
    return m, ratio, exact


def source_paths(d):
    return {mm.start(1): mm.group(1).decode() for mm in re.finditer(rb'(T:\\[ -~]{4,}?\.(?:cpp|h))\x00', d[:0x800000])}


def path_refs(d, db, funcs, paths):
    ref = collections.defaultdict(set)
    owner = lambda a: funcs[bisect.bisect_right(funcs, a) - 1]
    for a, (m, s) in db['insn'].items():       # adr rX, path (string placed in the function's literal pool)
        if m == 't' and s == 2 and a >= ROM:
            h = struct.unpack_from('<H', d, a - ROM)[0]
            if h >> 11 == 0x14:
                t = ((a + 4) & ~3) + (h & 0xFF) * 4 - ROM
                for p in (t, t + 1):
                    if p in paths: ref[paths[p]].add(owner(a))
    for la, refs in db['pool'].items():
        if la < ROM: continue
        w = u32(d, la - ROM) - ROM
        for p in (w, w + 1):                   # a literal may point at a leading '@'
            if p in paths:
                for r in refs: ref[paths[p]].add(owner(r))
    return ref


# ---- story flags
def flag_uses(code):
    return [code[k - 1][2] for k, (_, op, arg, _) in enumerate(code)
            if op == 0x02 and arg in FLAG_NATIVES and k and code[k - 1][1] in (0, 1)]


def all_code(d, lo, hi):
    """Bytecode of every step of every pointer list in [lo, hi) that parses as an event list."""
    sys.path[:0] = [os.path.join(FINAL, 'tools', 'scripts')]
    import events as E, bfscript as B
    out = []; o = lo; n = len(d)
    isp = lambda v: ROM <= v < ROM + n
    while o < hi - 4:
        if not isp(u32(d, o)) or isp(u32(d, o - 4)): o += 4; continue
        items = []; p = o
        while isp(u32(d, p)) and len(items) < 200: items.append(u32(d, p) - ROM); p += 4
        ok = u32(d, p) == 0 and items and all(t + 3 < n and 0 < struct.unpack_from('<H', d, t)[0] < 2000
                                               and d[t + 2] in (0, 3, 4, 5, 6) for t in items)
        if ok:
            try:
                codes = []
                for t in items:
                    st = E.parse_step(d, t)
                    if 'code' in st: codes.append(B.decode(d, st['code'][0])[0])
                    elif st['type'] == 4: codes.append(B.decode(st['raw'], 0)[0])
                out += codes; o = p + 4; continue
            except Exception:
                pass
        o += 4
    return out


def flag_anchors(pd, fd):
    """Pair each final script step that uses flags with the most similar prototype step (opcodes + native ids);
    long or identical steps vote for "proto flag p is final flag f". Keep the best-supported pairs that are in
    increasing order with a shift that never shrinks (flags were added, not removed or reordered)."""
    shape = lambda c: [(op, a if op == 2 else None) for _, op, a, _ in c]
    P = [c for c in all_code(pd, *P_RODATA) if flag_uses(c)]
    F = [c for c in all_code(fd, *F_RODATA) if flag_uses(c)]
    votes = collections.defaultdict(collections.Counter)
    for c in F:
        fa = flag_uses(c); s = shape(c); best, br = None, 0
        for x in P:
            if len(flag_uses(x)) != len(fa): continue
            r = difflib.SequenceMatcher(None, s, shape(x), autojunk=False).ratio()
            if r > br: best, br = x, r
        # short steps ("if flag X: jump") look alike everywhere; trust only long or identical-shape ones
        if best is not None and ((len(c) >= 8 and br >= 0.8) or (len(c) >= 6 and br == 1.0)):
            for p, f in zip(flag_uses(best), fa): votes[p][f] += 1
    cand = sorted((p, c.most_common(1)[0][0]) for p, c in votes.items()
                  if c.most_common(1)[0][1] > sum(c.values()) / 2)
    # most-voted chain with p and f both increasing and the shift f - p never decreasing (flags were only added)
    wt = [votes[p][f] for p, f in cand]
    best = [(wt[i], [i]) for i in range(len(cand))]
    for i in range(len(cand)):
        for j in range(i):
            (pj, fj), (pi_, fi_) = cand[j], cand[i]
            if pi_ > pj and fi_ > fj and fi_ - pi_ >= fj - pj and best[j][0] + wt[i] > best[i][0]:
                best[i] = (best[j][0] + wt[i], best[j][1] + [i])
    chain = max(best, default=(0, []))[1]
    return {cand[i][0]: cand[i][1] for i in chain}


def flag_table(pd):
    names = []
    for i in range(N_FLAGNAMES):
        w = u32(pd, P_FLAGNAMES + 4 * i)
        names.append(pd[w - ROM:pd.index(b'\0', w - ROM)].decode() if w else None)
    return names


def text_set(d):
    a = set(m.group()[:-1].decode('latin-1') for m in re.finditer(rb'[ -~]{6,}\x00', d))
    for m in re.finditer(rb'(?:[ -~]\x00){4,}\x00\x00', d):
        a.add(m.group()[:-2].decode('utf-16-le'))
    return {s for s in a if re.search(r'[A-Za-z]{3}', s) and not re.search(r'(.)\1\1\1', s)
            and len(re.findall(r'[A-Za-z ]', s)) >= 0.8 * len(s)}


KEYS = {1: 'A', 2: 'B', 4: 'SELECT', 8: 'START', 0x10: 'RIGHT', 0x20: 'LEFT', 0x40: 'UP', 0x80: 'DOWN',
        0x100: 'R', 0x200: 'L'}


def main():
    final_rom = sys.argv[1] if len(sys.argv) > 1 else os.path.join(FINAL, 'baserom.gba')
    P = load(PROTO, os.path.join(PROTO, 'baserom.gba'), PROTO_SHA1)
    F = load(FINAL, final_rom, FINAL_SHA1)
    pd, fd = P[0], F[0]
    os.makedirs(OUT, exist_ok=True)
    w = lambda name, lines: open(os.path.join(OUT, name), 'w').write('\n'.join(lines) + '\n')

    m, ratio, exact = match_functions(P, F)
    w('function_map.txt', ['# proto      final      match   (%d of %d prototype functions; %d exact)'
                           % (len(m), len(P[2]), len(exact))] +
      ['%08X  %08X  %s' % (p, f, 'exact' if p in exact else '~%d%%' % int(ratio[p] * 100)) for p, f in sorted(m.items())])

    refs = path_refs(pd, P[1], P[2], source_paths(pd))
    lines = ['# source file -> prototype functions that assert() with its path -> final counterparts']
    for path in sorted(refs):
        lines.append(path)
        for a in sorted(refs[path]):
            lines.append('    %08X  ->  %s' % (a, '%08X' % m[a] if a in m else '(no match)'))
    w('source_files.txt', lines)

    names = flag_table(pd)
    anchors = flag_anchors(pd, fd)
    ak = sorted(anchors)
    lines = ['# idx  final  name   (final = flag number in the final game\'s scripts; "=" seen in scripts, "~" between',
             '#                     two seen flags with the same shift, "?" unknown: flags were added in between)']
    for i, n in enumerate(names):
        if i in anchors: fin = '=%d' % anchors[i]
        else:
            j = bisect.bisect_left(ak, i)
            if 0 < j < len(ak) and anchors[ak[j - 1]] - ak[j - 1] == anchors[ak[j]] - ak[j]:
                fin = '~%d' % (i + anchors[ak[j]] - ak[j])
            else: fin = '?'
        lines.append('%3d  %-5s  %s' % (i, fin, n or '<unnamed>'))
    w('flag_names.txt', lines)

    tp, tf = text_set(pd), text_set(fd)
    tf_raw = set(tf)
    # the final game's dialogue is WFZ-compressed: count it as present if `make extract` has been run there
    ft = os.path.join(FINAL, 'assets', 'text')
    if os.path.isdir(ft):
        for fn in os.listdir(ft):
            for line in open(os.path.join(ft, fn), encoding='utf-8'):
                if not line.startswith(('#', '@')): tf.add(line.rstrip('\n').split('\t')[-1])
    else:
        print('note: run `make extract` in the repository root first, or final dialogue counts as missing')
    w('strings_proto_only.txt', sorted(tp - tf)); w('strings_final_only.txt', sorted(tf_raw - tp))   # uncompressed text only on both sides

    seqs = []
    for off, n, what in ((0x20, 6, 'opens the debug flag editor (sub_0802E0E2)'),
                         (0x2C, 8, 'toggles the word at 0x03001B44 and plays a sound')):
        seqs.append('%-40s %s' % (' '.join(KEYS.get(h, hex(h)) for h in struct.unpack_from('<%dH' % n, pd, P_SEQ + off)), what))
    w('debug_codes.txt', ['# checked by sub_08006BB8 (gameplay input) only while word +0x90 of the object at 0x03001944 '
                          'is non-zero; not present in the final ROM'] + seqs)
    print('wrote', OUT, ': %d functions matched (%d exact), %d source files, %d flag numbers seen in scripts'
          % (len(m), len(exact), len(refs), len(anchors)))


if __name__ == '__main__':
    main()
