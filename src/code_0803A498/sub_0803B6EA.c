/* sub_0803B6EA  (original: 0x0803B6EA-0x0803B934 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803B4FC();
extern int __call_via_r2();


void sub_0803B6EA(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[23];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_5c (*(int *)((char *)__frame + 0x0))
#define iStack_58 (*(int *)((char *)__frame + 0x4))
#define iStack_54 (*(int *)((char *)__frame + 0x8))
#define iStack_50 (*(int *)((char *)__frame + 0xc))
#define local_4c (*(int *)((char *)__frame + 0x10))
#define local_48 (*(int *)((char *)__frame + 0x14))
#define local_44 (*(int *)((char *)__frame + 0x18))
#define local_40 (*(int *)((char *)__frame + 0x1c))
#define iStack_3c (*(int *)((char *)__frame + 0x20))
#define iStack_38 (*(int *)((char *)__frame + 0x24))
#define iStack_34 (*(int *)((char *)__frame + 0x28))
#define iStack_30 (*(int *)((char *)__frame + 0x2c))
#define local_2c (*(int *)((char *)__frame + 0x30))
#define local_28 (*(int *)((char *)__frame + 0x34))
#define iStack_24 (*(int *)((char *)__frame + 0x38))
#define piStack_20 (*(int * *)((char *)__frame + 0x3c))
#define local_1c (*(int *)((char *)__frame + 0x40))
#define local_18 (*(int *)((char *)__frame + 0x44))
  local_28 = param_2[0x69];
  local_2c = param_2[0x68];
  iStack_34 = param_3 - local_2c;
  iStack_30 = param_4 - local_28;
  if (iStack_34 < 0) {
    iStack_34 = -iStack_34;
  }
  if (iStack_30 < 0) {
    iStack_30 = -iStack_30;
  }
  iStack_3c = param_2[0x68];
  iStack_38 = param_2[0x69];
  iVar1 = iStack_30 >> 8;
  iVar2 = iStack_34 >> 8;
  if (iStack_34 < iStack_30) {
    local_40 = iVar2 * 2;
    iVar3 = local_40 - iVar1;
    local_44 = iVar2 - iVar1;
    local_4c = 0;
    local_48 = 0x100;
  }
  else {
    local_40 = iVar1 * 2;
    iVar3 = local_40 - iVar2;
    local_44 = iVar1 - iVar2;
    local_48 = 0;
    local_4c = 0x100;
    iVar1 = iVar2;
  }
  local_44 = local_44 * 2;
  iStack_50 = 0x100;
  iStack_54 = 0x100;
  if (param_3 < local_2c) {
    iStack_54 = -0x100;
    local_4c = -local_4c;
  }
  if (param_4 < local_28) {
    iStack_50 = -0x100;
    local_48 = -local_48;
  }
  local_18 = param_4;
  local_1c = param_3;
  piStack_20 = param_2;
  iStack_24 = param_1;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 + 1 < *(int *)(param_1 + 8)) {
    iVar2 = iVar1;
  }
  while( true ) {
    do {
      while( true ) {
        iVar2 = iVar2 + -1;
        if (iVar2 < 1) {
          *(int *)(param_1 + 0xc) = local_1c;
          *(undefined4 *)(param_1 + 0x14) = 1;
          *(int *)(param_1 + 0x10) = local_18;
          return;
        }
        if (-1 < iVar3) break;
        iVar3 = iVar3 + local_40;
        iStack_3c = iStack_3c + local_4c;
        iStack_38 = iStack_38 + local_48;
        iVar1 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
        if (iVar1 == 0) {
          iStack_3c = iStack_3c - local_4c;
          iStack_38 = iStack_38 - local_48;
          sub_0803B4FC(param_1,param_2,iStack_3c,iStack_38,local_4c,local_48,local_1c,local_18,iVar2
                      );
          return;
        }
      }
      iVar3 = iVar3 + local_44;
      iStack_3c = iStack_3c + iStack_54;
      iStack_38 = iStack_38 + iStack_50;
      iVar1 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
    } while (iVar1 != 0);
    if (local_4c == iStack_54) {
      iStack_5c = 0;
      iStack_58 = iStack_50;
    }
    else {
      iStack_58 = 0;
      iStack_5c = iStack_54;
    }
    iStack_3c = (iStack_3c - iStack_54) + local_4c;
    iStack_38 = (iStack_38 - iStack_50) + local_48;
    iVar1 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar1 == 0) break;
    iStack_3c = iStack_3c + iStack_5c;
    iStack_38 = iStack_38 + iStack_58;
    iVar1 = __call_via_r2(param_2,&iStack_3c,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar1 == 0) {
      iStack_3c = iStack_3c - iStack_54;
      iStack_38 = iStack_38 - iStack_50;
      sub_0803B4FC(param_1,param_2,iStack_3c,iStack_38,iStack_5c,iStack_58,local_1c,local_18,iVar2);
      return;
    }
  }
  iStack_3c = iStack_3c - local_4c;
  iStack_38 = iStack_38 - local_48;
  sub_0803B4FC(param_1,param_2,iStack_3c,iStack_38,local_4c,local_48,local_1c,local_18,iVar2);
  return;
}

