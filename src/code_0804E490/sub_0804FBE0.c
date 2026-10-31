/* sub_0804FBE0  (original: 0x0804FBE0-0x0804FBF0 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0804FBE0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  __call_via_r1(*(int **)(param_1 + 0xc),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}

