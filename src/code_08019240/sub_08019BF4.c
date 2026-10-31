/* sub_08019BF4  (original: 0x08019BF4-0x08019C44 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030019c4;
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c8;
extern int volatile DAT_030019c0;


undefined4 sub_08019BF4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x28) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x30))) &&
      (*(int *)(param_1 + 0x2c) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x34))) {
    iVar2 = *(int *)(param_1 + 0x28) - DAT_030019bc;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x2c) - DAT_030019c0;
    *(int *)(param_1 + 0x38) = iVar2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

