/* sub_0803BE04  (original: 0x0803BE04-0x0803BEB2 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FAF6();
extern int __16__rt_sdiv();
extern int __call_via_r2();
extern int sub_080214DA();
extern int volatile DAT_03001c34;


void sub_0803BE04(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  sVar1 = *(short *)((int)param_2 + 0x12);
  if (sVar1 == 0) {
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar2 + -1;
    if (iVar2 == 0) {
      iVar8 = *(int *)(DAT_03001c34 + 0x1a0) - param_2[0x68];
      iVar2 = *(int *)(DAT_03001c34 + 0x1a4) - param_2[0x69];
      iVar7 = iVar8 >> 8;
      iVar3 = iVar2 >> 8;
      uVar4 = sub_0803FAF6(iVar7 * iVar7 + iVar3 * iVar3);
      uVar5 = __16__rt_sdiv(uVar4,iVar8);
      uVar6 = __16__rt_sdiv(uVar4,iVar2);
      *(undefined2 *)((int)param_2 + 0x12) = 1;
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      sub_080214DA(*(undefined4 *)(param_1 + 4),(char)param_2[4],uVar5,uVar6,uVar4,iVar3,iVar7);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else {
    *(short *)((int)param_2 + 0x12) = sVar1 + 1;
    if (0x1f < (ushort)(sVar1 + 1U)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      *(undefined1 *)(param_2 + 2) = 0x24;
    }
  }
  return;
}

