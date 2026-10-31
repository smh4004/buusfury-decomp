/* sub_0801CBA0  (original: 0x0801CBA0-0x0801CDA0 in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int __16__rt_sdiv();
extern int sub_0800FDFA();
extern int volatile DAT_03001c34;


undefined4 sub_0801CBA0(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  unsigned int __frame[21];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_54 (*(int *)((char *)__frame + 0x0))
#define iStack_50 (*(int *)((char *)__frame + 0x4))
#define iStack_4c (*(int *)((char *)__frame + 0x8))
#define iStack_48 (*(int *)((char *)__frame + 0xc))
#define iStack_44 (*(int *)((char *)__frame + 0x10))
#define iStack_40 (*(int *)((char *)__frame + 0x14))
#define iStack_3c (*(int *)((char *)__frame + 0x18))
#define iStack_38 (*(int *)((char *)__frame + 0x1c))
#define iStack_34 (*(int *)((char *)__frame + 0x20))
#define iStack_30 (*(int *)((char *)__frame + 0x24))
#define iStack_2c (*(int *)((char *)__frame + 0x28))
#define iStack_28 (*(int *)((char *)__frame + 0x2c))
#define iStack_24 (*(int *)((char *)__frame + 0x30))
#define iStack_20 (*(int *)((char *)__frame + 0x34))
#define piStack_1c (*(int * *)((char *)__frame + 0x38))
#define piStack_18 (*(int * *)((char *)__frame + 0x3c))
  if (DAT_03001c34 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800FDFA(&iStack_54);
    iStack_40 = iStack_50 + iStack_48 >> 1;
    iStack_44 = iStack_54 + iStack_4c >> 1;
    sub_0800FDFA(&iStack_3c,param_2);
    iStack_24 = iStack_44 - (iStack_3c + iStack_34 >> 1);
    iStack_20 = iStack_40 - (iStack_38 + iStack_30 >> 1);
    iStack_2c = iStack_24;
    if (iStack_24 < 0) {
      iStack_2c = -iStack_24;
    }
    iStack_28 = iStack_20;
    if (iStack_20 < 0) {
      iStack_28 = -iStack_20;
    }
    if (iStack_28 < iStack_2c) {
      uVar1 = 2;
      if (iStack_24 < 1) {
        uVar1 = 3;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar4 = iStack_2c;
    }
    else {
      *(bool *)(param_2 + 4) = 0 < iStack_20;
      iVar4 = iStack_28;
    }
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar3 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_2c = iStack_24 * 0x100;
      iStack_28 = iStack_20 * 0x100;
      iStack_50 = *(int *)(param_1 + 4) * iStack_28 >> 8;
      iStack_54 = *(int *)(param_1 + 4) * iStack_2c >> 8;
      piVar6 = param_2 + 0x68;
      iStack_4c = iStack_54;
      iStack_48 = iStack_50;
      iVar3 = __16__rt_sdiv(iVar4 * 0x100,iStack_54 << 8);
      iStack_40 = __16__rt_sdiv(iVar4 * 0x100,iStack_48 << 8);
      piVar7 = param_2 + 0x69;
      iStack_54 = *piVar6 - iVar3;
      iStack_50 = param_2[0x69] - iStack_40;
      iStack_44 = iVar3;
      iStack_3c = iStack_54;
      iStack_38 = iStack_50;
      iStack_34 = iStack_54;
      iStack_30 = iStack_50;
      iVar4 = __call_via_r2(param_2,&iStack_34,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar4 == 0) {
        piVar5 = (int *)(param_1 + 4);
        piStack_18 = piVar5;
        if (iStack_24 < 0) {
          iStack_40 = -*(int *)(param_1 + 4);
          piVar5 = &iStack_40;
        }
        iStack_3c = *piVar6 - *piVar5;
        piStack_1c = param_2 + 0x69;
        iStack_38 = *piStack_1c;
        iVar4 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar4 == 0) {
          iStack_3c = *piVar6;
          piVar5 = piStack_18;
          if (iStack_20 < 0) {
            iStack_40 = -*(int *)(param_1 + 4);
            piVar5 = &iStack_40;
          }
          iStack_38 = *piStack_1c - *piVar5;
          iVar4 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
          if (iVar4 == 0) {
            __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
            return 1;
          }
          *piVar6 = iStack_3c;
          *piVar7 = iStack_38;
        }
        else {
          *piVar6 = iStack_3c;
          *piVar7 = iStack_38;
        }
      }
      else {
        *piVar6 = iStack_34;
        *piVar7 = iStack_30;
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      uVar2 = 0;
    }
  }
  return uVar2;
}

