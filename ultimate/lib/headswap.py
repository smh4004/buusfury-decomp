"""Put one character's head on another's frames: LoG2 Goku's fighting frames for Yamcha, who has none of his own, as the project owner asked. Goku's head is found by matching it
against the head in his own standing frames, in each view, near the top of the figure. Lying-down frames get the side head turned on its side. A frame where the head can't be
found (a burst of speed, say) stays as Goku drew it, and is counted, so the build can report it."""
import struct
import numpy as np
from wfz import decompress_stream

BASE, L2_BASE = 0x08000000, 0x08800000
HEAD_ROWS = 15                # both characters' heads end at this row in a standing frame: the next one is the collar
COLLAR_ROWS = 3               # below that Goku wears a blue undershirt, which Yamcha doesn't
MIN_MATCH, MIN_LYING = 0.45, 0.40     # share of the template's pixels that must be right


def l2_stand(l2, rec, view):
    r = struct.unpack_from('<I', l2, rec + 0x4C + 4 * view)[0] - L2_BASE
    x, y, w, h = struct.unpack_from('<bbBB', l2, r); tp = struct.unpack_from('<I', l2, r + 8)[0] - L2_BASE
    t, size = struct.unpack_from('<II', l2, tp)
    data = l2[tp + 8:tp + 8 + size] if t == 0 else bytes(decompress_stream(l2, tp + 8, size)[0])
    return np.frombuffer(data, np.uint8)[:w * h].reshape(h // 8, w // 8, 8, 8).transpose(0, 2, 1, 3).reshape(h, w)


def bf_stand(rom, actor_list, actor, view):
    rec = struct.unpack_from('<I', rom, actor_list + 4 * actor)[0] - BASE
    a = struct.unpack_from('<I', rom, rec + 0x54)[0] - BASE
    f = struct.unpack_from('<I', rom, a + 4 + 4 * view)[0] - BASE
    w, h = struct.unpack_from('<BB', rom, f + 6); tp = struct.unpack_from('<I', rom, f + 16)[0] - BASE
    t, size = struct.unpack_from('<II', rom, tp)
    data = rom[tp + 8:tp + 8 + size] if t == 0 else bytes(decompress_stream(rom, tp + 8, size)[0])
    return np.frombuffer(bytes(data), np.uint8)[:w * h].reshape(h // 8, w // 8, 8, 8).transpose(0, 2, 1, 3).reshape(h, w)


class HeadSwap:
    def __init__(self, source, target, shifts, pal):
        """source, target: {view: standing frame in BF colour indices} for views 0 front, 1 back, 2 side. shifts: {view: target's x offset to line up with the source's body}."""
        rgb = pal.astype(int)
        self.dark = set(i for i in range(1, 256) if rgb[i].sum() < 70)
        self.blue = np.array([bool(i) and bool(rgb[i][2] > rgb[i][0] + 20) for i in range(256)], bool)
        o = target[0][HEAD_ROWS + 2]                                       # Yamcha's gi, just under his collar
        oranges = [v for v in o if v and rgb[v][0] > rgb[v][1] + 70]
        self.gi = max(set(oranges), key=oranges.count)
        self.views = {}; self.upright = []; self.lying = []; self.misses = 0; self.hits = 0
        for view, img in source.items():
            head = img[:HEAD_ROWS]; t = target[view][:HEAD_ROWS]; w = t.shape[1]
            placed = np.zeros((HEAD_ROWS, w), np.uint8); s = shifts[view]
            for x in range(w):
                if 0 <= x + s < w: placed[:, x + s] = t[:, x]
            self.upright.append((head, placed)); self.views[view] = [self.upright[-1]]
            if view == 2:
                self.upright.append((head[:, ::-1], placed[:, ::-1])); self.views[2].append(self.upright[-1])
                for flip in (False, True):
                    a, b = (head[:, ::-1], placed[:, ::-1]) if flip else (head, placed)
                    for k in (1, 3): self.lying.append((np.rot90(a, k), np.rot90(b, k)))

    @staticmethod
    def find(img, templates, ys):
        best = (0, None, 0, 0); h, w = img.shape
        for t in templates:
            head = t[0]; hh, hw = head.shape; ink = head != 0; total = ink.sum()
            for dy in ys:
                for dx in range(-6, w - hw + 7):
                    y0, y1, x0, x1 = max(dy, 0), min(dy + hh, h), max(dx, 0), min(dx + hw, w)
                    if y1 <= y0 or x1 <= x0: continue
                    sub = ink[y0 - dy:y1 - dy, x0 - dx:x1 - dx]
                    score = ((img[y0:y1, x0:x1] == head[y0 - dy:y1 - dy, x0 - dx:x1 - dx]) & sub).sum() / total
                    if score > best[0]: best = (score, t, dx, dy)
        return best

    def apply(self, src, view=None):
        """A frame in BF colour indices, with Yamcha's head if Goku's was found. view: which way the frame faces (a back view's black hair also matches a side head), or None when one frame serves all ways."""
        img = src.copy(); h, w = img.shape; rows = np.nonzero((img != 0).any(1))[0]; cols = np.nonzero((img != 0).any(0))[0]
        if not len(rows): return img
        top, height, width = rows[0], rows[-1] - rows[0] + 1, cols[-1] - cols[0] + 1
        lying = width >= 1.6 * height
        score, t, dx, dy = self.find(img, self.lying if lying else self.views[view] if view is not None else self.upright, range(top - 12, top + 8) if lying else range(top - 8, top + 4))
        if t is None or score < (MIN_LYING if lying else MIN_MATCH):
            self.misses += 1
            return img
        self.hits += 1
        head, placed = t; hh, hw = head.shape
        cover = np.zeros((h, w), bool)
        for y in range(hh):
            for x in range(hw):
                Y, X = y + dy, x + dx
                if 0 <= Y < h and 0 <= X < w and head[y, x]: cover[Y, X] = True
        # Goku's spikes reach past the standing head: whatever black touches the part we erase goes with it, above the shoulders.
        limit = dy + hh - (0 if lying else 1)
        q = list(zip(*np.nonzero(cover)))
        while q:
            y, x = q.pop()
            for Y, X in ((y + 1, x), (y - 1, x), (y, x + 1), (y, x - 1)):
                if 0 <= Y < min(h, limit) and 0 <= X < w and not cover[Y, X] and img[Y, X] in self.dark: cover[Y, X] = True; q.append((Y, X))
        img[cover] = 0
        for y in range(hh):
            for x in range(hw):
                Y, X = y + dy, x + dx
                if 0 <= Y < h and 0 <= X < w and placed[y, x]: img[Y, X] = placed[y, x]
        if not lying:
            for Y in range(max(dy + HEAD_ROWS, 0), min(dy + HEAD_ROWS + COLLAR_ROWS, h)):
                img[Y][self.blue[img[Y]]] = self.gi
        return img
