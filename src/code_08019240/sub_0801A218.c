/* sub_0801A218  (original: 0x0801A218-0x0801A23A in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 81% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080134B8();
extern int volatile DAT_03002c04;


undefined4 sub_0801A218(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == 0) {
    uVar1 = 0;
  }
  else if (DAT_03002c04 == 0) {
    uVar1 = sub_080134B8(param_1,0x28,param_3,param_4,param_4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

