/* sub_0802BA18  (original: 0x0802BA18-0x0802BB40 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019a4;
extern int volatile DAT_030019a8;
extern int volatile DAT_030019e8;
extern int volatile DAT_030019f0;
extern int volatile DAT_030019ec;
extern int volatile DAT_030019f4;


void sub_0802BA18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int __frame[13];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_34 ((int *)((char *)__frame + 0x0))
  local_34[0] = 0x7fffffff;
  local_34[1] = 0x7fffffff;
  local_34[2] = 0x7fffffff;
  local_34[3] = 0x7fffffff;
  iVar4 = 0;
  iVar5 = 0x7fffffff;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      iVar1 = iVar4 * 8 + param_1 + 0x1c;
      iVar3 = *(int *)(iVar1 + 4) - (DAT_030019a4 >> 10);
      iVar1 = *(int *)(iVar1 + 8) - (DAT_030019a8 >> 10);
      iVar2 = iVar3 * iVar3 + iVar1 * iVar1;
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      local_34[3] = iVar3 * DAT_030019e8 + iVar1 * DAT_030019f0 >> 10;
      local_34[0] = DAT_030019ec * iVar3 + iVar1 * DAT_030019f4 >> 10;
      iVar1 = local_34[3];
      if (local_34[3] < 0) {
        iVar1 = -local_34[3];
      }
      iVar2 = local_34[0];
      if (local_34[0] < 0) {
        iVar2 = -local_34[0];
      }
      if (iVar2 < iVar1) {
        if (local_34[3] < 1) {
          if (local_34[3] < 0) {
            local_34[2] = -local_34[3];
          }
          else {
            local_34[3] = 0;
            local_34[2] = 0;
          }
        }
        else {
        }
      }
      else if (local_34[0] < 1) {
        if (local_34[0] < 0) {
          local_34[1] = -local_34[0];
        }
        else {
          local_34[1] = 0;
          local_34[0] = 0;
        }
      }
      else {
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x1c));
  }
  iVar4 = 0;
  do {
    if (local_34[iVar4] < 100) {
      *(undefined1 *)(param_1 + iVar4 + 0x15) = 0;
    }
    else if (local_34[iVar4] < 400) {
      *(undefined1 *)(param_1 + iVar4 + 0x15) = 1;
    }
    else {
      *(undefined1 *)(param_1 + iVar4 + 0x15) = 2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  if (iVar5 < 0x271) {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  else if (iVar5 < 0xf424) {
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x19) = 2;
  }
  return;
}

