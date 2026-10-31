/* sub_08021094  (original: 0x08021094-0x080210B6 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_08021094(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 8);
  __call_via_r1(*(int **)(param_1 + 8),iVar2 + iVar1,iVar2,param_4,param_4);
  *(int **)(param_1 + 8) = param_2;
  __call_via_r1(param_2,*(int *)(*param_2 + 4) + *param_2);
  return;
}

