/* sub_0800AAD8  (original: 0x0800AAD8-0x0800AB0C in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800AAD8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 1;
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  piVar2 = (int *)piVar1[(iVar3 + -1) * 2 + 1];
  iVar4 = *piVar2;
  __call_via_r2(piVar2,*param_1,*(int *)(iVar4 + 8) + iVar4,param_4,param_4);
  iVar4 = param_1[0xc];
  iVar3 = piVar1[(iVar3 + -1) * 2 + 1];
  param_1[0xc] = iVar4 + 1;
  param_1[iVar4 + 0xd] = iVar3;
  return;
}

