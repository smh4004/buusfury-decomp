/* sub_0800F4C0  (original: 0x0800F4C0-0x0800F4E6 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


undefined4 sub_0800F4C0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0xc) + *param_1);
  if (iVar1 == 0) {
    if (0xc < param_2) {
      return 2;
    }
  }
  else if (0xd < param_2) {
    return 2;
  }
  return 0;
}

