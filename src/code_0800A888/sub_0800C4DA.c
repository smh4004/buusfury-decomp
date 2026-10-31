/* sub_0800C4DA  (original: 0x0800C4DA-0x0800C532 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;


undefined4 sub_0800C4DA(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x20) >> 8;
  *(int *)(param_1 + 4) = iVar2;
  iVar3 = (*(int *)(param_1 + 0x1c) >> 8) - DAT_030019cc;
  *(int *)(param_1 + 0x30) = iVar2 - DAT_030019d0;
  *(int *)(param_1 + 0x2c) = iVar3;
  if ((((*(int *)(param_1 + 0x2c) < -7) || (0xef < *(int *)(param_1 + 0x2c))) ||
      (*(int *)(param_1 + 0x30) < -7)) || (0x9f < *(int *)(param_1 + 0x30))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

