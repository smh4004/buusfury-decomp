/* sub_0800F9C2  (original: 0x0800F9C2-0x0800F9EE in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009324();
extern undefined4 volatile DAT_03001a54;


undefined4 sub_0800F9C2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x291) == '\0') &&
     (iVar1 = sub_08009324(param_2,DAT_03001a54,0x290,param_4,param_4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

