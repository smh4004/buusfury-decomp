/* sub_0800AC64  (original: 0x0800AC64-0x0800ACB6 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c4;
extern int volatile DAT_030019c0;
extern int volatile DAT_030019c8;


undefined4 sub_0800AC64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20) >> 3;
  iVar1 = *(int *)(param_1 + 0x24) >> 3;
  if ((((DAT_030019bc < iVar3 + 0x20) && (iVar3 < DAT_030019c4)) && (DAT_030019c0 < iVar1 + 8)) &&
     (iVar1 < DAT_030019c8)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

