/* sub_08005096  (original: 0x08005096-0x08005154 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0804912C();
extern int sub_0803F974();
extern int sub_08004F50();


void sub_08005096(int param_1)

{
  int iVar1;
  int iVar2;
  int a0;
  uint a1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
  local_24 = 0;
  local_1c = 8;
  local_18 = *(int *)(param_1 + 0x2c) + -8;
  local_20 = 0;
  sub_0803F974(param_1,&local_24,0);
  local_1c = *(int *)(param_1 + 0x28);
  local_24 = local_1c + -8;
  local_18 = *(int *)(param_1 + 0x2c) + -8;
  local_20 = 0;
  sub_0803F974(param_1,&local_24,0);
  local_18 = *(int *)(param_1 + 0x2c);
  local_1c = *(undefined4 *)(param_1 + 0x28);
  local_20 = local_18 + -8;
  local_24 = 0;
  sub_0803F974(param_1,&local_24,0);
  iVar1 = *(int *)(param_1 + 0x28);
  local_1c = iVar1 + -0xc;
  local_24 = 0xc;
  local_18 = *(int *)(param_1 + 0x2c) + -0xc;
  local_20 = 4;
  a1 = 0x1010101;
  a0 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28) * 4 + 0xc;
  for (iVar2 = *(int *)(param_1 + 0x2c) + -0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    sub_0804912C(a0,a1,iVar1 + -0x18);
    a0 = *(int *)(param_1 + 0x28) + a0;
    a1 = a1 ^ 0x31313131;
  }
  local_24 = 8;
  local_18 = *(int *)(param_1 + 0x2c) + -8;
  local_1c = *(int *)(param_1 + 0x28) + -8;
  local_20 = 0;
  sub_08004F50(param_1,&local_24);
  return;
}

