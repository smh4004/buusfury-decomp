/* sub_080187D4  (original: 0x080187D4-0x080187F0 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_080187D4(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,7,*(int *)(*param_2 + 0x28) + *param_2);
  param_2[0x72] = 1;
  return;
}

