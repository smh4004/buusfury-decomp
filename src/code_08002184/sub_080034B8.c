/* sub_080034B8  (original: 0x080034B8-0x08003556 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_080001C6();
extern int sub_08009816();
extern int sub_0800FDFA();
extern undefined4 volatile DAT_030019a4;


void sub_080034B8(int *param_1)

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
#define local_14 (*(int *)((char *)__frame + 0x20))
#define local_10 (*(int *)((char *)__frame + 0x24))
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  uVar2 = sub_080001C6(param_1[iVar1]);
  sub_0800FDFA(&local_34,uVar2);
  local_24 = local_34 + local_2c >> 1;
  local_20 = local_30 + local_28 >> 1;
  iVar1 = __16__rt_sdiv(2,local_14);
  local_18 = __16__rt_sdiv(2,local_10);
  local_1c = local_24 - iVar1;
  local_18 = local_20 - local_18;
  sub_08009816(&local_2c,&DAT_030019a4,&local_1c,&local_14);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = local_2c;
  return;
}

