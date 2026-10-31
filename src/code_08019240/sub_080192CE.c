/* sub_080192CE  (original: 0x080192CE-0x08019348 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803FB1E();
extern int sub_08046BFC();
extern int __16__rt_sdiv();


void sub_080192CE(int *param_1,int *param_2,int *param_3,undefined4 *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_3 = 1;
  *param_4 = 0;
  param_4[1] = 0;
  iVar4 = *param_2 - *param_1;
  iVar1 = param_2[1] - param_1[1];
  if (iVar4 != 0 || iVar1 != 0) {
    iVar2 = iVar4 * iVar4 + iVar1 * iVar1;
    sub_08046BFC(iVar2,iVar2 >> 0x1f,0x10);
    iVar2 = sub_0803FB1E();
    iVar2 = __16__rt_sdiv(param_5,iVar2 * 100);
    iVar2 = (iVar2 >> 8) + 1;
    *param_3 = iVar2;
    uVar3 = __16__rt_sdiv(iVar2,iVar4 * 0x100);
    *param_4 = uVar3;
    uVar3 = __16__rt_sdiv(*param_3,iVar1 * 0x100);
    param_4[1] = uVar3;
  }
  return;
}

