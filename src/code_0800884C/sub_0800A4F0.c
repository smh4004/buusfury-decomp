/* sub_0800A4F0  (original: 0x0800A4F0-0x0800A526 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009324();
extern undefined4 volatile DAT_03001a4c;


undefined4 sub_0800A4F0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((((*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x48)) ||
       (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x4c))) ||
      (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x40))) ||
     (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x44))) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08009324(param_1 + 0x38,DAT_03001a4c,*(int *)(param_1 + 0x44),param_4,param_4);
  }
  return uVar1;
}

