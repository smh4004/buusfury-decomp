/* sub_08032948  (original: 0x08032948-0x08032A64 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int volatile DAT_03001c34;


undefined4 sub_08032948(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
  iVar1 = param_2[4];
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  *(char *)(param_2 + 4) = (char)param_3;
  local_1c = 0;
  local_18 = 0;
  piVar2 = param_2 + 0x68;
  if (param_3 == 0) {
    iVar4 = *(int *)(DAT_03001c34 + 0x1a4) - param_2[0x69];
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    param_3 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + (iVar4 >> 8)) >> 3;
    local_18 = 0x800;
  }
  else if (param_3 == 1) {
    iVar4 = *(int *)(DAT_03001c34 + 0x1a0) - *piVar2;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    param_3 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + (iVar4 >> 8)) >> 3;
    local_18 = -0x800;
  }
  else if (param_3 == 2) {
    iVar4 = *(int *)(DAT_03001c34 + 0x1a0) - *piVar2;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    param_3 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + (iVar4 >> 8)) >> 3;
    local_1c = -0x800;
  }
  else if (param_3 == 3) {
    iVar4 = *(int *)(DAT_03001c34 + 0x1a0) - *piVar2;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    param_3 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + (iVar4 >> 8)) >> 3;
    local_1c = 0x800;
  }
  iStack_24 = *piVar2;
  local_20 = param_2[0x69];
  iVar4 = 0;
  if (0 < param_3) {
    do {
      iStack_24 = iStack_24 + local_1c;
      local_20 = local_20 + local_18;
      iVar3 = __call_via_r2(param_2,&iStack_24,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar3 == 0) {
        *(char *)(param_2 + 4) = (char)iVar1;
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  *(char *)(param_2 + 4) = (char)iVar1;
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  return 1;
}

