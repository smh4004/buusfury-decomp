/* sub_0804FB54  (original: 0x0804FB54-0x0804FB6C in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_0804FB54(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0x11;
  }
  return uVar1;
}

