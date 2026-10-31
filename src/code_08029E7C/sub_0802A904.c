/* sub_0802A904  (original: 0x0802A904-0x0802A950 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c0;
extern int volatile DAT_030019c4;
extern int volatile DAT_030019c8;


undefined4 sub_0802A904(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24) - DAT_030019c0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) - DAT_030019bc;
  *(int *)(param_1 + 0x1c) = iVar2;
  if ((((*(int *)(param_1 + 0x20) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x28))) &&
      (*(int *)(param_1 + 0x24) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x2c))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

