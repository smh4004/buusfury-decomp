#!/usr/bin/env python3
"""Map records (format from RE_NOTES, earlier session; re-verified here).

Map record M:
  +0x18..+0x24  layer headers BG0..BG3 (0 = unused)
  +0x38 / +0x3C walkable floor mask / play-area mask (WFZ 8 KB, 1 bit per 8x8 tile)
  +0x4C         tile list: WFZ u16 deltas, id[i] = id[i-1] + v + 1; high byte = page, low byte = tile
  +0x50         page table: pointers to WFZ pages (256 tiles, 8bpp, 16 KB)
Layer header: +0 handler, +4/+8 parallax X/Y (0x400 = 1.0), +0xC layer<<16, +0x14 dims (byte0 = chunks wide, byte1 = high),
              +0x18 chunk pointers, row-major.
Chunk: WFZ, 32x32 u16: bits 0-9 tile slot, bit 10 hflip, bit 11 vflip.
"""
import struct, sys, os
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'wfz'))
from wfz import unpack

ROM = 0x08000000
PALETTE = 0x701B0


def u32(d, o): return struct.unpack_from('<I', d, o)[0]


def palette(d, n=512):
    p = d[PALETTE:PALETTE + 3 * n]
    return [(p[3 * i], p[3 * i + 1], p[3 * i + 2]) for i in range(n)]


def read_map(d, M):
    layers = []
    for k in range(4):
        L = u32(d, M + 0x18 + 4 * k)
        if not L: layers.append(None); continue
        L -= ROM
        dims = u32(d, L + 0x14); cw, ch = dims & 0xFF, (dims >> 8) & 0xFF
        chunks = [u32(d, L + 0x18 + 4 * i) - ROM for i in range(cw * ch)]
        layers.append(dict(header=L, cw=cw, ch=ch, chunks=chunks, prio=(u32(d, L + 0xC) >> 16)))
    tl = unpack(d, u32(d, M + 0x4C) - ROM)[0]
    ids, cur = [], -1
    for i in range(0, len(tl), 2):
        cur = cur + struct.unpack_from('<H', tl, i)[0] + 1
        ids.append(cur)
    return dict(M=M, layers=layers, tiles=ids, pages=u32(d, M + 0x50) - ROM)


def chunk_entries(d, off):
    raw = unpack(d, off)[0]
    return list(struct.unpack('<1024H', raw[:2048]))


def render_layer(d, m, k, page_cache=None):
    from PIL import Image
    L = m['layers'][k]
    pal = palette(d, 256)
    page_cache = {} if page_cache is None else page_cache
    def page(p):
        if p not in page_cache:
            page_cache[p] = unpack(d, u32(d, m['pages'] + 4 * p) - ROM)[0]
        return page_cache[p]
    W, H = L['cw'] * 256, L['ch'] * 256
    im = Image.new('P', (W, H)); im.putpalette([c for rgb in pal for c in rgb])
    px = im.load()
    for ci, co in enumerate(L['chunks']):
        cx, cy = (ci % L['cw']) * 256, (ci // L['cw']) * 256
        ent = chunk_entries(d, co)
        for e_i, e in enumerate(ent):
            slot = e & 0x3FF
            if slot >= len(m['tiles']): continue
            tid = m['tiles'][slot]
            pg = page(tid >> 8); t = tid & 0xFF
            hf, vf = e >> 10 & 1, e >> 11 & 1
            bx, by = cx + (e_i % 32) * 8, cy + (e_i // 32) * 8
            for y in range(8):
                for x in range(8):
                    sx = 7 - x if hf else x; sy = 7 - y if vf else y
                    px[bx + x, by + y] = pg[t * 64 + sy * 8 + sx]
    return im
