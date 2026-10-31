/* sub_0802B3EA  (original: 0x0802B3EA-0x0802B590 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FDFA();
extern int __16__rt_sdiv();
extern int __call_via_r2();


int sub_0802B3EA(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
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
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    sub_0800FDFA(&iStack_4c,*(undefined4 *)(param_1 + 8));
    iStack_38 = iStack_48 + iStack_40 >> 1;
    iStack_3c = iStack_4c + iStack_44 >> 1;
    sub_0800FDFA(&iStack_34,param_2);
    iStack_1c = iStack_3c - (iStack_34 + iStack_2c >> 1);
    iStack_18 = iStack_38 - (iStack_30 + iStack_28 >> 1);
    iStack_24 = iStack_1c;
    if (iStack_1c < 0) {
      iStack_24 = -iStack_1c;
    }
    iStack_20 = iStack_18;
    if (iStack_18 < 0) {
      iStack_20 = -iStack_18;
    }
    if (iStack_20 < iStack_24) {
      uVar1 = 3;
      if (iStack_1c < 1) {
        uVar1 = 2;
      }
      *(undefined1 *)(param_2 + 4) = uVar1;
      iVar2 = iStack_24;
    }
    else {
      *(bool *)(param_2 + 4) = iStack_18 < 1;
      iVar2 = iStack_20;
    }
    if (iVar2 < *(int *)(param_1 + 4)) {
      iVar2 = 0;
    }
    else {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_24 = iStack_1c << 8;
      iStack_20 = iStack_18 << 8;
      piVar4 = param_2 + 0x68;
      iVar3 = __16__rt_sdiv(iVar2 * 0x100,iStack_1c << 0x10);
      iStack_38 = __16__rt_sdiv(iVar2 * 0x100,iStack_20 << 8);
      iStack_44 = *piVar4 + iVar3;
      iStack_40 = param_2[0x69] + iStack_38;
      piVar5 = param_2 + 0x69;
      iStack_3c = iVar3;
      iStack_34 = iStack_44;
      iStack_30 = iStack_40;
      iStack_2c = iStack_44;
      iStack_28 = iStack_40;
      iVar2 = __call_via_r2(param_2,&iStack_2c,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 == 0) {
        iStack_34 = iStack_2c;
        iStack_30 = param_2[0x69];
        iStack_38 = iStack_2c - *piVar4;
        iVar2 = iStack_38;
        if (iStack_38 < 0) {
          iVar2 = -iStack_38;
        }
        if ((iVar2 < 0x401) ||
           (iVar2 = __call_via_r2(param_2,&iStack_34,*(int *)(*param_2 + 0x54) + *param_2),
           iVar2 == 0)) {
          iStack_34 = *piVar4;
          iStack_30 = iStack_28;
          iStack_38 = iStack_28 - param_2[0x69];
          iVar2 = iStack_38;
          if (iStack_38 < 0) {
            iVar2 = -iStack_38;
          }
          if ((0x400 < iVar2) &&
             (iVar2 = __call_via_r2(param_2,&iStack_34,*(int *)(*param_2 + 0x54) + *param_2),
             iVar2 != 0)) {
            *piVar4 = iStack_34;
            *piVar5 = iStack_30;
          }
        }
        else {
          *piVar4 = iStack_34;
          *piVar5 = iStack_30;
        }
      }
      else {
        *piVar4 = iStack_2c;
        *piVar5 = iStack_28;
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      iVar2 = 0;
    }
  }
  return iVar2;
}

