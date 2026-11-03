"""Zone 26: the prototype's cut Super 13 dungeon as new areas 26:1..15. Layouts and collision come from Prototype D, reskinned
by reskin.py. One flat BG3 layer, stored tile pages; the prototype's one-way debug doors are replaced by zone26.json."""
import json, os, struct, sys
import numpy as np
from wfz import decompress_stream
import reskin
sys.path.insert(0, 'tools/scripts')

BASE = 0x08000000
TABLE_LIT, COUNT_INSN, AREAS, COUNT = 0x8A58, 0x125E0, 0x8E2E0, 452
WARP = (0x08007675, 0x0800776D)
LAYER_FN = 0x08008087
MUSIC_FIELD = 6


class Writer:
    def __init__(self, rom, at): self.rom, self.cur = rom, at
    def put(self, d):
        a = self.cur; self.rom[a:a + len(d)] = d; self.cur = (a + len(d) + 3) & ~3
        return BASE + a
    def stored(self, d):
        return self.put(struct.pack('<II', 0, len(d)) + bytes(d))


def wfz_copy(W, P, ptr):
    o = ptr - BASE; t, size = struct.unpack_from('<II', P, o)
    data = P[o + 8:o + 8 + size] if t == 0 else bytes(decompress_stream(P, o + 8, size)[0])
    return W.stored(data)


def tile_map(img):
    """Cut an image into 8x8 tiles, sharing flipped copies. Returns (tiles, {y, x: cell value})."""
    h, w = img.shape; tiles = [bytes(64)]; seen = {tiles[0]: 0}
    cells = np.zeros((h // 8, w // 8), np.uint16)
    for y in range(h // 8):
        for x in range(w // 8):
            t = img[y * 8:y * 8 + 8, x * 8:x * 8 + 8]
            for flag, v in ((0, t), (0x400, t[:, ::-1]), (0x800, t[::-1]), (0xC00, t[::-1, ::-1])):
                b = v.tobytes()
                if b in seen: cells[y, x] = seen[b] | flag; break
            else:
                b = t.tobytes(); seen[b] = len(tiles); cells[y, x] = len(tiles); tiles.append(b)
    if len(tiles) > 896: raise ValueError('%d tiles: over the 896 the largest retail map uses' % len(tiles))
    return tiles, cells


def build_map(W, P, a, img, mask):
    """The map record from one reskinned image; everything else from the prototype's record. Returns bus M."""
    m = reskin.map_of_raw(P, a); w = list(struct.unpack_from('<21I', P, m))
    tiles, cells = tile_map(img); H, Wd = cells.shape
    cw, ch = (Wd + 31) // 32, (H + 31) // 32
    chunks = []
    for cy in range(ch):
        for cx in range(cw):
            c = np.zeros((32, 32), np.uint16); s = cells[cy * 32:cy * 32 + 32, cx * 32:cx * 32 + 32]
            c[:s.shape[0], :s.shape[1]] = s
            chunks.append(W.stored(c.astype('<u2').tobytes()) if c.any() else 0)
    n = W.put(struct.pack('<6I', LAYER_FN, 0x400, 0x400, 0, 0, 0x101) + struct.pack('<I', 0))
    n1 = W.put(struct.pack('<6I', LAYER_FN, 0x400, 0x400, 0x10000, 0x10000, 0x101) + struct.pack('<I', 0))
    n2 = W.put(struct.pack('<6I', LAYER_FN, 0x400, 0x400, 0x20000, 0x20000, 0x101) + struct.pack('<I', 0))
    layer = W.put(struct.pack('<6I', LAYER_FN, 0x400, 0x400, 0, 0, ch << 8 | cw) + struct.pack('<%dI' % len(chunks), *chunks))
    nw = list(w)
    nw[0] = W.put(struct.pack('<6I', WARP[0], WARP[1], 0, 0, 0, 0))    # the map's built-in door: empty, zone26.json lists the doors
    nw[4] = nw[5] = 0
    nw[6], nw[7], nw[8], nw[9] = n, n1, n2, layer
    nw[10] = nw[11] = nw[12] = 0
    nw[14] = W.stored(mask.tobytes()) ; nw[15] = wfz_copy(W, P, w[15])
    nw[17] = 1
    deltas = np.ones(len(tiles), np.int64) * 0                       # ids 0,1,2..: consecutive
    nw[19] = W.stored(deltas.astype('<u2').tobytes())
    pages = [b''.join(tiles[i:i + 256]) for i in range(0, len(tiles), 256)]
    nw[20] = W.put(b''.join(struct.pack('<I', W.stored(p)) for p in pages))
    M = W.cur; nw[18] = BASE + M
    W.put(struct.pack('<21I', *nw))
    return BASE + M, len(tiles)


def floor_mask(P, proto_path, a):
    """Walkable cells, 256 per row: the prototype's mask minus what the reskin draws as solid."""
    m = reskin.map_of_raw(P, a); o = struct.unpack_from('<I', P, m + 0x38)[0] - BASE; t, size = struct.unpack_from('<II', P, o)
    d = P[o + 8:o + 8 + size] if t == 0 else bytes(decompress_stream(P, o + 8, size)[0])
    bits = np.unpackbits(np.frombuffer(d, np.uint8), bitorder='little').reshape(-1, 256).copy()
    b = reskin.blockers(proto_path, a); h, w = min(b.shape[0], bits.shape[0]), min(b.shape[1], 256)
    bits[:h, :w][b[:h, :w]] = 0
    edits = json.load(open('ultimate/zone26.json')).get('ground', {}).get(str(a), {})
    for x0, y0, x1, y1 in edits.get('close', []): bits[y0 // 8:y1 // 8, x0 // 8:x1 // 8] = 0
    for x0, y0, x1, y1 in edits.get('open', []): bits[y0 // 8:y1 // 8, x0 // 8:x1 // 8] = 1
    return bits


def follow_outline(mask, outline, doors):
    """Collision matches the drawn snow: a cell mostly outside the smoothed outline is solid (door cells stay open)."""
    h, w = outline.shape; H, W = h // 8, w // 8
    inside = outline[:H * 8, :W * 8].reshape(H, 8, W, 8).mean((1, 3)) >= 0.5
    out = mask.copy(); hh, ww = min(H, out.shape[0]), min(W, 256)
    out[:hh, :ww] &= inside[:hh, :ww]
    for d in doors:
        x0, y0, x1, y1 = d['rect']; out[y0 // 8:(y1 + 7) // 8, x0 // 8:(x1 + 7) // 8] = mask[y0 // 8:(y1 + 7) // 8, x0 // 8:(x1 + 7) // 8]
    return out


def audit(a, mask, doors):
    """Every door must be walkable to every other door in this room."""
    def cells(d):
        x0, y0, x1, y1 = d['rect']
        return [(y, x) for y in range(y0 // 8, (y1 + 7) // 8) for x in range(x0 // 8, (x1 + 7) // 8) if y < mask.shape[0] and x < 256 and mask[y, x]]
    if not doors: return
    start = cells(doors[0])
    if not start: sys.exit('Zone 26: room %d door %s is on solid ground' % (a, doors[0]['rect']))
    seen = set(start); q = list(start)
    while q:
        y, x = q.pop()
        for n in ((y + 1, x), (y - 1, x), (y, x + 1), (y, x - 1)):
            if 0 <= n[0] < mask.shape[0] and 0 <= n[1] < 256 and n not in seen and mask[n]: seen.add(n); q.append(n)
    for d in doors:
        if not seen.intersection(cells(d)):
            sys.exit('Zone 26: room %d door %s cut off from door %s' % (a, d['rect'], doors[0]['rect']))


KEY = {'down': 0, 'up': 1, 'left': 2, 'right': 3}


def door(cfg, a, side, s, e, masks):
    """The strip at this opening and where you land coming through it: (rect, key to walk through, arrival). The strip sits on
    the outermost line of cells you can actually stand on across most of the opening."""
    m = masks[a]; c = (s + e) // 2; n = (e - s) // 8
    open_y = [y for y in range(m.shape[0]) if m[y, s // 8:e // 8].sum() * 2 > n]
    open_x = [x for x in range(256) if m[s // 8:e // 8, x].sum() * 2 > n]
    if side == 'top': t = open_y[0] * 8; return (s, t, e, t + 9), 'up', (c, t + 16)
    if side == 'bottom': t = (open_y[-1] + 1) * 8; return (s, t - 9, e, t), 'down', (c, t - 20)
    if side == 'left': t = open_x[0] * 8; return (t, s, t + 9, e), 'left', (t + 14, c)
    t = (open_x[-1] + 1) * 8; return (t - 9, s, t, e), 'right', (t - 14, c)


def links(cfg, masks):
    out = {}
    for a, extra in cfg.get('doors', {}).items():
        for d in extra: out.setdefault(int(a), []).append(dict(rect=tuple(d['rect']), key=d['key'], world=d['world'], to=d['to'], arrive=tuple(d['arrive'])))
    for a, sa, s0, e0, b, sb, s1, e1 in cfg['links']:
        if isinstance(b, list):                       # an exit out of the zone: [world, area, x, y]
            ra, ka, _ = door(cfg, a, sa, s0, e0, masks)
            out.setdefault(a, []).append(dict(rect=ra, key=KEY[ka], world=b[0], to=b[1], arrive=(b[2], b[3])))
            continue
        ra, ka, ta = door(cfg, a, sa, s0, e0, masks); rb, kb, tb = door(cfg, b, sb, s1, e1, masks)
        out.setdefault(a, []).append(dict(rect=ra, key=KEY[ka], to=b, arrive=tb))
        out.setdefault(b, []).append(dict(rect=rb, key=KEY[kb], to=a, arrive=ta))
    return out


BOSS_ROW, STATS = 114, 0x711274      # 114 is placed nowhere in the game


def boss_stats(W, rom, stats):
    """Super 13: above Kid Buu (level 100, 125000 HP). Death script: flag 621, heal, back to the West City resident, who gives the reward."""
    import bfscript
    code = bfscript.asm('    pushn 621\n    call set_flag\n    call max_hp\n    set hp\n    call max_ki\n    set ki\n    call 0x78(30)\n    pushn 4, 1, 1, 320, 392\n    call 0x77\n    call 0x79(30)\n    end\n')
    code = code if isinstance(code, (bytes, bytearray)) else bytes(code[0])
    row = stats + 28 * BOSS_ROW; dabura = stats + 28 * 18
    rom[row:row + 28] = rom[dabura:dabura + 28]
    struct.pack_into('<II', rom, row, 96175, 150000)
    rom[row + 0xC:row + 0x10] = bytes((160, 70, 115, 105))
    rom[row + 0x10] = 96
    struct.pack_into('<II', rom, row + 0x14, 0x08708920, W.put(bytes(code)))   # this handler is the one that runs death scripts


def apply(rom, clean, proto_path, log2_path, at, actor_ids=None, debug_door=False):
    P = open(proto_path, 'rb').read()
    cfg = json.load(open('ultimate/zone26.json')); W = Writer(rom, at); rows = []; info = {}
    masks = {a: floor_mask(P, proto_path, a) for a in range(1, 16)}
    doors = links(cfg, masks)
    res, _ = reskin.build_all(proto_path, log2_path, 'baserom.gba', masks=masks, doors=doors)
    for a, o in reskin.ROUND.items():
        if a >= 6: masks[a] = follow_outline(masks[a], o, doors.get(a, []))
    for a, c in reskin.COVER.items():
        m = masks[a].copy(); b = reskin.BARE[a]; bh, bw = b.shape[0] // 8, b.shape[1] // 8
        bare = b[:bh * 8, :bw * 8].reshape(bh, 8, bw, 8).mean((1, 3)) > 0.5
        m[:min(bh, m.shape[0]), :min(bw, 256)] |= bare[:min(bh, m.shape[0]), :min(bw, 256)]
        masks[a] = follow_outline(m, ~c, doors.get(a, []))
    boss_stats(W, rom, STATS)
    temp = bytes(rom[AREAS + 56 * [k for k in range(COUNT) if rom[AREAS + 56 * k] == 4 and rom[AREAS + 56 * k + 1] == 1][0]:][:56])
    for a, img in res.items():
        mask = masks[a]; audit(a, mask, doors.get(a, []))
        M, nt = build_map(W, P, a, img, np.packbits(mask.reshape(-1), bitorder='little')); info[a] = nt
        ent = bytearray(temp); ac = cfg['areas'].get(str(a), {})
        exits = []
        for d in doors.get(a, []):
            x0, y0, x1, y1 = d['rect']; ax, ay = d['arrive']
            dest = d['key'] | d.get('world', 26) << 8 | d['to'] << 16 | 1 << 24
            o = W.put(struct.pack('<2I4H2I', WARP[0], WARP[1], x0, y0, x1, y1, dest, ay << 16 | ax))
            exits.append((0, o))
        objs = []
        for e in ac.get('enemies', []):
            objs.append(W.put(struct.pack('<8I', 0x0800FD55, e.get('condition', 0), e['row'], e['y'] << 16 | e['x'],
                                          actor_ids[e['actor']] + 9, 0x080555A0, 1, 0x080716EC)))
        struct.pack_into('<I', ent, 0, 26 | a << 8 | 1 << 16 | len(exits) << 24)
        struct.pack_into('<I', ent, 4, len(objs))
        struct.pack_into('<I', ent, 0xC, ac.get('name', struct.unpack_from('<I', temp, 0xC)[0]))
        struct.pack_into('<I', ent, 0x10, W.put(b''.join(struct.pack('<II', *x) for x in exits)) if exits else 0)
        struct.pack_into('<I', ent, 0x14, W.put(b''.join(struct.pack('<I', o) for o in objs)) if objs else 0)
        struct.pack_into('<I', ent, 0x24, ac.get('music', cfg.get('music', MUSIC_FIELD)))
        struct.pack_into('<I', ent, 0x2C, W.put(struct.pack('<I', M + 4)))
        struct.pack_into('<I', ent, 0x30, 0)
        rows.append(bytes(ent))
    if debug_door:          # debug: walk down anywhere on Snake Way to reach 26:1
        e = next(AREAS + 56 * k for k in range(COUNT) if rom[AREAS + 56 * k] == 1 and rom[AREAS + 56 * k + 1] == 1)
        o = W.put(struct.pack('<2I4H2I', WARP[0], WARP[1], 0, 0, 1024, 1024, 0 | 26 << 8 | 1 << 16 | 1 << 24, 200 << 16 | 120))
        old = rom[e + 3]; ptr = struct.unpack_from('<I', rom, e + 0x10)[0]
        list_ = bytes(rom[ptr - BASE:ptr - BASE + 8 * old]) if old else b''
        struct.pack_into('<I', rom, e + 0x10, W.put(list_ + struct.pack('<II', 0, o))); rom[e + 3] = old + 1
    n = COUNT + len(rows); tab = W.put(bytes(rom[AREAS:AREAS + 56 * COUNT]) + b''.join(rows))
    struct.pack_into('<I', rom, TABLE_LIT, tab)
    a_ = min(0xFF, n // 2)
    struct.pack_into('<4H', rom, COUNT_INSN, 0x2000 | a_, 0x0040, 0x3000 | (n - 2 * a_), 0x4770)
    return W.cur, info
