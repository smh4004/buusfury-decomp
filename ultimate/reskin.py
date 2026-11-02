#!/usr/bin/env python3
"""Reskin prototype D's Zone 26 maps with real tiles. Prototype placeholder colours become LoG2 snow and rock textures and
Buu's Fury West City textures; all other pixels are kept. Output: per-map arrays of Buu's Fury BG palette indices.
Usage: python3 ultimate/reskin.py <proto rom> <USA LoG2 rom> <BF rom> <out dir> [--preview]"""
import struct, sys, os
sys.path.insert(0, 'ultimate/lib')
import numpy as np
from PIL import Image, ImageDraw
import maprender as M
import artclean as A

PROTO_SCENES, PROTO_PAL = 0xB9940, 0xA2504
ICE_FLOOR, ICE_WALL, ICE_DEEP = 48, 49, 50


def map_of_raw(P, area):
    return struct.unpack_from('<I', P, PROTO_SCENES + 4 * (area - 1))[0] - 0x08000004


def map_of(G, area):
    return G.u32(PROTO_SCENES + 4 * (area - 1)) - 0x08000004


def layers(G, m):
    """Composite the prototype's normal-scroll layers as palette indices."""
    t = G.tiles(m); ls = []
    for k in range(4):
        h = G.u32(m + 0x18 + 4 * k)
        if h and G.ok(h):
            try: ls.append((k,) + G.layer(h, t))
            except Exception: pass
    main = [l for l in ls if l[2] == (0x400, 0x400)]
    H = max(l[1].shape[0] for l in main); W = max(l[1].shape[1] for l in main)
    out = np.zeros((H, W), np.uint8)
    for k, can, _ in sorted(main, key=lambda l: -l[0]):
        mask = can != 0
        out[:can.shape[0], :can.shape[1]][mask] = can[mask]
    return out


def road_mask(G, m, shape):
    """Blue-white ground layer pixels: the road. Only the bottom layer, so the building's windows are safe."""
    t = G.tiles(m); can, _ = G.layer(G.u32(m + 0x24), t)
    p = G.pal[can].astype(int); mask = (can != 0) & (p[..., 2] > p[..., 0] + 15) & (p[..., 0] > 150) & (can != ICE_FLOOR)
    H, W = mask.shape                                      # whole 8x8 cells, so the road's dither goes with it
    cells = mask.reshape(H // 8, 8, W // 8, 8).mean((1, 3)) > 0.5
    mask = np.repeat(np.repeat(cells, 8, 0), 8, 1)
    out = np.zeros(shape, bool); h, w = min(shape[0], mask.shape[0]), min(shape[1], mask.shape[1])
    out[:h, :w] = mask[:h, :w]; return out


def to_bf(rgb, bfpal, cache={}):
    """RGB array -> nearest Buu's Fury BG palette index."""
    flat = rgb.reshape(-1, 3); keys, inv = np.unique(flat, axis=0, return_inverse=True)
    # plain RGB distance: CIE94 sends near-whites to pale greens, which showed up as speckles on the road
    k = keys[:, None].astype(np.int64); q = bfpal[1:][None]
    chroma = lambda c: np.stack([c[..., 0] - c[..., 1], c[..., 1] - c[..., 2]], -1)
    d = ((k - q) ** 2).sum(2) + 40 * ((chroma(k) - chroma(q)) ** 2).sum(2)  # keep pale colours from landing on green
    idx = d.argmin(1) + 1
    return idx[inv].reshape(rgb.shape[:2]).astype(np.uint8)


def smooth(mask, r=5):
    """Round blocky 8-pixel edges: box blur then threshold."""
    f = mask.astype(np.float32)
    for axis in (0, 1):
        c = np.cumsum(np.concatenate([np.take(f, [0] * (r + 1), axis), f, np.take(f, [-1] * r, axis)], axis), axis)
        n = f.shape[axis]
        hi = np.take(c, np.arange(2 * r + 1, n + 2 * r + 1), axis); lo = np.take(c, np.arange(0, n), axis)
        f = (hi - lo) / (2 * r + 1)
    return f > 0.5


def dilate(mask, r):
    out = mask.copy()
    for _ in range(r):
        out[1:] |= out[:-1].copy(); out[:-1] |= out[1:].copy()
        out[:, 1:] |= out[:, :-1].copy(); out[:, :-1] |= out[:, 1:].copy()
    return out


def tiled(tex, h, w):
    th, tw = tex.shape[:2]
    return np.tile(tex, (h // th + 1, w // tw + 1) + (1,) * (tex.ndim - 2))[:h, :w]


def mirror(t):
    """Make a crop tile seamlessly."""
    return np.concatenate([t, t[:, ::-1]], 1)


def reskin(img, road, pal, tex):
    """img: prototype indices; road: mask of prototype road pixels. Returns RGB.
    Ice maps: 48 low floor, 49 high ground (snow top), 50 cliff face. City maps: grey blocks are trees, pale blue is road."""
    h, w = img.shape
    rgb = pal[img][..., :3].copy()
    floor = img == ICE_FLOOR; top = img == ICE_WALL; face = img == ICE_DEEP
    ice = floor | top | face
    if ice.any():
        snow = tiled(tex['snow'], h, w); rock = tiled(tex['rock'], h, w)
        out = np.where(face[..., None], rock, snow)
        rim = top & dilate(floor | face, 2)          # brown rock line around high ground, as Snowy Highlands draws it
        out[rim] = tex['rim']
        rgb[ice] = out[ice]
    grey = img == 10                                # only solid grey cells are blockers; grey in paving lines stays
    H, W = h // 8 * 8, w // 8 * 8
    cells = grey[:H, :W].reshape(H // 8, 8, W // 8, 8).all((1, 3))
    grey = np.zeros((h, w), bool); grey[:H, :W] = np.repeat(np.repeat(cells, 8, 0), 8, 1)
    if grey.any():
        rgb[grey] = tiled(tex['trees'], h, w)[grey]
    if road.any():
        rgb[road] = tiled(tex['road'], h, w)[road]
    return rgb.astype(np.uint8)


def build_all(proto, log2, bfrom, log2_index='../log2-decomp/assets/maps/index.csv', bf_index='assets/maps/index.csv'):
    """{area: BF-palette index image}, plus the BF palette."""
    G = M.Game(proto, 0x08000000, PROTO_PAL)
    L = M.Game(log2, 0x08000000, 0x3ECBA4)
    B = M.Game(bfrom, 0x08000000, 0x701B0)
    bfpal = B.pal[..., :3].astype(np.int64)
    idx = {l.split(',')[0]: int(l.split(',')[1], 16) - 0x08000000 for l in open(log2_index) if l.startswith('w')}
    bidx = {l.split(',')[0]: int(l.split(',')[1], 16) - 0x08000000 for l in open(bf_index) if l.startswith('w')}
    snow_map = np.array(L.render(idx['w0D_a09_Snowy_Highlands'])[0].convert('RGB'))
    city = np.array(B.render(bidx['w04_a01_West_City'])[0].convert('RGB'))
    tex = dict(snow=snow_map[320:384, 0:64], rock=mirror(snow_map[62:94, 104:124]), rim=np.array((168, 104, 56)),
               trees=city[410:474, 0:64], road=city[345:377, 96:128])
    res = {}
    for a in range(1, 16):
        m = map_of(G, a); img = layers(G, m)
        if a == 5: img = np.where(img == 2, ICE_FLOOR, img)  # the blank white path is the walk up into the snow
        res[a] = to_bf(reskin(img, road_mask(G, m, img.shape) & ~(img == ICE_FLOOR), G.pal, tex), bfpal)
    return res, bfpal


def main():
    proto, log2, bfrom, out = sys.argv[1:5]
    res, bfpal = build_all(proto, log2, bfrom)
    os.makedirs(out, exist_ok=True)
    if '--preview' in sys.argv:
        o = Image.new('RGB', (5 * 300, 3 * 240), (20, 20, 20)); d = ImageDraw.Draw(o)
        for k, (a, r) in enumerate(res.items()):
            im = Image.fromarray(bfpal[r].astype(np.uint8)); w, h = im.size; s = min(298 / w, 226 / h)
            o.paste(im.resize((int(w * s), int(h * s)), Image.NEAREST), ((k % 5) * 300, (k // 5) * 240 + 12))
            d.text(((k % 5) * 300 + 2, (k // 5) * 240), '26:%d' % a, fill='yellow')
        o.save(out + '/preview.png')
        for a in (2, 6, 8, 11):
            Image.fromarray(bfpal[res[a]].astype(np.uint8)).save('%s/z26_%02d.png' % (out, a))


if __name__ == '__main__':
    main()
