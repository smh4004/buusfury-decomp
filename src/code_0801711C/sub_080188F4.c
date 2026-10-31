/* sub_080188F4  (original: 0x080188F4-0x0801890A in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_080188F4(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,*(undefined4 *)(param_1 + 4),*(int *)(*param_2 + 0x68) + *param_2,param_1,
                param_4);
  return 1;
}

