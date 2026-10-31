/* sub_0802CDE8  (original: 0x0802CDE8-0x0802D090 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803FACC();
extern int sub_0800FDFA();
extern int __16__rt_sdiv();
extern int volatile DAT_03001b94;


undefined4 sub_0802CDE8(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  unsigned int __frame[20];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_50 (*(int *)((char *)__frame + 0x0))
#define iStack_4c (*(int *)((char *)__frame + 0x4))
#define iStack_48 (*(int *)((char *)__frame + 0x8))
#define iStack_44 (*(int *)((char *)__frame + 0xc))
#define iStack_40 (*(int *)((char *)__frame + 0x10))
#define iStack_3c (*(int *)((char *)__frame + 0x14))
#define iStack_38 (*(int *)((char *)__frame + 0x18))
#define iStack_34 (*(int *)((char *)__frame + 0x1c))
#define iStack_30 (*(int *)((char *)__frame + 0x20))
#define iStack_2c (*(int *)((char *)__frame + 0x24))
#define iStack_28 (*(int *)((char *)__frame + 0x28))
#define iStack_24 (*(int *)((char *)__frame + 0x2c))
#define iStack_20 (*(int *)((char *)__frame + 0x30))
#define iStack_1c (*(int *)((char *)__frame + 0x34))
#define piStack_18 (*(int * *)((char *)__frame + 0x38))
  if (((*(char *)((int)param_2 + 0x11) != '\x01') && (*(char *)((int)param_2 + 0x11) != '\x04')) &&
     (DAT_03001b94 != 0)) {
    sub_0800FDFA(&iStack_50);
    iStack_3c = iStack_4c + iStack_44 >> 1;
    iStack_40 = iStack_50 + iStack_48 >> 1;
    sub_0800FDFA(&iStack_38,param_2);
    iStack_20 = iStack_40 - (iStack_38 + iStack_30 >> 1);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_28 = iStack_20;
    if (iStack_20 < 0) {
      iStack_28 = -iStack_20;
    }
    iStack_24 = iStack_1c;
    if (iStack_1c < 0) {
      iStack_24 = -iStack_1c;
    }
    if (iStack_24 < iStack_28) {
      uVar1 = 3;
      if (iStack_20 < 1) {
        uVar1 = 2;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar3 = iStack_28;
    }
    else {
      *(bool *)(param_2 + 4) = iStack_1c < 1;
      iVar3 = iStack_24;
    }
    if (7 < iVar3) {
      iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar2 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_28 = iStack_20 * 0x100;
      iStack_24 = iStack_1c * 0x100;
      iStack_4c = *(int *)(param_1 + 4) * iStack_24 >> 8;
      iStack_50 = *(int *)(param_1 + 4) * iStack_28 >> 8;
      piVar4 = param_2 + 0x68;
      iStack_48 = iStack_50;
      iStack_44 = iStack_4c;
      iVar2 = __16__rt_sdiv(iVar3 * 0x100,iStack_50 << 8);
      iStack_3c = __16__rt_sdiv(iVar3 * 0x100,iStack_44 << 8);
      piVar5 = param_2 + 0x69;
      iStack_50 = *piVar4 + iVar2;
      iStack_4c = param_2[0x69] + iStack_3c;
      iStack_34 = 0;
      iStack_40 = iVar2;
      iStack_38 = iStack_50;
      iStack_30 = iStack_50;
      iStack_2c = iStack_4c;
      if (*(int *)(param_1 + 8) == 0) {
        iVar3 = __call_via_r2(param_2,&iStack_30,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar3 == 0) {
          iStack_3c = iStack_30;
          piStack_18 = param_2 + 0x69;
          iStack_38 = *piStack_18;
          iStack_40 = iStack_30 - *piVar4;
          iVar3 = iStack_40;
          if (iStack_40 < 0) {
            iVar3 = -iStack_40;
          }
          if ((iVar3 < 0x401) ||
             (iVar3 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2),
             iVar3 == 0)) {
            iStack_3c = *piVar4;
            iStack_38 = iStack_2c;
            iStack_40 = iStack_2c - *piStack_18;
            iVar3 = iStack_40;
            if (iStack_40 < 0) {
              iVar3 = -iStack_40;
            }
            if ((0x400 < iVar3) &&
               (iVar3 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2),
               iVar3 != 0)) {
              *piVar4 = iStack_3c;
              *piVar5 = iStack_38;
              iStack_34 = 1;
            }
          }
          else {
            *piVar4 = iStack_3c;
            *piVar5 = iStack_38;
            iStack_34 = 1;
          }
        }
        else {
          *piVar4 = iStack_30;
          *piVar5 = iStack_2c;
          iStack_34 = 1;
        }
      }
      if (iStack_34 == 0) {
        if (*(int *)(param_1 + 8) == 0) {
          iVar3 = sub_0803FACC(0x20);
          *(int *)(param_1 + 8) = iVar3 + -0x10;
        }
        iStack_38 = param_2[0x69];
        iStack_3c = *piVar4;
        iVar3 = iStack_20;
        if (iStack_20 < 0) {
          iVar3 = -iStack_20;
        }
        iVar2 = iStack_1c;
        if (iStack_1c < 0) {
          iVar2 = -iStack_1c;
        }
        if (iVar3 < iVar2) {
          if (*(int *)(param_1 + 8) < 0) {
            iStack_3c = iStack_3c - *(int *)(param_1 + 4);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          }
          else {
            iStack_3c = iStack_3c + *(int *)(param_1 + 4);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          }
        }
        else if (*(int *)(param_1 + 8) < 0) {
          iStack_38 = iStack_38 - *(int *)(param_1 + 4);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        else {
          iStack_38 = iStack_38 + *(int *)(param_1 + 4);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
        iVar3 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        else {
          *piVar4 = iStack_3c;
          *piVar5 = iStack_38;
        }
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    }
  }
  return 0;
}

