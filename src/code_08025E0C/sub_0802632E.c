/* sub_0802632E  (original: 0x0802632E-0x08026360 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0802627E();


void sub_0802632E(int param_1)

{
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(int *)((char *)__frame + 0x0))
#define local_8 (*(int *)((char *)__frame + 0x4))
  local_c = *(int *)(*(int *)(param_1 + 0x51c) + 0xc10) >> 8;
  local_8 = *(int *)(*(int *)(param_1 + 0x51c) + 0xc14) >> 8;
  sub_0802627E(param_1,&local_c);
  return;
}

