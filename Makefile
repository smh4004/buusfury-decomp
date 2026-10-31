# Dragon Ball Z: Buu's Fury (USA) -- matching disassembly
#   make               build buusfury.gba from asm/ + data/ (+ baserom.gba)
#   make compare       check the SHA-1 against the original ROM
#   make SHIFT=0x100   relocation test build (buusfury_shift.gba): padding after crt0 moves everything
#   make extract       baserom.gba -> assets/ (editable text, palette, tables, map chunks)
#   make modern        build buusfury_modern.gba from assets/ (edited assets recompressed; non-matching)
#   make shift-test    build + headless comparison of SHIFT build vs matching build
PREFIX  ?= arm-none-eabi-
AS      := $(PREFIX)as
LD      := $(PREFIX)ld
OBJCOPY := $(PREFIX)objcopy
PYTHON  ?= python3

SHIFT   ?= 0
MODERN  ?= 0
DATADIR := data
ifneq ($(MODERN),0)
ROM     := buusfury_modern.gba
BUILD   := build_modern
DATADIR := build_modern/src
else ifneq ($(SHIFT),0)
ROM     := buusfury_shift.gba
BUILD   := build_shift
else
ROM     := buusfury.gba
BUILD   := build
endif
ELF     := $(ROM:.gba=.elf)
ASFLAGS := -mcpu=arm7tdmi -mthumb-interwork -I . --defsym SHIFT=$(SHIFT)

CODE    := $(shell cat config/code_files.txt)
DATA    := $(shell cat config/data_files.txt)
ifneq ($(MODERN),0)
DATA    += rodata_appendix
endif
OBJS    := $(BUILD)/asm/header.o $(CODE:%=$(BUILD)/asm/%.o) $(BUILD)/asm/iwram.o $(DATA:%=$(BUILD)/data/%.o)
ifneq ($(SHIFT),0)
OBJS    += $(BUILD)/asm/shift.o
endif

.PHONY: all compare clean harness shift-test extract modern modern-rom
all: $(ROM)

compare: $(ROM)
	@sha1sum -c buusfury.sha1

$(BUILD)/asm/%.o: asm/%.s asm/macros.inc baserom.gba
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD)/data/%.o: $(DATADIR)/%.s baserom.gba
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
ifneq ($(MODERN),0)
	echo '$(BUILD)/data/rodata_appendix.o(.rodata);' >> $@
endif

$(BUILD)/ld_script.ld: ld_script.ld
	@mkdir -p $(BUILD)
	sed 's|build/|$(BUILD)/|g' $< > $@

$(ELF): $(OBJS) $(BUILD)/ld_script.ld $(BUILD)/code_objs.ld $(BUILD)/data_objs.ld
	$(LD) -T $(BUILD)/ld_script.ld -Map $(BUILD)/buusfury.map -o $@ $(OBJS)

$(ROM): $(ELF)
	$(OBJCOPY) -O binary --gap-fill 0xFF --pad-to 0x08800000 $< $@

# ---- assets / modern build
assets/manifest.json: baserom.gba
	$(PYTHON) tools/assets/assets.py extract

extract: assets/manifest.json

modern: assets/manifest.json
	$(PYTHON) tools/assets/assets.py build
	$(PYTHON) tools/assets/apply.py build_modern/overrides/overrides.json data build_modern/src
	$(MAKE) MODERN=1 modern-rom

modern-rom: $(ROM)

# ---- tools
harness: tools/harness/harness
tools/harness/harness: tools/harness/harness.c
	$(CC) -O2 -o $@ $< -lmgba -lpng

shift-test:
	tools/harness/shift_test.sh $(if $(filter-out 0,$(SHIFT)),$(SHIFT),0x100)

clean:
	rm -rf build build_shift build_modern *.gba.tmp buusfury.elf buusfury_shift.* buusfury_modern.* buusfury.gba tools/harness/harness
