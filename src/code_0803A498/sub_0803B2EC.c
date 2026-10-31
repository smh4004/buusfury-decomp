/* sub_0803B2EC  (original: 0x0803B2EC-0x0803B30E in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0803B2EC(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (*(ushort *)((int)param_2 + 0x12) == 0) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  else {
    uVar1 = *(ushort *)((int)param_2 + 0x12) - 1;
    *(short *)((int)param_2 + 0x12) = (short)uVar1;
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 3);
  }
  return;
}

