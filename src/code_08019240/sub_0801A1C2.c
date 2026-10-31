/* sub_0801A1C2  (original: 0x0801A1C2-0x0801A1E4 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080134B8();
extern int volatile DAT_03001988;


undefined4 sub_0801A1C2(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*param_2 == 0) {
    if (DAT_03001988 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = sub_080134B8(param_1,0xa0,param_3,param_4,param_4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

