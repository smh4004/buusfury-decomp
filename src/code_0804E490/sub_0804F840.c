/* sub_0804F840  (original: 0x0804F840-0x0804F858 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001560;


undefined1 * sub_0804F840(void)

{
  return &DAT_03001560 + (uint)DAT_03001068 * 0x68;
}

