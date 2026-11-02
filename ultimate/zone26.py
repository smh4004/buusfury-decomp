"""Zone 26: the prototype's cut Super 13 dungeon as new areas 26:1..15. Layouts and collision come from Prototype D, reskinned
by reskin.py. One flat BG3 layer, stored tile pages; the prototype's one-way debug doors are replaced by zone26.json."""
import json, os, struct, sys
import numpy as np
from wfz import decompress_stream
import reskin

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
    if len(tiles) > 1024: raise ValueError('%d tiles: over the 1024 a map can use' % len(tiles))
    return tiles, cells


def build_map(W, P, a, img):
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
    nw[14] = wfz_copy(W, P, w[14]); nw[15] = wfz_copy(W, P, w[15])
    nw[17] = 1
    deltas = np.ones(len(tiles), np.int64) * 0                       # ids 0,1,2..: consecutive
    nw[19] = W.stored(deltas.astype('<u2').tobytes())
    pages = [b''.join(tiles[i:i + 256]) for i in range(0, len(tiles), 256)]
    nw[20] = W.put(b''.join(struct.pack('<I', W.stored(p)) for p in pages))
    M = W.cur; nw[18] = BASE + M
    W.put(struct.pack('<21I', *nw))
    return BASE + M, len(tiles)


def apply(rom, clean, proto_path, log2_path, at, actor_ids=None):
    P = open(proto_path, 'rb').read()
    res, _ = reskin.build_all(proto_path, log2_path, 'baserom.gba')
    cfg = json.load(open('ultimate/zone26.json')); W = Writer(rom, at); rows = []; info = {}
    temp = bytes(rom[AREAS + 56 * [k for k in range(COUNT) if rom[AREAS + 56 * k] == 4 and rom[AREAS + 56 * k + 1] == 1][0]:][:56])
    for a, img in res.items():
        M, nt = build_map(W, P, a, img); info[a] = nt
        ent = bytearray(temp); ac = cfg['areas'].get(str(a), {})
        exits = []
        for d in ac.get('doors', []):
            x0, y0, x1, y1 = d['rect']; ax, ay = d['arrive']
            dest = d['key'] | 26 << 8 | d['to'] << 16 | 1 << 24
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
    n = COUNT + len(rows); tab = W.put(bytes(rom[AREAS:AREAS + 56 * COUNT]) + b''.join(rows))
    struct.pack_into('<I', rom, TABLE_LIT, tab)
    a_ = min(0xFF, n // 2)
    struct.pack_into('<4H', rom, COUNT_INSN, 0x2000 | a_, 0x0040, 0x3000 | (n - 2 * a_), 0x4770)
    return W.cur, info
