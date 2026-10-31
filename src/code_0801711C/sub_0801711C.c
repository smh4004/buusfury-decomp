/* sub_0801711C  (original: 0x0801711C-0x0801712C in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0801711C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  __call_via_r1(*(int **)(param_1 + 8),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}

