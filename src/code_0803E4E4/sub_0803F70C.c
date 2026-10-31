/* sub_0803F70C  (original: 0x0803F70C-0x0803F89A in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08053250();


void sub_0803F70C(int param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
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
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
    if (0x1d9c < param_2) {
      bVar2 = false;
    }
  }
  if (bVar2) {
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
    iStack_28 = *param_3 + -1;
    iStack_20 = iStack_28 + uVar9 + 2;
    iStack_1c = iStack_24 + 0x11;
    sub_08053250(&iStack_38,&iStack_28,param_1 + 0x10);
    if ((iStack_38 < iStack_30) && (iStack_34 < iStack_2c)) {
      iStack_3c = iStack_30 - iStack_38;
      uStack_44 = (1 << (iStack_2c - iStack_34 & 0xffU)) - 1;
      uStack_40 = iStack_34 - param_3[1];
      iVar3 = 0;
      auStack_144[1] = 0;
      auStack_144[0] = 0;
      iVar5 = iVar3;
      if (0 < (int)uVar9) {
        do {
          uVar1 = puStack_18[iVar5];
          uVar4 = (uint)uVar1;
          auStack_c4[iVar5] = uVar4;
          auStack_144[iVar5] = auStack_144[iVar5] | uVar4;
          auStack_144[iVar5 + 2] = uVar4;
          iVar3 = iVar5 + 1;
          auStack_144[iVar5 + 1] = (uint)(uVar1 >> 1) | uVar4 << 1 | auStack_144[iVar5 + 1];
          iVar5 = iVar3;
        } while (iVar3 < (int)uVar9);
      }
      auStack_c4[iVar3] = 0;
      iVar5 = iStack_38 - *param_3;
      puStack_148 = auStack_144 + iVar5;
      puVar11 = auStack_c4 + iVar5;
      puVar10 = (undefined1 *)
                (*(int *)(param_1 + 0x28) * iStack_34 + *(int *)(param_1 + 0x24) + iStack_38);
      uVar4 = 0;
      if (-1 < iVar5) {
        uVar4 = *puVar11 >> (uStack_40 & 0xff) & uStack_44;
      }
      iVar5 = 0;
      if (0 < iStack_3c) {
        do {
          puStack_148 = puStack_148 + 1;
          uVar6 = *puStack_148 >> (uStack_40 & 0xff) & uStack_44;
          puVar8 = puVar10;
          if (uVar4 != 0 || uVar6 != 0) {
            do {
              if ((int)(uVar4 << 0x1f) < 0) {
                *puVar8 = *(undefined1 *)(param_1 + 3);
              }
              else if ((int)(uVar6 << 0x1f) < 0) {
                *puVar8 = *(undefined1 *)(param_1 + 2);
              }
              uVar4 = uVar4 >> 1;
              uVar6 = (int)uVar6 >> 1;
              puVar8 = puVar8 + *(int *)(param_1 + 0x28);
            } while (uVar4 != 0 || uVar6 != 0);
          }
          puVar11 = puVar11 + 1;
          iVar5 = iVar5 + 1;
          uVar4 = *puVar11 >> (uStack_40 & 0xff) & uStack_44;
          puVar10 = puVar10 + 1;
        } while (iVar5 < iStack_3c);
      }
    }
    *param_3 = *param_3 + uVar9 + 1;
  }
  return;
}

