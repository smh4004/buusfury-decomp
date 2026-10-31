/* Tiles_Animate2  (original: 0x08009B80-0x08009BD4 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 47% of instructions covered.
 */
#include "ghidra_types.h"


void Tiles_Animate2(short *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = 0;
  *param_1 = (short)(*(int *)(*(int *)(param_2 + 0x48) + 4) / 2);
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = 0x380;
  if (0 < *(int *)(param_2 + 0xc)) {
    piVar6 = (int *)(param_1 + 2);
    do {
      iVar2 = *piVar6;
      *piVar6 = iVar2 + 1;
      iVar5 = *(int *)(*(int *)(param_2 + 0x10) + iVar4 * 4);
      *(short *)(piVar6 + iVar2 * 2 + 1) = 0;
      iVar4 = iVar4 + 1;
      *(short *)((int)piVar6 + iVar2 * 8 + 6) = (short)iVar4;
      piVar6[iVar2 * 2 + 2] = iVar5;
      uVar1 = *(ushort *)(iVar5 + 2);
      if (uVar1 < uVar3) {
        uVar3 = uVar1;
      }
    } while (iVar4 < *(int *)(param_2 + 0xc));
  }
  param_1[1] = uVar3 - *param_1;
  return;
}

