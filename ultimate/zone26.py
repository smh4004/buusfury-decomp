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
TRIGGER = (0x0800742D, 0x080077DF)   # an exit that runs a step list when you're inside its rectangle
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


STATS = 0x711274
PHASE1_ROW, BOSS_ROW = 113, 114      # placed nowhere else in the game
STATS_COUNT, STATS_REFS = 150, (0xFCE4, 0xFD70, 0x1BA90, 0x24F28, 0x279DC, 0x2CD18, 0x2F5E4, 0x32D3C, 0x335B8, 0x39BD4, 0x39D90, 0x3A384, 0x3A698)
RUSH = ((18, 73), (28, 43), (122, 154), (10, 38), (115, 49), (118, 51), (119, 52), (61, 47), (BOSS_ROW, 'super13'))
# Dabura, Majin Buu, Super Janemba, Broly, Super Buu, Super Buu with Gotenks, Super Buu with Gohan, Kid Buu, Super 13: enemy row and character from spawns.csv.
# Every story boss has the same AI (record +0x1C). The spawn's +0x14 only says what runs when it dies, and 0x080555A0 runs nothing: Broly's own runs his closing scene, which would hold the player still in the next room.
RUSH_FIRST, RUSH_WON = 19, 642   # room of the first fight, flag for a win not yet rewarded
RUSH_HP = (10000, 40000, 25840, 20240, 30000, 32000, 34000, 36000, 55000)    # shorter than the story's, since all nine share one health bar


def boss_stats(W, rom, stats):
    """Android 13 first, then Super 13, whose stats top Kid Buu's (150, 66, 110, 100); 105000 HP across the two phases against his 125000. At level 99 with an even build a punch does about 125 to Android 13 and 120 to Super 13, so this is 250 + 620 punches before charged hits and skills, and two of his hits still take a level 99 fighter down. Reloading a room in place loses the player, so each stage
    of the fight is its own copy of the arena: 15 Android 13, 16 his change, 17 Super 13, 18 the Spirit Bomb finish."""
    import bfscript
    def death(flag, area):
        return W.put(bytes(bfscript.asm('    pushn %d\n    call set_flag\n    call 0x78(30)\n    pushn 26, %d, 1, 120, 276\n    call 0x77\n    call 0x79(30)\n    end\n' % (flag, area))))
    def row(n, exp, hp, stat, phys, flag, area):
        r = stats + 28 * n; dabura = stats + 28 * 18
        rom[r:r + 28] = rom[dabura:dabura + 28]
        struct.pack_into('<II', rom, r, exp, hp)
        rom[r + 0xC:r + 0x10] = bytes(stat)
        rom[r + 0x10] = phys
        struct.pack_into('<II', rom, r + 0x14, 0x08708920, death(flag, area))     # this handler is the one that runs death scripts
    row(PHASE1_ROW, 40000, 30000, (150, 60, 90, 90), 128, 620, 16)
    row(BOSS_ROW, 96175, 75000, (160, 70, 115, 105), 96, 625, 18)


def rush_rows(W, rom, harmless=False):
    """The Boss Rush's copies of the bosses, on new rows of a moved stats table: each death sends you to the next room."""
    import bfscript
    rows = bytearray(rom[STATS:STATS + 28 * STATS_COUNT])
    for k, (row, _) in enumerate(RUSH):
        r = bytearray(rom[STATS + 28 * row:STATS + 28 * (row + 1)])
        struct.pack_into('<II', r, 0, 1000, RUSH_HP[k])     # little EXP: a level-up box after Super Buu with Gotenks reset the game, and with 0 or 1 the boss never dies
        if harmless: r[0xC] = r[0xD] = 0      # debug zone build only: bosses that can't end the test before it reaches the next room
        last = k == len(RUSH) - 1
        if last:     # home to West City, where the resident pays out: a scene can't start in a room that held a boss
            text = '    pushn %d\n    call set_flag\n    call max_hp\n    set hp\n    call max_ki\n    set ki\n    call 0x78(60)\n    pushn 4, 1, 1, 320, 392\n    call 0x77\n    call 0x79(30)\n    call 0x2F\n    call 0x33(0)\n    end\n' % RUSH_WON
        else:
            text = '    call 0x78(30)\n    pushn 26, %d, 1, 120, 276\n    call 0x77\n    call 0x79(30)\n    end\n' % (RUSH_FIRST + k + 1)
        struct.pack_into('<II', r, 0x14, 0x08708920, W.put(bytes(bfscript.asm(text))))
        rows += r
    at = W.put(bytes(rows))
    for o in STATS_REFS:
        if struct.unpack_from('<I', rom, o)[0] != BASE + STATS:
            sys.exit('stats table reference moved: %X' % o)
        struct.pack_into('<I', rom, o, at)


def condition(W, text):
    import bfscript
    return W.put(bytes(bfscript.asm(text)))


def apply(rom, clean, proto_path, log2_path, at, actor_ids=None, debug_door=False, quest_list=0, ending_list=0):
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
    rush_rows(W, rom, debug_door)
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
            param = 0
            if a == 14 and d['to'] == 15:                 # coming back mid-fight: straight to Super 13
                param = condition(W, '    pushn 623\n    call not_flag\n    pushn 625\n    call flag\n    or\n    end\n')
            exits.append((param, o))
            if a == 14 and d['to'] == 15:
                o2 = W.put(struct.pack('<2I4H2I', WARP[0], WARP[1], x0, y0, x1, y1, d['key'] | 26 << 8 | 17 << 16 | 1 << 24, ay << 16 | ax))
                exits.append((condition(W, '    pushn 623\n    call flag\n    pushn 625\n    call not_flag\n    and\n    end\n'), o2))
        objs = []
        for e in ac.get('enemies', []):
            objs.append(W.put(struct.pack('<8I', 0x0800FD55, (condition(W, e['script']) if 'script' in e else e.get('condition', 0)), e['row'], e['y'] << 16 | e['x'],
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
        if a == 15:                                       # stages of the arena: same map and way out
            base_ent = bytes(ent)
            import bfscript
            for stage, spec in ((16, 'change'), (17, 'boss'), (18, 'scene')):
                st = bytearray(base_ent); struct.pack_into('<B', st, 1, stage)
                ring = W.put(struct.pack('<2I4HI', TRIGGER[0], TRIGGER[1], 0, 0, 1024, 1024, quest_list))
                if spec == 'boss':                        # no scene here: a dialogue box with this boss loaded resets the game
                    ex = exits
                    e = W.put(struct.pack('<8I', 0x0800FD55, 0, BOSS_ROW, 214 << 16 | 120, actor_ids['super13'] + 9, 0x080555A0, 1, 0x080716EC))
                    struct.pack_into('<I', st, 4, 1); struct.pack_into('<I', st, 0x14, W.put(struct.pack('<I', e)))
                else:
                    ex = [(0, ring)]
                    if spec == 'change':                  # walk up to Super 13 to start the fight
                        go = W.put(bytes(bfscript.asm('    call 0x78(20)\n    pushn 26, 17, 1, 120, 276\n    call 0x77\n    call 0x79(20)\n    end\n')))
                        ex.append((0, W.put(struct.pack('<2I4HI', 0x08007387, TRIGGER[1], 72, 226, 168, 258, go))))
                    struct.pack_into('<I', st, 4, 0); struct.pack_into('<I', st, 0x14, 0)
                st[3] = len(ex)
                struct.pack_into('<I', st, 0x10, W.put(b''.join(struct.pack('<II', *x) for x in ex)) if ex else 0)
                rows.append(bytes(st))
            for k, (_, char) in enumerate(RUSH):    # Boss Rush: one room per boss
                st = bytearray(base_ent); st[1] = RUSH_FIRST + k
                e = W.put(struct.pack('<8I', 0x0800FD55, 0, STATS_COUNT + k, 214 << 16 | 120, actor_ids[char] + 9 if isinstance(char, str) else char, 0x080555A0, 1, 0x080716EC))
                struct.pack_into('<I', st, 4, 1); struct.pack_into('<I', st, 0x14, W.put(struct.pack('<I', e)))
                st[3] = len(exits); struct.pack_into('<I', st, 0x10, W.put(b''.join(struct.pack('<II', *x) for x in exits)) if exits else 0)
                rows.append(bytes(st))
    if debug_door:          # debug: on Snake Way, x>=96 walk down reaches 26:1; x 48-96 walk up reaches Broly; x<48 starts the ending
        e = next(AREAS + 56 * k for k in range(COUNT) if rom[AREAS + 56 * k] == 1 and rom[AREAS + 56 * k + 1] == 1)
        o = W.put(struct.pack('<2I4H2I', WARP[0], WARP[1], 96, 0, 1024, 1024, 0 | 26 << 8 | 1 << 16 | 1 << 24, 200 << 16 | 120))
        old = rom[e + 3]; ptr = struct.unpack_from('<I', rom, e + 0x10)[0]
        list_ = bytes(rom[ptr - BASE:ptr - BASE + 8 * old]) if old else b''
        o2 = W.put(struct.pack('<2I4H2I', WARP[0], WARP[1], 48, 0, 96, 1024, 1 | 15 << 8 | 32 << 16 | 1 << 24, 290 << 16 | 224))   # x 48-96, walk up: story Broly
        o3 = W.put(struct.pack('<2I4HI', TRIGGER[0], TRIGGER[1], 0, 0, 48, 1024, ending_list))   # stand at x<48: the ending from step 67 (build.py makes step 1 jump there)
        struct.pack_into('<I', rom, e + 0x10, W.put(list_ + struct.pack('<IIIIII', 0, o, 0, o2, 0, o3))); rom[e + 3] = old + 3
    n = COUNT + len(rows); tab = W.put(bytes(rom[AREAS:AREAS + 56 * COUNT]) + b''.join(rows))
    struct.pack_into('<I', rom, TABLE_LIT, tab)
    a_ = min(0xFF, n // 2)
    struct.pack_into('<4H', rom, COUNT_INSN, 0x2000 | a_, 0x0040, 0x3000 | (n - 2 * a_), 0x4770)
    return W.cur, info
