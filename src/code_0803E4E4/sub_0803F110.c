/* sub_0803F110  (original: 0x0803F110-0x0803F15A in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();


void sub_0803F110(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  param_1[2] = 1;
  *param_1 = 1;
  param_1[1] = 0;
  *(int *)(param_1 + 0xc) = param_2;
  param_1[3] = *(undefined1 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  iVar3 = 0;
  do {
    param_1[iVar3 * 0x60 + 0x62] = 0;
    param_1[iVar3 * 0x60 + 0x77] = 0;
    param_1[iVar3 * 0x60 + 0x70] = 0;
    param_1[iVar3 * 0x60 + 0x28] = 0;
    iVar4 = iVar3 + 1;
    *(undefined1 **)(param_1 + iVar3 * 0x60 + 0x44) = param_1 + iVar3 * 0x60 + 0x18;
    iVar3 = iVar4;
  } while (iVar4 < 0xf);
  uVar1 = *(undefined1 *)(param_2 + 0x10);
  param_1[4] = uVar1;
  uVar2 = __16__rt_sdiv(uVar1,40000);
  *(undefined2 *)(param_1 + 6) = uVar2;
  param_1[5] = 1;
  return;
}

