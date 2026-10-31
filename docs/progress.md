# Progress and handoff notes

## Status (end of session 1)
| Phase | Status | Verified by |
|---|---|---|
| 0: setup, ROM map, toolchain | done | `config/regions.yaml` (100% of bytes classified), `docs/rom_map.md`, `docs/toolchain.md` |
| 1: matching build | **done** | `make && make compare` -> `buusfury.gba: OK` from a fresh unzip with baserom.gba |
| 2: labels + shiftability | done, with listed risks | SHIFT 0x100 / 0x1234 / 0x20000 builds play the long route pixel-identical after the title (`make shift-test`) |
| 3: editable assets | done for text, palette, EXP, map chunks; WFZ compressor | Demo edits visible in game; recompressing all 13,183 containers passes the long route |
| 4: decomp scope | report written, **[ASK]** pending | SDT 2.51 compiler experiment, `docs/decomp_scope.md` |

## Numbers
* Code: 4,944 function symbols (4,803 Thumb / 141 ARM, including entry points found through data pointers), about 142k instructions, 4,052 literal pools, 21 switch tables, 693 vtables.
  5 instructions emitted as raw words (`config/raw_insns.txt`).
* Data: 81,364 symbolic pointers in .rodata, 2,295 pointer-like words left as numbers (`config/ptr_ambiguous.txt`), 83 pinned ranges.
* Assets: 2,294 dialogue lines, 1,534 UI strings, 512 palette colours, 151 EXP values, 28 Snake Way chunks.

## How to continue
1. **Harness routes:** extend `tools/harness/long.txt` (battles, shop, save, another world) and rerun `make shift-test` and
   `make modern` with `tools/assets/recompress_all.py`. That's how hidden layout dependencies turn up. Debug with
   `guardon`, `watchon`, `bp`, `until`, `mem` (see the header of `tools/harness/harness.c`) and `tools/harness/ramdiff.py`.
2. **More assets:** find the remaining dialogue ref sites by tracing `Text_LoadString` in the harness, then export
   equipment/area tables and sprite frames, and add PNG import for tile pages.
3. **Names:** go through RE_NOTES and name the 248 script natives (`gScriptNativeFuncs`) and their handlers in `config/symbols.txt`.
4. **New code:** link GCC-compiled C into the ROM (see `docs/decomp_scope.md`).

## Gotchas learned
* vtables are **base-relative**, the ctor vector is **entry-relative**: both are emitted as symbol differences.
* GNU ld ORs the Thumb bit into `R_ARM_ABS32` against a `.thumb_func` symbol, so even pointers to Thumb code stay numeric.
* A text ref (`bank | off<<6 | len<<21`) with length 64-67 looks exactly like a ROM pointer.
* Some data is reached as `symbol ± constant` from code (pinned), and some records derive sizes from `next_ptr - ptr`.
  Replace objects; never insert gaps between them.
* The title-menu outline renderer reads uninitialised stack words, so 4 title pixels change whenever code or data moves.
* `make clean` deletes `build*/`, not `.analysis/` (the cached analysis and WFZ scan; delete it or use `--reanalyze`).
