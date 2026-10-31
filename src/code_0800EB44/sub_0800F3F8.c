/* sub_0800F3F8  (original: 0x0800F3F8-0x0800F40E in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


void sub_0800F3F8(int param_1)

{
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
               *(int *)(param_1 + 0x44),*(int *)(param_1 + 0x48));
  return;
}

