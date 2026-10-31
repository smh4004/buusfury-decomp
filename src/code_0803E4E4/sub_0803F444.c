/* sub_0803F444  (original: 0x0803F444-0x0803F540 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08053250();


void sub_0803F444(int param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  int iVar10;
  unsigned int __frame[13];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_34 (*(int *)((char *)__frame + 0x0))
#define iStack_30 (*(int *)((char *)__frame + 0x4))
#define iStack_2c (*(int *)((char *)__frame + 0x8))
#define iStack_28 (*(int *)((char *)__frame + 0xc))
#define iStack_24 (*(int *)((char *)__frame + 0x10))
#define iStack_20 (*(int *)((char *)__frame + 0x14))
#define iStack_1c (*(int *)((char *)__frame + 0x18))
#define iStack_18 (*(int *)((char *)__frame + 0x1c))
  piVar4 = *(int **)(param_1 + 0xc);
  if (param_2 < 0xff) {
    if (*(short *)(*piVar4 + param_2 * 2) == 0) {
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
      puVar8 = (ushort *)((uint)*(ushort *)(*piVar4 + param_2 * 2) * 2 + *piVar4);
      uVar7 = (uint)*puVar8;
      puVar8 = puVar8 + 1;
    }
    else {
      uVar7 = piVar4[1];
      puVar8 = (ushort *)(piVar4[2] + (param_2 - 0x100) * uVar7 * 2);
    }
    iStack_20 = param_3[1];
    iStack_24 = *param_3;
    iStack_1c = iStack_24 + uVar7;
    iStack_18 = iStack_20 + 0x10;
    sub_08053250(&iStack_34,&iStack_24,param_1 + 0x10);
    if ((iStack_34 < iStack_2c) && (iStack_30 < iStack_28)) {
      iVar6 = param_3[1];
      puVar8 = puVar8 + (iStack_34 - *param_3);
      puVar9 = (undefined1 *)
               (*(int *)(param_1 + 0x28) * iStack_30 + *(int *)(param_1 + 0x24) + iStack_34);
      iVar10 = 0;
      if (0 < iStack_2c - iStack_34) {
        do {
          uVar1 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar5 = puVar9;
          for (uVar3 = (uint)(uVar1 >> (iStack_30 - iVar6 & 0xffU)) &
                       (1 << (iStack_28 - iStack_30 & 0xffU)) - 1U; uVar3 != 0;
              uVar3 = (int)uVar3 >> 1) {
            if ((int)(uVar3 << 0x1f) < 0) {
              *puVar5 = *(undefined1 *)(param_1 + 3);
            }
            puVar5 = puVar5 + *(int *)(param_1 + 0x28);
          }
          iVar10 = iVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar10 < iStack_2c - iStack_34);
      }
    }
    *param_3 = *param_3 + uVar7 + 1;
  }
  return;
}

