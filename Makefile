# Dragon Ball Z: Buu's Fury (USA) -- matching disassembly build
#   make            build buusfury.gba
#   make compare    check SHA-1 against the original
#   make SHIFT=0x100  insert padding after crt0 (relocation test; non-matching by design)
PREFIX  ?= arm-none-eabi-
AS      := $(PREFIX)as
LD      := $(PREFIX)ld
OBJCOPY := $(PREFIX)objcopy

SHIFT   ?= 0
ifeq ($(SHIFT),0)
ROM     := buusfury.gba
BUILD   := build
else
ROM     := buusfury_shift.gba
BUILD   := build_shift
endif
ELF     := $(ROM:.gba=.elf)
ASFLAGS := -mcpu=arm7tdmi -mthumb-interwork -I . --defsym SHIFT=$(SHIFT)

CODE    := $(shell cat config/code_files.txt)
DATA    := $(shell cat config/data_files.txt)
OBJS    := $(BUILD)/asm/header.o $(CODE:%=$(BUILD)/asm/%.o) $(BUILD)/asm/iwram.o $(DATA:%=$(BUILD)/data/%.o)
ifneq ($(SHIFT),0)
OBJS    += $(BUILD)/asm/shift.o
endif

.PHONY: all compare clean harness shift-test
all: $(ROM)

compare: $(ROM)
	@sha1sum -c buusfury.sha1

$(BUILD)/%.o: %.s asm/macros.inc baserom.gba
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
	$(LD) -T $(BUILD)/ld_script.ld -Map $(BUILD)/buusfury.map -o $@ $(OBJS)

$(ROM): $(ELF)
	$(OBJCOPY) -O binary --gap-fill 0xFF --pad-to 0x08800000 $< $@

clean:
	rm -rf build build_shift buusfury.gba buusfury.elf buusfury_shift.gba buusfury_shift.elf tools/harness/harness

harness: tools/harness/harness
tools/harness/harness: tools/harness/harness.c
	$(CC) -O2 -o $@ $< -lmgba -lpng

shift-test:
	tools/harness/shift_test.sh $(if $(filter-out 0,$(SHIFT)),$(SHIFT),0x100)
