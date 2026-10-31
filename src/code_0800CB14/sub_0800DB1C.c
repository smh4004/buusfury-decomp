/* sub_0800DB1C  (original: 0x0800DB1C-0x0800DB42 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


undefined4 sub_0800DB1C(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0xc) + *param_1);
  if ((iVar1 == 0) && (7 < param_2)) {
    return 2;
  }
  if (8 < param_2) {
    return 2;
  }
  return 0;
}

