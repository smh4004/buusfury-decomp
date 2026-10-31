/* sub_08031004  (original: 0x08031004-0x08031228 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08054A64();
extern int __call_via_r2();
extern int sub_0800FDFA();
extern int volatile DAT_03001b94;
extern int volatile DAT_0300316c;
extern int volatile DAT_03003168;


undefined4 sub_08031004(int param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  unsigned int __frame[19];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_4c (*(int *)((char *)__frame + 0x0))
#define iStack_48 (*(int *)((char *)__frame + 0x4))
#define iStack_44 (*(int *)((char *)__frame + 0x8))
#define iStack_40 (*(int *)((char *)__frame + 0xc))
#define iStack_3c (*(int *)((char *)__frame + 0x10))
#define iStack_38 (*(int *)((char *)__frame + 0x14))
#define iStack_34 (*(int *)((char *)__frame + 0x18))
#define iStack_30 (*(int *)((char *)__frame + 0x1c))
#define iStack_2c (*(int *)((char *)__frame + 0x20))
#define iStack_28 (*(int *)((char *)__frame + 0x24))
#define iStack_24 (*(int *)((char *)__frame + 0x28))
#define iStack_20 (*(int *)((char *)__frame + 0x2c))
#define iStack_1c (*(int *)((char *)__frame + 0x30))
#define iStack_18 (*(int *)((char *)__frame + 0x34))
  if (DAT_03001b94 != 0) {
    piVar8 = (int *)(param_1 + 4);
    if (param_2[0x81] != 0) {
      uVar2 = param_2[0x81] & 0xffffff7f;
      if (uVar2 == 0) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x400;
      }
      else if (uVar2 == 1) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x400;
      }
      else if (uVar2 == 2) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -0x400;
      }
      else if (uVar2 == 3) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x400;
      }
      if (*(int *)(param_1 + 4) < 0x81) {
        if (*(int *)(param_1 + 4) < -0x80) {
          *piVar8 = -0x80;
        }
        else if (*(int *)(param_1 + 8) < 0x81) {
          if (*(int *)(param_1 + 8) < -0x80) {
            *(undefined4 *)(param_1 + 8) = 0xffffff80;
          }
        }
        else {
          *(undefined4 *)(param_1 + 8) = 0x80;
        }
      }
      else {
        *piVar8 = 0x80;
      }
      param_2[0x81] = 0;
    }
    sub_0800FDFA(&iStack_4c);
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800FDFA(&iStack_34,param_2);
    iStack_20 = iStack_30 + iStack_28 >> 1;
    iStack_24 = iStack_34 + iStack_2c >> 1;
    iStack_1c = iStack_3c - iStack_24;
    iStack_18 = iStack_38 - iStack_20;
    if (DAT_0300316c == 0) {
      DAT_0300316c = 1;
      DAT_03003168 = sub_08054A64(0x4219999a);
    }
    if (iStack_1c < 1) {
      if (-0x80 < *(int *)(param_1 + 4)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - DAT_03003168;
      }
    }
    else if (*(int *)(param_1 + 4) < 0x80) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + DAT_03003168;
    }
    if (iStack_18 < 1) {
      if (-0x80 < *(int *)(param_1 + 8)) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - DAT_03003168;
      }
    }
    else if (*(int *)(param_1 + 8) < 0x80) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + DAT_03003168;
    }
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = -iVar3;
    }
    iVar5 = *(int *)(param_1 + 8);
    iVar6 = iVar5;
    if (iVar5 < 0) {
      iVar6 = -iVar5;
    }
    if (iVar6 < iVar4) {
      if (iVar3 < 1) {
        uVar1 = 2;
      }
      else {
        uVar1 = 3;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
    }
    else {
      *(char *)(param_2 + 4) = '\x01' - (0 < iVar5);
    }
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    piVar7 = param_2 + 0x68;
    iStack_34 = *piVar7 + *piVar8;
    iStack_30 = param_2[0x69] + *(int *)(param_1 + 8);
    piVar8 = param_2 + 0x69;
    iStack_2c = iStack_34;
    iStack_28 = iStack_30;
    iStack_24 = iStack_34;
    iStack_20 = iStack_30;
    iVar4 = __call_via_r2(param_2,&iStack_24,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar4 == 0) {
      iStack_2c = iStack_24;
      iStack_28 = param_2[0x69];
      iVar4 = __call_via_r2(param_2,&iStack_2c,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar4 == 0) {
        iStack_2c = *piVar7;
        iStack_28 = iStack_20;
        iVar4 = __call_via_r2(param_2,&iStack_2c,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar4 != 0) {
          *piVar7 = iStack_2c;
          *piVar8 = iStack_28;
        }
      }
      else {
        *piVar7 = iStack_2c;
        *piVar8 = iStack_28;
      }
    }
    else {
      *piVar7 = iStack_24;
      *piVar8 = iStack_20;
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  }
  return 0;
}

