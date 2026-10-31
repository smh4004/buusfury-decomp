/* sub_0803F5A4  (original: 0x0803F5A4-0x0803F600 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_0803F5A4(int param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  uint *puVar12;
  unsigned int __frame[82];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define puStack_148 (*(uint * *)((char *)__frame + 0x0))
#define auStack_144 ((uint *)((char *)__frame + 0x4))
#define auStack_c4 ((uint *)((char *)__frame + 0x84))
#define uStack_44 (*(uint *)((char *)__frame + 0x104))
#define uStack_40 (*(uint *)((char *)__frame + 0x108))
#define iStack_3c (*(int *)((char *)__frame + 0x10c))
#define iStack_38 (*(int *)((char *)__frame + 0x110))
#define iStack_34 (*(int *)((char *)__frame + 0x114))
#define iStack_30 (*(int *)((char *)__frame + 0x118))
#define iStack_2c (*(int *)((char *)__frame + 0x11c))
#define iStack_28 (*(int *)((char *)__frame + 0x120))
#define iStack_24 (*(int *)((char *)__frame + 0x124))
#define iStack_20 (*(int *)((char *)__frame + 0x128))
#define iStack_1c (*(int *)((char *)__frame + 0x12c))
#define puStack_18 (*(ushort * *)((char *)__frame + 0x130))
  piVar7 = *(int **)(param_1 + 0xc);
  if (param_2 < 0xff) {
    if (*(short *)(*piVar7 + param_2 * 2) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
    if (0x1d9c < param_2) {
      bVar3 = false;
    }
  }
  if (bVar3) {
    if (param_2 < 0xff) {
      puStack_18 = (ushort *)((uint)*(ushort *)(*piVar7 + param_2 * 2) * 2 + *piVar7);
      uVar9 = (uint)*puStack_18;
      puStack_18 = puStack_18 + 1;
    }
    else {
      uVar9 = piVar7[1];
      puStack_18 = (ushort *)(piVar7[2] + (param_2 - 0x100) * uVar9 * 2);
    }
    iStack_24 = param_3[1];
    iStack_28 = *param_3;
    iStack_20 = iStack_28 + uVar9 + 1;
    iStack_1c = iStack_24 + 0x11;
    sub_08053250(&iStack_38,&iStack_28,param_1 + 0x10);
    if ((iStack_38 < iStack_30) && (iStack_34 < iStack_2c)) {
      iStack_3c = iStack_30 - iStack_38;
      uStack_44 = (1 << (iStack_2c - iStack_34 & 0xffU)) - 1;
      iVar4 = 0;
      uStack_40 = iStack_34 - param_3[1];
      iVar11 = iVar4;
      if (0 < (int)uVar9) {
        do {
          uVar1 = puStack_18[iVar11];
          auStack_c4[iVar11] = (uint)uVar1;
          iVar4 = iVar11 + 1;
          auStack_144[iVar11 + 1] = (uint)uVar1 << 1;
          iVar11 = iVar4;
        } while (iVar4 < (int)uVar9);
      }
      auStack_c4[iVar4] = 0;
      puStack_148 = auStack_144 + (iStack_38 - *param_3);
      puVar10 = (undefined1 *)
                (*(int *)(param_1 + 0x28) * iStack_34 + *(int *)(param_1 + 0x24) + iStack_38);
      puVar12 = auStack_c4 + (iStack_38 - *param_3);
      iVar11 = 0;
      if (0 < iStack_3c) {
        do {
          uVar5 = *puVar12;
          puVar12 = puVar12 + 1;
          uVar5 = uVar5 >> (uStack_40 & 0xff) & uStack_44;
          uVar6 = *puStack_148;
          puStack_148 = puStack_148 + 1;
          uVar6 = uVar6 >> (uStack_40 & 0xff) & uStack_44;
          puVar8 = puVar10;
          if (uVar5 != 0 || uVar6 != 0) {
            do {
              if ((int)(uVar5 << 0x1f) < 0) {
                *puVar8 = *(undefined1 *)(param_1 + 3);
              }
              else if ((int)(uVar6 << 0x1f) < 0) {
                *puVar8 = *(undefined1 *)(param_1 + 2);
              }
              puVar8 = puVar8 + *(int *)(param_1 + 0x28);
              uVar2 = uVar5 | uVar6;
              uVar5 = uVar5 >> 1;
              uVar6 = uVar6 >> 1;
            } while (uVar2 >> 1 != 0);
          }
          iVar11 = iVar11 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar11 < iStack_3c);
      }
    }
    *param_3 = *param_3 + uVar9 + 1;
  }
  return;
}

