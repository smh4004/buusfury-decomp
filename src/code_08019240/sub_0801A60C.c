/* sub_0801A60C  (original: 0x0801A60C-0x0801A624 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080134B8();


undefined4 sub_0801A60C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,0x15e,param_3,param_4,param_4);
  }
  return uVar1;
}

