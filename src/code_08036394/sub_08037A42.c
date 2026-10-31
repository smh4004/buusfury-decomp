/* sub_08037A42  (original: 0x08037A42-0x08037A56 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_08037A42(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r3(param_2,4,0,*(int *)(*param_2 + 0x30) + *param_2,param_4);
  return;
}

