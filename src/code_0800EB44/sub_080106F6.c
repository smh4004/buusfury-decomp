/* sub_080106F6  (original: 0x080106F6-0x0801070E in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_080106F6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x22c) + 4);
  iVar2 = *piVar1;
  iVar3 = *(int *)(iVar2 + 8);
  __call_via_r1(piVar1,iVar3 + iVar2,iVar3,param_4,param_4);
  return;
}

