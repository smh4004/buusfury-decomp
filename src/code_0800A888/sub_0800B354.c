/* sub_0800B354  (original: 0x0800B354-0x0800B374 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0800B354(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x68);
  iVar2 = *(int *)(param_2 + 0x34) * 2 + param_2;
  bVar1 = *(byte *)(iVar2 + 0x40);
  param_1[1] = *(int *)(param_2 + 0x60) + (uint)*(byte *)(iVar2 + 0x41) + -0x20;
  *param_1 = iVar3 + (uint)bVar1;
  return;
}

