/* sub_080211A8  (original: 0x080211A8-0x080211FA in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08021094();
extern int sub_080192CE();
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c0;
extern undefined4 volatile DAT_03002bd8;


void sub_080211A8(int param_1)

{
  int iVar1;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(int *)((char *)__frame + 0x0))
#define local_18 (*(int *)((char *)__frame + 0x4))
#define local_14 (*(int *)((char *)__frame + 0x8))
#define local_10 (*(int *)((char *)__frame + 0xc))
  iVar1 = DAT_030019c0;
  local_14 = DAT_030019bc;
  local_10 = DAT_030019c0;
  *(int *)(param_1 + 0x20) = DAT_030019bc << 10;
  *(int *)(param_1 + 0x24) = iVar1 << 10;
  sub_080192CE(&local_14,param_1 + 0xc,param_1 + 0x28,&local_1c,*(undefined4 *)(param_1 + 0x14));
  iVar1 = 0;
  *(int *)(param_1 + 0x18) = local_1c << 2;
  *(int *)(param_1 + 0x1c) = local_18 << 2;
  if (param_1 != 0) {
    iVar1 = param_1 + 8;
  }
  sub_08021094(&DAT_03002bd8,iVar1);
  return;
}

