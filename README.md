# Dragon Ball Z: Buu's Fury (USA): matching disassembly

A pret-style source tree that rebuilds **Dragon Ball Z: Buu's Fury (USA)** (GBA, `BG3E`) byte for byte from assembly
and data. Code and data are labelled and relocatable, and game assets can be edited as text, CSV and PNG and rebuilt.

This repository contains **no ROM data**. Everything copyrighted is read at build time from your own `baserom.gba`
(SHA-1 `f1c4b07554d2a3b1ad2f325307051e775ce68087`). The generated `asm/*.s` and `data/*.s` are mechanically derived
from that ROM: keep the repository private.

## Quick start
```sh
sudo apt-get install gcc-arm-none-eabi binutils-arm-none-eabi python3 python3-pip libmgba-dev libpng-dev
pip install --break-system-packages capstone numpy pillow
cp /path/to/your/dump.gba baserom.gba
make && make compare          # -> buusfury.gba: OK
```

| Command | What it does |
|---|---|
| `make` / `make compare` | Matching build and SHA-1 check |
| `make SHIFT=0x100` | Relocation test build: inserts padding after crt0, so everything moves |
| `make shift-test` | Builds the harness, the matching ROM and a SHIFT ROM, plays `tools/harness/long.txt` on both and compares |
| `make extract` | Extracts editable assets to `assets/` (git-ignored) |
| `make modern` | Builds `buusfury_modern.gba` from `assets/` (unchanged assets keep their original bytes) |
| `python3 tools/bfdis/gen.py baserom.gba [--reanalyze]` | Regenerates `asm/`, `data/` and `config/` from the ROM (code discovery, pointers) |

## Layout
| Path | Contents |
|---|---|
| `asm/header.s`, `asm/crt0.s` | Cartridge header (logo pulled from baserom) and ARM start-up |
| `asm/code_*.s` | Code area 0x08000158-0x08054FBB: Thumb/ARM code, literal pools, switch tables, vtables, ctor vector, veneers |
| `asm/iwram.s` | RW image linked at 0x03000000 (WFZ decompressor, mixers, IRQ table), loaded at `__iwram_lma` |
| `data/rodata_*.s` | .rodata: labels and symbolic pointers, `incbin` from baserom in between |
| `config/` | `symbols.txt` (names, edit freely), `regions.yaml` (byte map), `pinned.txt`, `ptr_ambiguous.txt`, `raw_insns.txt` |
| `tools/bfdis/` | Disassembler: `analyze.py` (code discovery), `ptrs.py` (data pointers), `emit.py`, `gen.py`, `verify.py`, `regions.py`, `pinned.py` |
| `tools/wfz/` | WFZ decoder (port of the game's), **compressor**, block scanner |
| `tools/assets/` | `assets.py` (extract/build), `apply.py` (splice into data), `maps.py`, `recompress_all.py` (stress test), `demo_edits.py` |
| `tools/harness/` | Headless mGBA harness (screenshots, PC guard, breakpoints, memory watch), `ramdiff.py`, test routes |
| `docs/` | `rom_map.md`, `toolchain.md`, `shifting.md`, `assets.md`, `decomp_scope.md`, `progress.md` |

## Naming
Known functions and tables are named in `config/symbols.txt` (`ScriptVM_Run`, `Wfz_LoadContainer`, `gAreaTable`, ...).
Everything else is `sub_08XXXXXX` (functions), `_08XXXXXX` (local labels) or `gUnknown_08XXXXXX` (data).
Add names to `config/symbols.txt` and rerun `gen.py`.
