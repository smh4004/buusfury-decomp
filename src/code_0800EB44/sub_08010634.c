/* sub_08010634  (original: 0x08010634-0x0801064C in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_08010634(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x22c) + 4);
  iVar2 = *piVar1;
  iVar3 = *(int *)(iVar2 + 4);
  __call_via_r1(piVar1,iVar3 + iVar2,iVar3,param_4,param_4);
  return;
}

