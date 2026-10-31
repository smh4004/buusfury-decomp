/* sub_0803EEC8  (original: 0x0803EEC8-0x0803EEE4 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0803EEC8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x4a);
  if (((*(byte *)(param_1 + 0x4a) & 3) != 0) && (((uVar1 & 3) != 1 || ((int)(uVar1 << 0x1d) < 0))))
  {
    __call_via_r1(param_1,*(undefined4 *)(param_1 + 0x54),uVar1,param_4,param_4);
  }
  return;
}

