# Dragon Ball Z: Buu's Fury (USA) -- matching disassembly build
PREFIX  ?= arm-none-eabi-
AS      := $(PREFIX)as
LD      := $(PREFIX)ld
OBJCOPY := $(PREFIX)objcopy

ROM     := buusfury.gba
ELF     := $(ROM:.gba=.elf)
ASFLAGS := -mcpu=arm7tdmi -mthumb-interwork -I .

CODE    := $(shell cat config/code_files.txt)
ASM_SRC := asm/header.s $(CODE:%=asm/%.s) asm/iwram.s
DATA_SRC:= $(wildcard data/*.s)
OBJS    := $(ASM_SRC:%.s=build/%.o) $(DATA_SRC:%.s=build/%.o)

.PHONY: all compare clean
all: $(ROM)

compare: $(ROM)
	@sha1sum -c buusfury.sha1

build/%.o: %.s asm/macros.inc baserom.gba
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

build/code_objs.ld: config/code_files.txt
	@mkdir -p build
	sed 's|.*|build/asm/&.o(.text);|' $< > $@

$(ELF): $(OBJS) ld_script.ld build/code_objs.ld
	$(LD) -T ld_script.ld -Map build/buusfury.map -o $@ $(OBJS)

$(ROM): $(ELF)
	$(OBJCOPY) -O binary --gap-fill 0xFF --pad-to 0x08800000 $< $@

clean:
	rm -rf build $(ROM) $(ELF)
