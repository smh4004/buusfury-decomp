/* sub_08010C9C  (original: 0x08010C9C-0x08010CB4 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08010C9C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x224);
  iVar2 = *(int *)(iVar1 + 4);
  __call_via_r2(*(int **)(param_1 + 0x224),param_1,iVar2 + iVar1,iVar2,param_4);
  return;
}

