/* sub_08039F4E  (original: 0x08039F4E-0x0803A052 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FAF6();
extern int __16__rt_sdiv();
extern int volatile DAT_03001c34;


int sub_08039F4E(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = DAT_03001c34;
  if (DAT_03001c34 != 0) {
    piVar1 = (int *)(DAT_03001c34 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(DAT_03001c34 + 0x1a8);
    iVar2 = (*piVar1 >> 8) - *(int *)(param_1 + 4);
    iVar6 = (*(int *)(iVar4 + 0x1a4) >> 8) - *(int *)(param_1 + 8);
    uVar3 = sub_0803FAF6(iVar2 * iVar2 + iVar6 * iVar6);
    iVar4 = *(int *)(param_1 + 0xc);
    iVar5 = __16__rt_sdiv(uVar3);
    iVar4 = __16__rt_sdiv(uVar3,iVar4 * iVar6);
    iVar7 = *(int *)(param_1 + 8);
    *(int *)(param_2 + 0x1a0) = (*(int *)(param_1 + 4) + iVar5) * 0x100;
    *(int *)(param_2 + 0x1a4) = (iVar7 + iVar4) * 0x100;
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = -iVar2;
    }
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = -iVar6;
    }
    if (iVar5 < iVar4) {
      if (iVar2 < 1) {
        if (iVar6 < 1) {
          *(undefined4 *)(param_2 + 0x1ac) = 0xd0;
        }
        else {
          *(undefined4 *)(param_2 + 0x1ac) = 0xb0;
        }
      }
      else if (iVar6 < 1) {
        *(undefined4 *)(param_2 + 0x1ac) = 0x30;
      }
      else {
        *(undefined4 *)(param_2 + 0x1ac) = 0x50;
      }
    }
    else if (iVar6 < 1) {
      if (iVar2 < 1) {
        *(undefined4 *)(param_2 + 0x1ac) = 0xf0;
      }
      else {
        *(undefined4 *)(param_2 + 0x1ac) = 0x10;
      }
    }
    else if (iVar2 < 1) {
      *(undefined4 *)(param_2 + 0x1ac) = 0x90;
    }
    else {
      *(undefined4 *)(param_2 + 0x1ac) = 0x70;
    }
    iVar4 = 0;
  }
  return iVar4;
}

