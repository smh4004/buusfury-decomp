# Buu's Fury Ultimate Edition

```sh
cp /path/to/clean/buusfury.gba baserom.gba   # USA, SHA-1 f1c4b075...
make extract && make harness
python3 ultimate/build.py && python3 ultimate/build.py --debug
python3 ultimate/test_build.py
```
Output goes to `ultimate/out/` (git-ignored). Share only `.bps` patches. New forms are defined in `ultimate/forms.json`.
The debug build starts with Vegito and guest Broly, and opens Switch Character then saves when the intro ends.
