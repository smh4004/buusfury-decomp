/* sub_0802FC5C  (original: 0x0802FC5C-0x0802FC88 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800A1D4();
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int __call_via_r2();
extern int sub_0802F9A0();
extern int __call_via_r1();
extern int * volatile DAT_03001c34;
extern undefined4 volatile DAT_03003118;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_0831938C;


undefined4 sub_0802FC5C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  byte *pbVar9;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_1c ((undefined1 *)((char *)__frame + 0x0))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x4))
  piVar6 = DAT_03001c34;
  cVar2 = *(char *)(param_1 + 0x14);
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 8) == 0) {
      iVar7 = sub_0802F9A0(param_1,param_2);
      *(int *)(param_1 + 8) = iVar7;
      if (*(int *)(param_1 + 4) == 0) {
        return 1;
      }
      if (iVar7 != 0) {
        uStack_18 = CONCAT22((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 8),
                             (short)((uint)*(undefined4 *)(param_1 + 0xc) >> 8));
        uVar5 = sub_0800A1D4(auStack_1c,param_2);
        *(undefined4 *)(param_1 + 0x18) = uVar5;
      }
    }
    iVar7 = **(int **)(param_1 + 4);
    iVar7 = __call_via_r2(*(int **)(param_1 + 4),9,*(int *)(iVar7 + 0x34) + iVar7);
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        uVar5 = 0;
      }
      else {
        iVar7 = **(int **)(param_1 + 0x18);
        iVar7 = __call_via_r2(*(int **)(param_1 + 0x18),param_2,*(int *)(iVar7 + 8) + iVar7);
        if (iVar7 != 0) {
          if (*(int *)(*(int *)(param_1 + 4) + 0x1a0) < param_2[0x68]) {
            uVar4 = 2;
          }
          else {
            uVar4 = 3;
          }
          *(undefined1 *)(param_2 + 4) = uVar4;
          *(undefined1 *)(param_1 + 0x14) = 1;
          iVar7 = **(int **)(param_1 + 0x18);
          __call_via_r1(*(int **)(param_1 + 0x18),*(int *)(iVar7 + 4) + iVar7);
          sub_0800ECDA(param_2,0x12);
          sub_0800ED18(param_2,&DAT_03003118);
          piVar6 = DAT_03001c34;
          iVar7 = __call_via_r1(DAT_03001c34,*(int *)(*DAT_03001c34 + 0x80) + *DAT_03001c34);
          sVar3 = *(short *)(iVar7 + 0x1a);
          iVar7 = __call_via_r1(piVar6,*(int *)(*piVar6 + 0x80) + *piVar6);
          if (*(short *)(iVar7 + 0x1c) >> 2 < sVar3) {
            iVar7 = __call_via_r1(piVar6,*(int *)(*piVar6 + 0x80) + *piVar6);
            sVar3 = *(short *)(iVar7 + 0x1a);
            iVar7 = __call_via_r1(piVar6,*(int *)(*piVar6 + 0x80) + *piVar6);
            *(int *)(param_1 + 0x1c) = (int)sVar3 - ((int)*(short *)(iVar7 + 0x1c) >> 2);
          }
          else {
            *(undefined4 *)(param_1 + 0x1c) = 0;
          }
        }
        uVar5 = 0;
      }
    }
    else {
      piVar6 = *(int **)(param_1 + 0x18);
      if (piVar6 != (int *)0x0) {
        __call_via_r1(piVar6,*(int *)(*piVar6 + 4) + *piVar6);
      }
      uVar5 = 1;
    }
    return uVar5;
  }
  if (cVar2 == '\x01') {
    uStack_18 = param_4;
    iVar7 = __call_via_r1(DAT_03001c34,*(int *)(*DAT_03001c34 + 0x80) + *DAT_03001c34);
    pbVar9 = (byte *)(param_1 + 0x20);
    if ((int)*(short *)(iVar7 + 0x1a) == *(int *)(param_1 + 0x1c)) {
      __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2);
      *(undefined1 *)(param_1 + 0x14) = 2;
      *pbVar9 = 0x3c;
    }
    else {
      bVar1 = *pbVar9;
      *pbVar9 = bVar1 + 1;
      if ((bVar1 + 1 & 7) == 0) {
        iVar7 = *piVar6;
        iVar7 = __call_via_r1(piVar6,*(int *)(iVar7 + 0x80) + iVar7);
        puVar8 = (ushort *)(iVar7 + 0x1a);
        iVar7 = (*puVar8 - 1) * 0x10000;
        do {
          *puVar8 = (ushort)((uint)iVar7 >> 0x10);
        } while ((int)(short)*puVar8 != iVar7 >> 0x10);
      }
      if ((*pbVar9 & 0x1f) == 0) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_0831938C,0x40,0);
      }
    }
    return 0;
  }
  if (cVar2 == '\x02') {
    cVar2 = *(char *)(param_1 + 0x20);
    *(char *)(param_1 + 0x20) = cVar2 + -1;
    if (cVar2 == '\0') {
      return 1;
    }
    return 0;
  }
  return 1;
}

