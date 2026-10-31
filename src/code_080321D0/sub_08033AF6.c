/* sub_08033AF6  (original: 0x08033AF6-0x08033B20 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08033AF6(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  param_2[0xa5] = 0;
  *(byte *)(param_2 + 0xa4) = *(byte *)(param_2 + 4) ^ 1;
  __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}

