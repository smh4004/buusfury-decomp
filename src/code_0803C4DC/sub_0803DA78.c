/* sub_0803DA78  (original: 0x0803DA78-0x0803DAAC in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 84% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();


void sub_0803DA78(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined1 *)0x0) ||
     (param_1 = (undefined1 *)sub_0803D5B8(0x24), param_1 != (undefined1 *)0x0)) {
    uVar1 = param_3[1];
    uVar3 = param_3[2];
    *(undefined4 *)(param_1 + 0x10) = *param_3;
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = param_3[3];
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    iVar2 = param_3[1];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(int *)(param_1 + 8) = iVar2 + 0xc;
  }
  return;
}

