/* sub_0800F9F8  (original: 0x0800F9F8-0x0800FA16 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009904();
extern undefined4 volatile DAT_030019a4;


undefined4 sub_0800F9F8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 == 0) && (iVar1 = sub_08009904(&DAT_030019a4,param_2,param_1 + 0x19c), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

