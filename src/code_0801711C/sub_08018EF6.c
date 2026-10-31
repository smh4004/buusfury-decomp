/* sub_08018EF6  (original: 0x08018EF6-0x08018F0C in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08018EF6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) * 4 + param_1 + 0xc);
  piVar2 = (int *)*piVar1;
  iVar3 = *piVar2;
  __call_via_r2(piVar1,param_2,iVar3 + (int)piVar2,iVar3,param_4);
  return;
}

