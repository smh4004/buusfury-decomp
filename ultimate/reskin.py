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


def key(rgb):
    return rgb[..., 0].astype(np.int64) << 16 | rgb[..., 1].astype(np.int64) << 8 | rgb[..., 2]


def sprite(crop, background):
    """A cut-out: RGBA crop where the colours of the ground it was drawn on are transparent."""
    a = ~np.isin(key(crop), np.unique(key(background)))
    return crop, a


def stamp(rgb, spr, x, y, mask=None):
    """Paint a cut-out with its top-left at x, y, clipped to the image and, if given, to mask."""
    crop, alpha = spr; h, w = alpha.shape
    x0, y0 = max(x, 0), max(y, 0); x1, y1 = min(x + w, rgb.shape[1]), min(y + h, rgb.shape[0])
    if x0 >= x1 or y0 >= y1: return
    al = alpha[y0 - y:y1 - y, x0 - x:x1 - x]
    if mask is not None: al = al & mask[y0:y1, x0:x1]
    rgb[y0:y1, x0:x1][al] = crop[y0 - y:y1 - y, x0 - x:x1 - x][al]


def grow(mask, r):
    """Dilate by about r pixels, fast enough for whole rooms (works cell by cell past 8 pixels)."""
    out = mask.copy()
    for _ in range(r // 8):
        c = out.copy()
        c[8:] |= out[:-8]; c[:-8] |= out[8:]; c[:, 8:] |= out[:, :-8]; c[:, :-8] |= out[:, 8:]
        out = c
    return dilate(out, r % 8)


def snow_room(img, tex):
    """Snowy Highlands style: rock line round the floor, capped cliff faces with a cast shadow, boulders and pines on high ground."""
    h, w = img.shape
    floor, top, face = img == ICE_FLOOR, img == ICE_WALL, img == ICE_DEEP
    rgb = tiled(tex['snow'], h, w).copy()
    open_ground = floor | face
    round_floor = smooth(open_ground, 5)
    near = grow(open_ground, 16)
    # high ground: a wall of snow-capped boulders, stopping short of the floor's edge
    wall = top & ~grow(open_ground, 10)
    w_tex = tex['wall']
    for y in range(0, h, 64):
        for x in range(0, w, 64):
            if wall[y:y + 64, x:x + 64].any():
                stamp(rgb, w_tex, x, y, wall)
    for y in range(0, h - 96, 96):
        for x in range(16 + (y // 96 % 2) * 64, w - 64, 128):
            if top[y:y + 112, x:x + 66].all() and not near[y:y + 112, x:x + 66].any() and (x // 8 + y // 8) % 3 == 0:
                stamp(rgb, tex['pine'], x, y)
    # cliff faces: each column hangs from the top of its run, so the snow cap follows the edge
    cliff = tex['cliff']
    for x in range(w):
        col = face[:, x]; y = 0
        while y < h:
            if not col[y]: y += 1; continue
            e = y
            while e < h and col[e]: e += 1
            for k in range(e - y):
                rgb[y + k, x] = cliff[k % cliff.shape[0], x % cliff.shape[1]]
            y = e
    # shadow under the faces
    below = np.zeros_like(face); below[1:] = face[:-1]
    shade = below.copy()
    for _ in range(6):
        s = np.zeros_like(shade); s[1:] = shade[:-1]; shade = shade | s
    shade &= open_ground & ~face
    yy, xx = np.indices((h, w))
    rgb[shade & ((xx + yy) % 2 == 0)] = (168, 200, 232)
    # the rock line round the floor, broken up so it reads as stones
    edge = dilate(round_floor, 2) & ~round_floor & ~face & ~dilate(face, 1)
    n = (xx * 7 + yy * 13) % 5
    rgb[edge & (n < 3)] = (152, 88, 40)
    rgb[edge & (n >= 3)] = (216, 152, 96)
    # scattered stones and footprints on the floor
    for i, spr in enumerate(tex['bits']):
        for y in range(24 + 40 * i, h - 24, 136):
            for x in range(32 + 72 * i + (y // 136) * 56, w - 32, 184):
                bh, bw = spr[1].shape
                if floor[y - 8:y + bh + 8, x - 8:x + bw + 8].all(): stamp(rgb, spr, x, y)
    return rgb, floor | top | face


def city_room(img, road, pal, tex):
    """West City style: grass and trees for the blockers, plain road, paving instead of the prototype's pink."""
    h, w = img.shape
    rgb = pal[img][..., :3].copy()
    H, W = h // 8 * 8, w // 8 * 8
    cells = (img[:H, :W] == 10).reshape(H // 8, 8, W // 8, 8).all((1, 3))
    grey = np.zeros((h, w), bool); grey[:H, :W] = np.repeat(np.repeat(cells, 8, 0), 8, 1)
    if grey.any():
        rgb[grey] = tiled(tex['grass'], h, w)[grey]
        t = tex['tree']; th, tw = t[1].shape
        for row, y in enumerate(range(-16, h, 48)):
            for x in range(-40 if row % 2 else -8, w, 64):
                if grey[max(y + th // 2, 0):min(y + th, h), max(x + 16, 0):min(x + tw - 16, w)].any():
                    stamp(rgb, t, x, y, grey)
    if road.any():
        rgb[road] = tiled(tex['road'], h, w)[road]
    p = rgb.astype(int); pink = (p[..., 0] > 200) & (p[..., 0] - p[..., 2] > 25) & (p[..., 1] > 170) & (img > 0) & ~grey
    pc = np.zeros((h, w), bool)
    pc[:H, :W] = np.repeat(np.repeat(pink[:H, :W].reshape(H // 8, 8, W // 8, 8).mean((1, 3)) > 0.6, 8, 0), 8, 1)
    rgb[pc] = tiled(tex['paving'], h, w)[pc]
    return rgb


def reskin(img, road, pal, tex, area=0):
    """img: prototype indices; road: mask of prototype road pixels. Returns RGB.
    Ice maps: 48 low floor, 49 high ground, 50 cliff face. City maps: grey blocks are trees, pale blue is road."""
    if area >= 6:
        rgb, ice = snow_room(img, tex)
        rest = ~ice & (img != 0)
        if rest.any():                                          # 26:11: open air under the bridge becomes a frozen river
            rgb[rest] = tiled(tex['river'], *img.shape)[rest]
        rgb[img == 0] = 0
        return rgb.astype(np.uint8)
    rgb = city_room(img, road, pal, tex)
    if area == 5:                                              # the walk up out of the city into the snow
        snow, ice = snow_room(img, tex)
        rgb[ice] = snow[ice]
    rgb[img == 0] = 0
    return rgb.astype(np.uint8)


def build_all(proto, log2, bfrom, log2_index='../log2-decomp/assets/maps/index.csv', bf_index='assets/maps/index.csv'):
    """{area: BF-palette index image}, plus the BF palette."""
    G = M.Game(proto, 0x08000000, PROTO_PAL)
    L = M.Game(log2, 0x08000000, 0x3ECBA4)
    B = M.Game(bfrom, 0x08000000, 0x701B0)
    bfpal = B.pal[..., :3].astype(np.int64)
    idx = {l.split(',')[0]: int(l.split(',')[1], 16) - 0x08000000 for l in open(log2_index) if l.startswith('w')}
    bidx = {l.split(',')[0]: int(l.split(',')[1], 16) - 0x08000000 for l in open(bf_index) if l.startswith('w')}
    snow = lambda n: np.array(L.render(idx['w0D_a%s_Snowy_Highlands' % n])[0].convert('RGB'))
    s9, s3 = snow('09'), snow('03')
    city = np.array(B.render(bidx['w04_a01_West_City'])[0].convert('RGB'))
    floor = s3[290:380, 160:256]                 # plain snow, the ground the cut-outs are drawn on
    grass = city[470:502, 490:522]; lawn = city[470:540, 486:540]
    tex = dict(snow=s9[320:384, 0:64], cliff=s3[16:64, 0:128], river=s3[204:236, 212:244],
               wall=sprite(s3[128:192, 0:64], floor), pine=sprite(s3[20:132, 310:376], floor),
               bits=[sprite(s3[44:62, 184:206], floor), sprite(s3[332:350, 134:160], floor)],
               grass=grass, tree=sprite(city[432:544, 196:292], lawn), road=city[345:377, 96:128], paving=city[404:420, 128:144])
    res = {}
    for a in range(1, 16):
        m = map_of(G, a); img = layers(G, m)
        if a == 5: img = np.where(img == 2, ICE_FLOOR, img)  # the blank white path is the walk up into the snow
        res[a] = to_bf(reskin(img, road_mask(G, m, img.shape) & ~(img == ICE_FLOOR), G.pal, tex, a), bfpal)
    return res, bfpal


def blockers(proto, a):
    """Cells the reskin draws as solid: cliff faces and trees. The prototype's mask lets you walk over some of them."""
    G = M.Game(proto, 0x08000000, PROTO_PAL); img = layers(G, map_of(G, a)); h, w = img.shape
    H, W = h // 8 * 8, w // 8 * 8; c = img[:H, :W].reshape(H // 8, 8, W // 8, 8)
    return ((c == ICE_DEEP).mean((1, 3)) > 0.5) | (c == 10).all((1, 3))


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
