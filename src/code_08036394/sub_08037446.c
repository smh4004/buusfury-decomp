/* sub_08037446  (original: 0x08037446-0x0803746C in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08036F6C();


undefined4 sub_08037446(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0xb) {
    sub_08036F6C();
  }
  else if (param_2 == 0xc) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  }
  return 0;
}

