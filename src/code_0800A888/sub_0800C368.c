/* sub_0800C368  (original: 0x0800C368-0x0800C378 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0800C368(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x10);
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1(*(int **)(param_1 + 0x10),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}

