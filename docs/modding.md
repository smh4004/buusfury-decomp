# Modding guide: scripts, maps, graphics and tables

```sh
make extract                    # baserom.gba -> assets/ (about 11,000 editable files; git-ignored, never commit them)
#   ...edit files under assets/...
make modern                     # -> buusfury_modern.gba, built from your edits
python3 tools/assets/demo_edits.py   # optional: one demo edit of every kind (run on a fresh extract)
```
`make modern` rebuilds only what you changed, and with no edits it reproduces the original ROM byte for byte. Edited objects that
fit are written in place. Objects that grow move to the end of .rodata, and every pointer to them follows (`docs/assets.md`).
Share your hack as a `.bps` patch made from `buusfury_modern.gba`, never as a ROM or as `assets/`.

| What | Files | Tool |
|---|---|---|
| Cutscenes, NPC talk, shops, triggers | `assets/scripts/<list>.evt` (533 event lists, 3,890 steps) | `tools/scripts/events.py`, `bfscript.py` |
| Item effects | `assets/scripts/items/*.scr` | `bfscript.py` |
| Dialogue text / UI text | `assets/text/dialogue.txt`, `ui_strings.txt` | `tools/assets/assets.py` |
| Maps (all 427) | `assets/maps/<wXX_aYY_Name>/L<k>.csv`, `tiles.txt`, `floor.png`, `area.png` | `tools/assets/mapassets.py` |
| Background tiles | `assets/gfx/tiles/page_NNN.png` (187 pages) | `tools/assets/gfx.py` |
| Sprites | `assets/gfx/sprites/<animation>/*.png` (7,240 frames) | `tools/assets/sprites.py` |
| Areas, equipment, items, scouter | `assets/tables/*.csv` | `tools/assets/tables.py` |
| Palette, EXP curve | `assets/palette/master.txt`, `assets/tables/exp.csv` | `tools/assets/assets.py` |

---

## 1. Scripts and events

### The VM
Scripts are bytecode for a small stack machine (`ScriptVM_Run`, 0x08004038). Values are pushed onto a stack, and **natives**
(248 game functions) pop their arguments and push results. `tools/scripts/bfscript.py` lists every opcode. In text form:
```
    call load_area(0, 2, 0, 0, 0)     ; push 0, push 2, ..., call native 0x72
    call music(36)
    pushn 780, 0, 100                 ; several numbers at once (any size, negative allowed)
    call 0x6B                         ; natives without a name yet are written as numbers
    call 0x04                         ; a "var" read: natives 0x00-0x11 double as variables
    push 0
    eq
    jz L1                             ; jump if the comparison was false
    set 0x05                          ; var 0x05 = pop
L1:
    end
```
`call NAME(a, b)` is shorthand for pushing `a` and `b` and then calling. It assembles to exactly the original bytes.
Native names live in `config/script_natives.txt`. A name added there shows up in every exported file on the next `make extract`, and the
assembler accepts it. Renaming never changes the ROM. Most natives are still unnamed. To learn what one does, find
it in `gScriptNativeFuncs` (`data/rodata_08054FBC.s`) and read its C in `ref/`.

### Event lists (`.evt`)
An event is a list of **steps**, run in order. One file per list:
```
# Event list gUnknown_0877CBF0 (0x0877CBF0), 19 steps.
step 1 code                       ; a step of bytecode
    call load_area(0, 2, 0, 0, 0)
    call music(36)
    end
step 2 say 0x00 @0:809:49         ; a dialogue box: speaker 0x00 (narrator), text reference bank:offset:length
step 3 say 0x02 "Hi, I'm new!"    ; ...or write the text inline: it's added to the overflow text bank
step 18 zcode                     ; bytecode stored compressed (same syntax)
step 5 saycode 0x02 @3:100:20     ; dialogue followed by bytecode
step 6 text "-Buy\n-Sell"         ; inline UTF-16 text (shop menus)
step 7 raw 7 00 fc 51 79 08 ...   ; step kinds not decoded yet, kept as bytes
step ref gUnknown_0877C5E8        ; reuse a step that's written out in another list
```
* **Add, remove or reorder steps** freely in normal lists (`step auto ...` for new ones). The game finds the next step by
  its id, so the build renumbers steps 1, 2, 3... by position. In those lists the number you write only tells the build which original step a
  line came from. A few lists (dialogue trees, ids not starting at 1) keep ids exactly as written. A few lists have no
  terminator and can't change length; their header says so.
* **Speakers**: `0x00` narrator, `0x02` Goku, `0x57` King Kai. The speaker byte also picks the portrait.
* Dialogue text can still be edited in `dialogue.txt`, and lines written inline in a `.evt` are new lines. Don't change the same
  line both ways in one build.

Tested: the intro list, with one line rewritten inline and a new step inserted, plays in game (`tools/assets/demo_edits.py`).
`python3 tools/scripts/roundtrip.py` checks that all 3,890 steps reassemble to their original bytes and that unedited
files produce no changes.

### Item effects (`.scr`)
`assets/scripts/items/11_Senzu_Bean.scr`:
```
    call max_hp
    set hp          ; hp = max_hp
    call max_ki
    set ki
    call play_sfx(21)
    call journal_flag(11)
    end
```
A script that grows is moved, and the item table's `effect` pointer follows it.

## 2. Maps
`assets/maps/index.csv` lists every map with the areas that use it. Folders are named after the first area
(`w01_a01_Snakeway`), and maps no area uses keep their label name.
* **`L<k>.csv`**: the whole layer as one grid of hex cells: bits 0-9 = **slot** in the map's tile list, bit 10 = flip X,
  bit 11 = flip Y. (`0B3` = slot 179; `4B3` = slot 179 flipped horizontally.) Layers are made of 256x256-pixel chunks. A chunk
  that other maps share is copied when you edit it, so the other maps don't change.
* **`tiles.txt`**: slot -> tile id (`page:tile`, hex). To use a new tile in this map, add its id here. Ids must stay strictly
  increasing, so the slots after it move. Pick a page tile from `assets/gfx/tiles/page_NNN.png` (tile = 16 * row + column).
* **`floor.png` / `area.png`**: 256x256 masks, one pixel per 8x8 cell (white = set): walkable floor and play area.
* Previews: `python3 tools/assets/assets.py extract --previews` renders every layer to `L<k>.png`. It's slow, and the build doesn't read them.

## 3. Graphics
* **Tile pages** (`assets/gfx/tiles/page_NNN.png`): 128 px wide, 16 tiles per row, 256-colour (master palette 0-255). Edit
  in any editor and keep the size. Indexed PNGs are used as is, and RGB images are matched to the nearest palette colour. A page is
  shared by every map that uses it.
* **Sprites** (`assets/gfx/sprites/<animation>/*.png`): one PNG per frame, 256-colour, OBJ palette (master palette
  256-511), index 0 transparent. Keep the size. With RGB/RGBA images, alpha < 128 becomes transparent. Not exported yet: multi-piece frames
  (about 1,000 records) and 16-colour frames.
* **Palette** (`assets/palette/master.txt`): 512 lines `R G B`, 0-255 BG and 256-511 OBJ.

## 4. Tables (`assets/tables/*.csv`)
| File | Rows | Notes |
|---|---:|---|
| `areas.csv` | 452 | `gAreaTable`: world/area ids, name (UI string index, `_name_text` shows it), `scene` (map), and pointers to the area's scripts and actors (inferred) |
| `equipment.csv` | 162 | name/desc strings, icon, slot (0 body, 1 hands, 2 feet, 3 accessory), `level_plus_50`, stat bonuses `stat0-5` (order inferred), price (-1 = not sold) |
| `items.csv` | 24 | consumables and key items: names, icons, price, `effect` (-> `scripts/items/*.scr`) |
| `scouter.csv` | 232 | scouter/journal entries: name, description, character id |
| `exp.csv` | 151 | EXP needed per level |
Pointer columns hold labels (`gUnknown_086F3C30`, `label + 0x10`) or hex code addresses. Point them at any object. Columns
starting with `_` are read-only hints. Rows can't be added or removed.

**Not found yet: enemy stats** (HP, damage, EXP reward). The scouter table links enemies to character ids, and the table at
0x086B6BB4 (indexed by character id) holds hitboxes, not stats. Watching a fight in the harness (`watchon` on an enemy's HP)
is the way to find the stat records.

## 5. How it fits together
* `make extract` runs `tools/assets/assets.py extract`: it scans the ROM, writes the files and `assets/manifest.json` (SHA-1 of
  every file at extraction).
* `make modern` runs `assets.py build`, which turns every file whose SHA-1 changed into **overrides**: binary blobs or assembly
  snippets with symbolic pointers, plus brand-new objects. `tools/assets/apply.py` splices them into a copy of `data/*.s`, and
  the normal build links the ROM. Object boundaries come from the labels in `data/*.s` (`tools/assets/labels.py`).
* Compression: edited WFZ blocks are recompressed with `tools/wfz/wfz_compress.py` (every output is verified by decompressing).
