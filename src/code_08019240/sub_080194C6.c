/* sub_080194C6  (original: 0x080194C6-0x0801952C in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080194C6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 8) << 8;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0xc) << 8;
  }
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 0x28);
  *(int *)(iVar1 + 0x24) = *(int *)(param_1 + 0x24) >> 8;
  *(int *)(iVar1 + 0x28) = iVar2 >> 8;
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x28) + *(int *)(param_1 + 0x18);
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x24) + iVar2;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x18);
  return;
}

