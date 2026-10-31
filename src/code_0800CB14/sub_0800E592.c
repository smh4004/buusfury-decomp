/* sub_0800E592  (original: 0x0800E592-0x0800E5C0 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800E592(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if ((iVar1 < 0) &&
     (iVar1 = __call_via_r2(param_2,0x17,*(int *)(*param_2 + 0x34) + *param_2), iVar1 == 0)) {
    __call_via_r2(param_2,0x17,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

