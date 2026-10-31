/* sub_0803B4FC  (original: 0x0803B4FC-0x0803B6EA in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


uint sub_0803B4FC(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  unsigned int __frame[23];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_5c (*(int *)((char *)__frame + 0x0))
#define local_58 (*(int *)((char *)__frame + 0x4))
#define local_54 (*(int *)((char *)__frame + 0x8))
#define local_50 (*(int *)((char *)__frame + 0xc))
#define local_4c (*(int *)((char *)__frame + 0x10))
#define local_48 (*(int *)((char *)__frame + 0x14))
#define local_44 (*(int *)((char *)__frame + 0x18))
#define local_40 (*(int *)((char *)__frame + 0x1c))
#define local_3c (*(int *)((char *)__frame + 0x20))
#define local_38 (*(int *)((char *)__frame + 0x24))
#define local_34 (*(int *)((char *)__frame + 0x28))
#define local_30 (*(int *)((char *)__frame + 0x2c))
#define local_2c (*(int *)((char *)__frame + 0x30))
#define local_28 (*(int *)((char *)__frame + 0x34))
#define iStack_24 (*(int *)((char *)__frame + 0x38))
#define piStack_20 (*(int * *)((char *)__frame + 0x3c))
#define iStack_1c (*(int *)((char *)__frame + 0x40))
#define iStack_18 (*(int *)((char *)__frame + 0x44))
  local_2c = param_5;
  local_34 = param_5;
  local_28 = param_6;
  local_30 = param_6;
  local_38 = param_5;
  local_3c = -param_6;
  local_40 = -param_5;
  uVar9 = 0;
  uVar8 = 0;
  local_44 = param_6;
  iVar5 = 0xff;
  local_54 = param_3;
  local_50 = param_4;
  local_4c = param_3;
  local_48 = param_4;
  iStack_24 = param_1;
  piStack_20 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  do {
    local_4c = local_4c + local_3c;
    local_48 = local_48 + local_38;
    iVar2 = __call_via_r2(param_2,&local_4c,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      local_4c = local_4c - local_3c;
      local_48 = local_48 - local_38;
      local_58 = local_38;
      local_5c = local_3c;
      iVar2 = -local_2c;
      iVar6 = -local_28;
      local_2c = local_3c;
      local_28 = local_38;
      local_3c = iVar2;
      local_38 = iVar6;
    }
    else {
      local_5c = local_4c + local_2c;
      local_58 = local_48 + local_28;
      iVar2 = __call_via_r2(param_2,&local_5c,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 != 0) {
        uVar8 = 1;
        break;
      }
    }
    bVar1 = 0 < iVar5;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  iVar5 = 0xff;
  do {
    local_54 = local_54 + local_44;
    local_50 = local_50 + local_40;
    iVar2 = __call_via_r2(param_2,&local_54,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      local_54 = local_54 - local_44;
      local_50 = local_50 - local_40;
      local_58 = local_40;
      local_5c = local_44;
      iVar2 = -local_34;
      iVar6 = -local_30;
      local_34 = local_44;
      local_30 = local_40;
      local_44 = iVar2;
      local_40 = iVar6;
    }
    else {
      local_5c = local_54 + local_34;
      local_58 = local_50 + local_30;
      iVar2 = __call_via_r2(param_2,&local_5c,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar2 != 0) {
        uVar9 = 1;
        break;
      }
    }
    bVar1 = 0 < iVar5;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  piVar4 = (int *)(iStack_24 + 0xc);
  piVar3 = (int *)(iStack_24 + 0x10);
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      *piVar4 = local_54;
      *piVar3 = local_50;
      goto _0803B6DC;
    }
  }
  else if (uVar9 == 0) {
    *piVar4 = local_4c;
    *piVar3 = local_48;
    goto _0803B6DC;
  }
  iVar6 = param_7 - local_4c >> 8;
  iVar5 = param_8 - local_48 >> 8;
  iVar7 = param_7 - local_54 >> 8;
  iVar2 = param_8 - local_50 >> 8;
  if (iVar6 * iVar6 + iVar5 * iVar5 < iVar7 * iVar7 + iVar2 * iVar2) {
    *piVar4 = local_4c;
    *piVar3 = local_48;
  }
  else {
    *piVar4 = local_54;
    *piVar3 = local_50;
  }
_0803B6DC:
  *(undefined4 *)(iStack_24 + 0x14) = 1;
  return uVar8 | uVar9;
}

