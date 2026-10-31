/* sub_080210B6  (original: 0x080210B6-0x080210D6 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined4 volatile DAT_03001964;


void sub_080210B6(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  __call_via_r1(*(int **)(param_1 + 8),*(int *)(iVar1 + 8) + iVar1);
  *(int **)(param_1 + 8) = &DAT_03001964;
  __call_via_r1(&DAT_03001964,*(int *)(DAT_03001964 + 4) + DAT_03001964);
  return;
}

