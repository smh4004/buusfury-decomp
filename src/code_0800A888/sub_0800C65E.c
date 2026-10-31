/* sub_0800C65E  (original: 0x0800C65E-0x0800C7B6 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern int sub_08049138();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03001a4c;
extern undefined4 volatile DAT_03001a54;
extern undefined volatile DAT_06010000;
extern undefined volatile _0804CE00;


undefined4 * sub_0800C65E(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  unsigned int __frame[1032];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define acStack_1020 ((char *)((char *)__frame + 0x0))
#define iStack_28 (*(int *)((char *)__frame + 0xff8))
#define iStack_24 (*(int *)((char *)__frame + 0xffc))
#define iStack_20 (*(int *)((char *)__frame + 0x1000))
#define iStack_1c (*(int *)((char *)__frame + 0x1004))
#define iStack_18 (*(int *)((char *)__frame + 0x1008))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804CE00;
    param_1[10] = param_2;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 5);
    *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)(param_2 + 6);
    param_1[0xb] = param_3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 8);
    param_1[1] = *(undefined4 *)(param_3 + 4);
    param_1[9] = 0;
    param_1[4] = 0;
    piVar1 = *(int **)(param_3 + 0x20);
    iStack_28 = piVar1[2] - *piVar1;
    iStack_24 = piVar1[3] - piVar1[1];
    iStack_20 = iStack_28;
    iStack_1c = iStack_24;
    sub_08049138((int)acStack_1020,
                 (int)(&DAT_06010000 + (uint)*(ushort *)(param_1[0xb] + 0x16) * 0x20),
                 iStack_24 * iStack_28);
    iVar3 = param_1[0xb];
    uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x20) + 8);
    param_1[6] = *(undefined4 *)(*(int *)(iVar3 + 0x20) + 0xc);
    param_1[5] = uVar5;
    uVar5 = **(undefined4 **)(iVar3 + 0x20);
    uVar6 = 0;
    param_1[8] = (*(undefined4 **)(iVar3 + 0x20))[1];
    param_1[7] = uVar5;
    if (0 < iStack_1c) {
      do {
        iVar4 = *(int *)(*(int *)(iVar3 + 0x20) + 4) + uVar6;
        uVar2 = 0;
        if (0 < iStack_20) {
          iStack_18 = iVar4 + 1;
          do {
            if (acStack_1020
                [(((int)uVar6 >> 3) * iStack_20 + (uVar6 & 7)) * 8 + ((int)uVar2 >> 3) * 0x40 +
                 (uVar2 & 7)] != '\0') {
              iVar7 = **(int **)(iVar3 + 0x20) + uVar2;
              if (iVar7 < (int)param_1[5]) {
                param_1[5] = iVar7;
              }
              if (iVar4 < (int)param_1[6]) {
                param_1[6] = iVar4;
              }
              if ((int)param_1[7] <= iVar7) {
                param_1[7] = iVar7 + 1;
              }
              if ((int)param_1[8] <= iVar4) {
                param_1[8] = iStack_18;
              }
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < iStack_20);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iStack_1c);
    }
    param_1[6] = (int)(param_1[6] + param_1[8]) >> 1;
    if (*(int *)(iVar3 + 0x1c) != 0) {
      sub_08009930(param_1 + 5,DAT_03001a4c,0);
      sub_08009930(param_1 + 5,DAT_03001a54,0);
    }
  }
  return param_1;
}

