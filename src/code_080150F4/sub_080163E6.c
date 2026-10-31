/* sub_080163E6  (original: 0x080163E6-0x08016428 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 93% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_080163E6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[4];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_10 (*(int *)((char *)__frame + 0x0))
#define local_c (*(int *)((char *)__frame + 0x4))
  iVar1 = **(int **)(param_1 + 0x10);
  __call_via_r2(&local_10,*(int **)(param_1 + 0x10),*(int *)(iVar1 + 0x38) + iVar1);
  *(int *)(param_1 + 0x2c) = local_c;
  *(int *)(param_1 + 0x28) = local_10;
  if ((((local_10 < -7) || (0xef < local_10)) || (local_c < -7)) || (0x9f < local_c)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

