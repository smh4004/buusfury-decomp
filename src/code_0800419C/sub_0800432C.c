/* sub_0800432C  (original: 0x0800432C-0x0800433E in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_03000f94;


void sub_0800432C(int param_1)

{
  *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) - DAT_03000f94;
  return;
}

