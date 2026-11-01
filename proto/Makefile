# Dragon Ball Z: Buu's Fury, prototype D (DBZ3_cart27) -- matching disassembly (see README.md)
#   make               build bfproto.gba from asm/ + data/ (+ baserom.gba = your prototype dump)
#   make compare       check the SHA-1 against the original prototype ROM
#   make SHIFT=0x100   relocation test build (bfproto_shift.gba): padding after crt0 moves everything
#   make shift-test    build + headless comparison of the SHIFT build vs the matching build
#   make playable      bfproto_playable.gba: the matching ROM with its entry branch fixed so emulators boot it
#   make extras        build/extras/: what the prototype tells us about the final game (needs ../baserom.gba)
PREFIX  ?= arm-none-eabi-
AS      := $(PREFIX)as
LD      := $(PREFIX)ld
OBJCOPY := $(PREFIX)objcopy
PYTHON  ?= python3

SHIFT   ?= 0
ifneq ($(SHIFT),0)
ROM     := bfproto_shift.gba
BUILD   := build_shift
else
ROM     := bfproto.gba
BUILD   := build
endif
ELF     := $(ROM:.gba=.elf)
ASFLAGS := -mcpu=arm7tdmi -mthumb-interwork -I . --defsym SHIFT=$(SHIFT)

CODE    := $(shell cat config/code_files.txt)
DATA    := $(shell cat config/data_files.txt)
OBJS    := $(BUILD)/asm/header.o $(CODE:%=$(BUILD)/asm/%.o) $(BUILD)/asm/iwram.o $(DATA:%=$(BUILD)/data/%.o)
ifneq ($(SHIFT),0)
OBJS    += $(BUILD)/asm/shift.o
endif

.PHONY: all compare clean harness shift-test playable extras
all: $(ROM)

compare: $(ROM)
	@sha1sum -c bfproto.sha1

$(BUILD)/asm/%.o: asm/%.s asm/macros.inc baserom.gba
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD)/data/%.o: data/%.s baserom.gba
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD)/code_objs.ld: config/code_files.txt
	@mkdir -p $(BUILD)
	sed 's|.*|$(BUILD)/asm/&.o(.text);|' $< > $@
ifneq ($(SHIFT),0)
	sed -i '1a $(BUILD)/asm/shift.o(.text);' $@
endif

$(BUILD)/data_objs.ld: config/data_files.txt
	@mkdir -p $(BUILD)
	sed 's|.*|$(BUILD)/data/&.o(.rodata);|' $< > $@

$(BUILD)/ld_script.ld: ld_script.ld
	@mkdir -p $(BUILD)
	sed 's|build/|$(BUILD)/|g' $< > $@

$(ELF): $(OBJS) $(BUILD)/ld_script.ld $(BUILD)/code_objs.ld $(BUILD)/data_objs.ld
	$(LD) -T $(BUILD)/ld_script.ld -Map $(BUILD)/bfproto.map -o $@ $(OBJS)

$(ROM): $(ELF)
	$(OBJCOPY) -O binary --gap-fill 0xFF --pad-to 0x08800000 $< $@

playable: bfproto.gba
	$(PYTHON) tools/harness/playable.py bfproto.gba bfproto_playable.gba

extras:
	$(PYTHON) tools/proto/protoinfo.py

harness: tools/harness/harness
tools/harness/harness: tools/harness/harness.c
	$(CC) -O2 -o $@ $< -lmgba -lpng -lz

shift-test:
	tools/harness/shift_test.sh $(if $(filter-out 0,$(SHIFT)),$(SHIFT),0x100)

clean:
	rm -rf build build_shift bfproto.elf bfproto_shift.* bfproto_playable.gba bfproto.gba tools/harness/harness
