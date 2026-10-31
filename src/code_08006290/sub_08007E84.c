/* sub_08007E84  (original: 0x08007E84-0x08007F2E in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08007D98();
extern int sub_08007C12();
extern undefined2 volatile REG_BG0VOFS;
extern undefined2 volatile REG_BG0HOFS;


int sub_08007E84(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_2c (*(int *)((char *)__frame + 0x0))
#define local_28 (*(int *)((char *)__frame + 0x4))
#define local_24 (*(int *)((char *)__frame + 0x8))
#define local_20 (*(int *)((char *)__frame + 0xc))
#define local_1c (*(int *)((char *)__frame + 0x10))
#define local_18 (*(int *)((char *)__frame + 0x14))
#define local_14 (*(int *)((char *)__frame + 0x18))
#define local_10 (*(int *)((char *)__frame + 0x1c))
  local_14 = *(int *)(param_2 + 0x18) * *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44) +
             *(int *)(param_2 + 0x30);
  local_10 = *(int *)(param_2 + 0x1c) * *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48) +
             *(int *)(param_2 + 0x34);
  local_1c = local_14 >> 10;
  local_18 = local_10 >> 10;
  local_24 = local_1c + -8;
  local_20 = local_18 + -0x30;
  local_2c = local_24 >> 8;
  local_28 = local_20 >> 8;
  sub_08007C12(param_1,&local_2c);
  sub_08007D98(param_1,&local_24);
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)local_1c;
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)local_18;
  iVar2 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x34) = (local_1c - *(int *)(param_2 + 0x18)) - *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x38) = (local_18 - iVar2) - *(int *)(param_1 + 0x30);
  return param_1 + 0x3c;
}

