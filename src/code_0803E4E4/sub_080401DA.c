/* sub_080401DA  (original: 0x080401DA-0x080401F4 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int * volatile DAT_03000ff4;
extern int * volatile DAT_03000ff8;
extern undefined4 volatile DAT_03004a74;


void sub_080401DA(void)

{
  DAT_03000ff8 = DAT_03000ff4;
  __call_via_r1(DAT_03000ff4,*(int *)(*DAT_03000ff4 + 0xc) + *DAT_03000ff4);
  DAT_03000ff4 = &DAT_03004a74;
  return;
}

