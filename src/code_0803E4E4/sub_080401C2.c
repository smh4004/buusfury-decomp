/* sub_080401C2  (original: 0x080401C2-0x080401DA in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int * volatile DAT_03000ff4;
extern undefined4 volatile DAT_03004a74;


void sub_080401C2(void)

{
  __call_via_r1(DAT_03000ff4,*(int *)(*DAT_03000ff4 + 0xc) + *DAT_03000ff4);
  DAT_03000ff4 = &DAT_03004a74;
  return;
}

