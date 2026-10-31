/* sub_0800DA3E  (original: 0x0800DA3E-0x0800DA92 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;
extern int volatile DAT_030019c4;
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c8;
extern int volatile DAT_030019c0;


undefined4 sub_0800DA3E(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c) - DAT_030019d0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x18) - DAT_030019cc;
  *(int *)(param_1 + 0x2c) = iVar2;
  if ((((*(int *)(param_1 + 0x18) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x20))) &&
      (*(int *)(param_1 + 0x1c) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x24))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

