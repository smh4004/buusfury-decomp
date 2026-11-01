# Prototype D vs the final game

Everything here can be regenerated with `make extras` (writes `build/extras/`, from your two ROMs). Addresses are the
prototype's unless marked "final".

## 1. Function map (`function_map.txt`)
2,685 of the prototype's 4,120 functions are paired with a final-game function:
* **947 exact**: identical instructions, apart from call offsets and literal-pool offsets (the code moved). These are
  unique matches, plus the functions those matches call in the same order.
* **~1,740 similar**: paired between exact anchors in the same order, by opcode-sequence similarity (>= 70%). These
  are good leads, not proof.

Most unmatched functions are ones whose `assert()` calls were compiled out of the final game, so their code is
shorter. A few are prototype-only (section 4). The final game has about 650 more functions.

Names carried over this way are in `config/symbols.txt`, with the final address and the similarity.

## 2. Source files (`source_files.txt`)
The prototype was built with assertions on. 53 `assert()` source paths survive, such as
`T:\Source\GameStates\State_DojoGame.cpp` and `T:\WinGBACore\Comms\GBAComms_WirelessChild.cpp`, along with many assertion
texts (`Character->HasAnimationSheet( SheetIndex_Melee1 )`, `BehaviourStack.GetCount()`, ...). Each function that
refers to a path is listed with its final counterpart, so those final functions get a source file. 47 paths are
referenced from code, by 216 function/path pairs; 82 of those functions have a final counterpart.

The paths show the engine's structure:
* `Source\ByteCodeInterpreter\` (the script VM: `ByteCodeBindings` = natives, `ByteCodeInstructions` = opcodes)
* `Source\GameStates\State_*` (one class per screen: `Menu`, `JournalMenu`, `ShopBuyMenu`, `ShopSellMenu`,
  `Scouter_Minimap`, `DojoGame`, `TradingPost_Confirm`, `TradingPost_WaitPreview`, `ScriptMapFader`)
* `Source\AIFiles\AIBehaviourComponent_*` (enemy AI: `Approach`, `Melee`, `BlisterSpawn`, `WormBreak`,
  `MechanoidTransform`, `KidBuuReunite`)
* `Source\SpriteSystem\...`, `MapManager`, `AreaManager`, `TileManager`, `TrapManager`, `SaveGameManager`
* `WinGBACore\` (Webfoot's shared GBA library: `GBARegisters.h`, `StaticTable.h`, `FrameBuffer`, `GBARam`,
  `GBABackupRam`, `SoundChannel`, `IInputSource`, and `Comms\GBAComms_Wireless{,Parent,Child}` for the Wireless Adapter)

## 3. Story flags (`flag_names.txt`)
Story progress is a bit array in GameData (+0x55). The prototype contains a table of names for its 309 flags
(`gDebugFlagNames`, 0x0873503C), for the debug flag editor (section 4). Examples are `ArrivedAtSnakeWay`,
`CheckedInWithYemma`, `FoughtBR1`, `GotSaiyamanWatch`, `BeatBroly`, `FoundArch1`-`4`, `GotHM_*` (Hercule Museum items),
`GotZM_*` (Z-Fighter museum) and `RaceTopThreeTimeBit0`-`13`.

Scripts use four natives on these flags. The ids are the same in both builds and are now named in the final
project's `config/script_natives.txt`:

| native | name | does |
|---|---|---|
| 0x1B | `flag(n)` | 1 if flag n is set |
| 0x1C | `not_flag(n)` | 1 if flag n is clear |
| 0x1D | `set_flag(n)` | set flag n |
| 0x1E | `clear_flag(n)` | clear flag n |

**The final game renumbered the flags.** New flags were inserted, so a prototype flag's number grows in the final game
(1 -> 2 at the start, +38 by flag 241). The final game goes up to at least 407. `protoinfo.py` finds the shift by
pairing each final script step that uses flags with the most similar prototype step (long steps, or steps with an
identical shape). Then it keeps the best-supported pairs that rise together with a shift that never shrinks. Today
this pins 8 flags exactly, such as `OWTourneyComplete` (final 13), `FindBabidiShip` (final 54), `DefeatDabura`
(final 55), `FindFriends` (final 138) and `InteractiveFusionDance` (final 279). Between two pinned flags with the same
shift, the flags in between are marked `~` (very likely). The rest are `?`. The prototype names are still a strong
guide to what each region of the final flag space is for.

## 4. Debug features removed from the final game
`Field_HandleButtons` (0x08006BB8, the gameplay button handler) checks two button sequences with
`Input_MatchSequence` (0x08038B98). Both sequences are stored at 0x080A24D8 and are absent from the final ROM:

| Sequence | Effect |
|---|---|
| START START L R START B | opens the **debug flag editor** (`DebugFlagEditor_New`, 0x0802E0E2). It lists the flags 10 per page, sorted by name, as `N: Name` (or `<unnamed>`) with `Set`/`Clear`. |
| L L L L L L A B | toggles a word at 0x03001B44 and plays a sound; what reads it is not yet known |

The handler only checks them while the word at +0x90 of the object at 0x03001944 is non-zero. That object holds
camera/map coordinates. In normal play on the test routes the word stays 0, so we haven't found how the developers
reached this mode. Forcing the word (harness `poke 030019D4 1`) makes the L×6 A B toggle work, but it also hides the
player sprite, so it isn't a clean way in.

## 5. Text differences (`strings_proto_only.txt`, `strings_final_only.txt`)
These compare text stored uncompressed: ASCII and UTF-16 UI strings, item descriptions, names. If `make extract` has
been run in the main project, the final game's compressed dialogue counts as well. Things that stand out:
* **Item balance changed.** The same item descriptions have different numbers. For example, the hamburger restores
  50 HP in the prototype and 120 in the final game. Typos were fixed too ("dimond", "elemntary").
* **Prototype-only place names**, such as `Hizoku Plains`, `Seisei Desert`, `Tokkun Cliffs`, `Saikutsu Village`,
  `Ryoushi Village`, `Holy Land of Korrin`, `Central City`, `North City`, `South City`. Neither the final UI strings
  nor its dialogue contain these; some areas were renamed (`Korrin's Tower` -> `Korin's Tower`).
* Prototype-only UI: `Waiting for friend...`, `Link Cable`, `Press A To Punch`, and debug
  labels (`CurrentMap`, `CurrentSheet`, `SaveState`, `Scripting`, `Destructible Objects:`).
* The final game adds the staff credits and many enemy and title names (`Airship Warlord`, `Ascendant Super Saiyan`, ...).

## 6. Other numbers
* Script natives: 248 table entries in both. The four flag natives keep their ids, but a later flag check moved from
  0xB6 to 0xBA, so natives were inserted between them.
* Global script table (`gGlobalScripts`): 449 event lists in the prototype, 522 in the final game.
* The status screen in the prototype shows HP, EP, XP, NXT LVL, ZENIE, TIME and STR/POW/END/SPD.

## How the disassembly was made
The prototype went through the same pipeline as the final game (`../docs/`). It was analysed with
`config/game.json` (layout found from crt0: RW image source, BSS, ctor vector and vtable range). 3 instructions
need raw encoding. It matched after four general fixes to the shared disassembler (listed in `README.md`). The shift
test passed 41/41 with no game-specific pointer rules: the prototype's data follows the same patterns as the final
game's.
