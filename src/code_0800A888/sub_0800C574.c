/* sub_0800C574  (original: 0x0800C574-0x0800C58E in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_080118D4();


undefined4 sub_0800C574(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0xc) {
    iVar2 = *(int *)(*param_1 + 8);
    __call_via_r1(param_1,iVar2 + *param_1,iVar2,param_4,param_4);
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080118D4();
  }
  return uVar1;
}

