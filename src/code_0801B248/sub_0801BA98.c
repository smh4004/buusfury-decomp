/* sub_0801BA98  (original: 0x0801BA98-0x0801BAB0 in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801BA98(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 4) = 0;
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_1,param_4);
  return;
}

