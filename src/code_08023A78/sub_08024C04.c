/* sub_08024C04  (original: 0x08024C04-0x08024C38 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, mem@03000000.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0803D850();


undefined4 sub_08024C04(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 6) == '\x01') {
    iVar2 = *(int *)(*param_1 + 0x34);
    __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
    sub_0803D850();
    uVar1 = 0;
  }
  else if (*(char *)((int)param_1 + 6) == '\x02') {
    iVar2 = *(int *)(*param_1 + 0x38);
    __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
    sub_0803D850();
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

