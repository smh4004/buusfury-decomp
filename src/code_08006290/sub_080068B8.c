/* sub_080068B8  (original: 0x080068B8-0x080069E6 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 64% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08046E40();
extern int __16__rt_sdiv();
extern int __call_via_r2();


void sub_080068B8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iStack_20;
  
  piVar3 = (int *)**(int **)(param_1 + 0xc);
  iVar1 = __call_via_r2(*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                        *piVar3 + (int)piVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = **(int **)(param_1 + 0xc);
  uVar2 = __call_via_r2(*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                        *(int *)(iVar5 + 8) + iVar5);
  iVar1 = __16__rt_sdiv(uVar2,iVar4 * iVar1);
  iVar4 = *(int *)(param_2 + 0x28) * *(int *)(param_1 + 0x14) + *(int *)(param_2 + 0x24) +
          *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    sub_08046E40(iVar4 + 1);
    puVar6 = (undefined1 *)(*(int *)(param_2 + 0x28) + iVar4);
    iVar1 = 0;
    do {
      *puVar6 = 0x73;
      sub_08046E40(puVar6 + 1,0x70,*(undefined4 *)(param_1 + 0x18));
      puVar6[*(int *)(param_1 + 0x18) + 1] = 1;
      iVar1 = iVar1 + 1;
      puVar6 = puVar6 + *(int *)(param_2 + 0x28);
    } while (iVar1 < 3);
    sub_08046E40(puVar6 + 1,0x73,*(undefined4 *)(param_1 + 0x18));
  }
  else {
    iVar5 = *(int *)(param_1 + 0x18) - iVar1;
    if (iVar5 == 0) {
      sub_08046E40(iVar4 + 1,10);
      puVar6 = (undefined1 *)(*(int *)(param_2 + 0x28) + iVar4);
      iVar1 = 0;
      do {
        *puVar6 = 10;
        sub_08046E40(puVar6 + 1,3,*(undefined4 *)(param_1 + 0x18));
        puVar6[*(int *)(param_1 + 0x18) + 1] = 0x68;
        iVar1 = iVar1 + 1;
        puVar6 = puVar6 + *(int *)(param_2 + 0x28);
      } while (iVar1 < 3);
      sub_08046E40(puVar6 + 1,0x68,*(undefined4 *)(param_1 + 0x18));
    }
    else {
      sub_08046E40(iVar4 + 1,10,iVar1);
      sub_08046E40(iVar4 + iVar1 + 1,1,iVar5);
      puVar6 = (undefined1 *)(*(int *)(param_2 + 0x28) + iVar4);
      iStack_20 = 0;
      do {
        *puVar6 = 10;
        sub_08046E40(puVar6 + 1,3,iVar1);
        puVar6[iVar1 + 1] = 0x68;
        sub_08046E40(puVar6 + iVar1 + 2,0x70,iVar5 + -1);
        puVar6[*(int *)(param_1 + 0x18) + 1] = 1;
        puVar6 = puVar6 + *(int *)(param_2 + 0x28);
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 3);
      sub_08046E40(puVar6 + 1,0x68,iVar1);
      sub_08046E40(puVar6 + iVar1 + 1,0x73,iVar5);
    }
  }
  return;
}

