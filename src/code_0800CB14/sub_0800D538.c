/* sub_0800D538  (original: 0x0800D538-0x0800D6D2 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800DAE6();
extern int sub_08009324();
extern undefined4 volatile DAT_03001a4c;
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;
extern int volatile DAT_030019c4;
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c8;
extern int volatile DAT_030019c0;


undefined4 sub_0800D538(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[13];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_34 (*(int *)((char *)__frame + 0x0))
#define local_30 (*(int *)((char *)__frame + 0x4))
#define local_2c (*(int *)((char *)__frame + 0x8))
#define local_28 (*(int *)((char *)__frame + 0xc))
#define local_24 (*(int *)((char *)__frame + 0x10))
#define local_20 (*(int *)((char *)__frame + 0x14))
#define local_1c (*(int *)((char *)__frame + 0x18))
#define local_18 (*(int *)((char *)__frame + 0x1c))
  if (*(int *)(param_1 + 0x40) == 0) {
    local_1c = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    local_18 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c);
    local_34 = local_1c >> 8;
    local_30 = local_18 >> 8;
    local_2c = *(int *)(param_1 + 0x70) + local_34;
    local_28 = *(int *)(param_1 + 0x74) + local_30;
    local_24 = *(int *)(param_1 + 0x78) + local_34;
    local_20 = *(int *)(param_1 + 0x7c) + local_30;
    iVar1 = sub_08009324(&local_2c,DAT_03001a4c);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x60) = local_1c;
      *(int *)(param_1 + 100) = local_18;
      local_34 = local_1c >> 8;
      local_30 = local_18 >> 8;
      sub_0800DAE6(param_1,&local_34);
      *(int *)(param_1 + 0x50) = (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) >> 1) + -8;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x24) + -6;
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 != 0) {
        *(short *)(iVar1 + 4) = (short)local_2c + -0xf;
        *(short *)(iVar1 + 6) = (short)local_28 + -7;
        *(short *)(iVar1 + 8) = (short)local_24;
        *(short *)(iVar1 + 10) = (short)local_20;
      }
    }
    iVar1 = *(int *)(param_1 + 0x34) + -0x80;
    *(int *)(param_1 + 0x34) = iVar1;
    iVar1 = *(int *)(param_1 + 0x30) + iVar1;
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x30) = -iVar1 >> 1;
      iVar1 = -*(int *)(param_1 + 0x34) >> 1;
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 < 0x200) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x40) = 1;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x54) - DAT_030019d0;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x50) - DAT_030019cc;
  *(int *)(param_1 + 0x5c) = iVar1;
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_030019d0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x18) - DAT_030019cc;
  *(int *)(param_1 + 0x2c) = iVar1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - (*(int *)(param_1 + 0x30) >> 10);
  if ((((*(int *)(param_1 + 0x18) < DAT_030019c4) && (DAT_030019bc < *(int *)(param_1 + 0x20))) &&
      (*(int *)(param_1 + 0x1c) < DAT_030019c8)) && (DAT_030019c0 < *(int *)(param_1 + 0x24))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

