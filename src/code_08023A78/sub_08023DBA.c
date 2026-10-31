/* sub_08023DBA  (original: 0x08023DBA-0x08023E28 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08023DBA(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34) + -8;
  *(int *)(param_1 + 0x34) = iVar2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar2;
  iVar2 = *(int *)(param_1 + 0xc) + 8;
  *(int *)(param_1 + 0xc) = iVar2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar2;
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x24);
  *(int *)(param_2 + 0x178) = *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x28) >> 8);
  *(int *)(param_2 + 0x17c) = iVar2 + (iVar1 >> 8);
  return;
}

