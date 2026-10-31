/* sub_0803B934  (original: 0x0803B934-0x0803BB00 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int __call_via_r2();
extern int volatile DAT_03001c34;


void sub_0803B934(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  unsigned int __frame[15];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_3c (*(int *)((char *)__frame + 0x0))
#define local_38 (*(int *)((char *)__frame + 0x4))
#define local_34 (*(int *)((char *)__frame + 0x8))
#define local_30 (*(int *)((char *)__frame + 0xc))
#define local_2c (*(int *)((char *)__frame + 0x10))
#define local_28 (*(int *)((char *)__frame + 0x14))
#define local_24 (*(int *)((char *)__frame + 0x18))
#define local_20 (*(int *)((char *)__frame + 0x1c))
#define local_1c (*(int *)((char *)__frame + 0x20))
#define piStack_18 (*(int * *)((char *)__frame + 0x24))
  iVar2 = DAT_03001c34;
  piVar1 = (int *)(DAT_03001c34 + 0x1a0);
  local_20 = *(int *)(DAT_03001c34 + 0x1a4);
  local_24 = *piVar1;
  *piVar1 = *(int *)(param_1 + 0xc);
  piVar7 = param_2 + 0x68;
  *(undefined4 *)(iVar2 + 0x1a4) = *(undefined4 *)(param_1 + 0x10);
  local_3c = *piVar1 >> 8;
  local_38 = *(int *)(iVar2 + 0x1a4) >> 8;
  local_2c = local_3c - (*piVar7 >> 8);
  piVar8 = param_2 + 0x69;
  local_28 = local_38 - (param_2[0x69] >> 8);
  local_34 = local_2c;
  if (local_2c < 0) {
    local_34 = -local_2c;
  }
  local_30 = local_28;
  if (local_28 < 0) {
    local_30 = -local_28;
  }
  if (local_30 < local_34) {
    uVar5 = 3;
    if (local_2c < 1) {
      uVar5 = 2;
    }
    *(undefined1 *)(param_2 + 4) = uVar5;
    iVar9 = local_34;
  }
  else {
    *(bool *)(param_2 + 4) = local_28 < 1;
    iVar9 = local_30;
  }
  *piVar1 = local_24;
  *(int *)(iVar2 + 0x1a4) = local_20;
  if (iVar9 == 0) {
    iVar9 = 1;
  }
  local_1c = param_1;
  piStack_18 = param_2;
  iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar2 == 0) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  }
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  local_34 = local_2c * 0x100;
  local_30 = local_28 * 0x100;
  iVar6 = *(int *)(local_1c + 4) * local_30;
  iVar2 = *(int *)(local_1c + 4) * local_34 >> 8;
  iVar3 = __16__rt_sdiv(iVar9 * 0x100,iVar2 << 8);
  iVar9 = __16__rt_sdiv(iVar9 * 0x100,(iVar6 >> 8) << 8);
  iVar6 = *piVar7 + iVar3;
  iVar9 = *piVar8 + iVar9;
  local_3c = iVar6;
  local_38 = iVar9;
  iVar4 = __call_via_r2(param_2,&local_3c,*(int *)(*param_2 + 0x54) + *param_2);
  if (iVar4 == 0) {
    local_24 = local_3c;
    local_20 = param_2[0x69];
    iVar4 = local_3c - *piVar7;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if ((iVar4 < 1) ||
       (iVar4 = __call_via_r2(param_2,&local_24,*(int *)(*param_2 + 0x54) + *param_2), iVar4 == 0))
    {
      local_24 = *piVar7;
      local_20 = local_38;
      iVar4 = local_38 - param_2[0x69];
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((0 < iVar4) &&
         (iVar4 = *(int *)(*param_2 + 0x54),
         iVar2 = __call_via_r2(param_2,&local_24,iVar4 + *param_2,iVar4,iVar3,iVar6,iVar9,iVar2),
         iVar2 != 0)) {
        *piVar7 = local_24;
        *piVar8 = local_20;
      }
    }
    else {
      *piVar7 = local_24;
      *piVar8 = local_20;
    }
  }
  else {
    *piVar7 = local_3c;
    *piVar8 = local_38;
  }
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  return;
}

