/* sub_0803F9B8  (original: 0x0803F9B8-0x0803F9C8 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0803F9B8(int param_1,int param_2)

{
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(undefined4 *)((char *)__frame + 0x0))
#define local_10 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_c (*(undefined4 *)((char *)__frame + 0x8))
#define local_8 (*(undefined4 *)((char *)__frame + 0xc))
  local_14 = 0;
  local_10 = 0;
  local_8 = *(undefined4 *)(param_1 + 0x2c);
  uStack_c = *(undefined4 *)(param_1 + 0x28);
  sub_0804915C(param_1,param_2,(int)&local_14);
  return;
}

