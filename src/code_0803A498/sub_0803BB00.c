/* sub_0803BB00  (original: 0x0803BB00-0x0803BB48 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803B6EA();
extern byte volatile DAT_030032e5;


void sub_0803BB00(int param_1,int *param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x18) = DAT_030032e5;
  DAT_030032e5 = DAT_030032e5 + 1 & 7;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  iVar1 = sub_0803B6EA(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20));
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

