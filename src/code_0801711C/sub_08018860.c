/* sub_08018860  (original: 0x08018860-0x08018876 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_08018860(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,*(undefined4 *)(param_1 + 4),*(int *)(*param_2 + 0x6c) + *param_2,param_1,
                param_4);
  return 0;
}

