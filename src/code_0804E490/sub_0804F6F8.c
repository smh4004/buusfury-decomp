/* sub_0804F6F8  (original: 0x0804F6F8-0x0804F708 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0804F6F8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + iVar1,iVar2,param_4);
  return;
}

