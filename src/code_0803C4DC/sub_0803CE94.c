/* sub_0803CE94  (original: 0x0803CE94-0x0803CF46 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0803CE94(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 500) + 0x1a4);
  *(int *)(param_2 + 0x1a0) = *(int *)(*(int *)(param_2 + 500) + 0x1a0) + 0x1000;
  *(int *)(param_2 + 0x1a4) = iVar1 + -0x2800;
  iVar1 = *(int *)(param_2 + 0x1f8);
  iVar2 = *(int *)(*(int *)(param_2 + 500) + 0x1a4);
  *(int *)(iVar1 + 0x1a0) = *(int *)(*(int *)(param_2 + 500) + 0x1a0) + -0xc00;
  *(int *)(iVar1 + 0x1a4) = iVar2 + -0x1500;
  iVar1 = *(int *)(*(int *)(param_2 + 0x1f8) + 0x1f8);
  iVar2 = *(int *)(*(int *)(param_2 + 500) + 0x1a4);
  *(int *)(iVar1 + 0x1a0) = *(int *)(*(int *)(param_2 + 500) + 0x1a0) + 0x2c00;
  *(int *)(iVar1 + 0x1a4) = iVar2 + -0x1500;
  *(char *)(param_2 + 8) = *(char *)(*(int *)(param_2 + 500) + 8) + -1;
  return;
}

