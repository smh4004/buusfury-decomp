# Buu's Fury Ultimate Edition

```sh
cp /path/to/clean/buusfury.gba baserom.gba   # USA, SHA-1 f1c4b075...
make extract && make harness
python3 ultimate/build.py && python3 ultimate/build.py --debug
python3 ultimate/test_build.py
```
Output goes to `ultimate/out/` (git-ignored). Share only `.bps` patches. New forms are defined in `ultimate/forms.json`.
The debug build starts with Vegito and guest Broly, and opens Switch Character then saves when the intro ends.

## Outfits
`ultimate/outfits.json` lists each character's outfits, and `ultimate/src/outfit.c` adds Up and Down to the Switch Character screen.
Only forms with full combat animations belong in the list. An outfit's Super Saiyan row needs `down` set back to that outfit.
