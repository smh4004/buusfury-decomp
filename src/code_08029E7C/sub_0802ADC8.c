/* sub_0802ADC8  (original: 0x0802ADC8-0x0802ADF0 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0802ADC8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x60) {
    *(byte *)((int)param_2 + 0x11) = (byte)(((uint)uVar1 << 0x1b) >> 0x1e);
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}

