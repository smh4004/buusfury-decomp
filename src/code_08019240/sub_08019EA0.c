/* sub_08019EA0  (original: 0x08019EA0-0x08019EB8 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080134B8();


undefined4 sub_08019EA0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_080134B8(param_1,300,param_3,param_4,param_4);
  }
  return uVar1;
}

