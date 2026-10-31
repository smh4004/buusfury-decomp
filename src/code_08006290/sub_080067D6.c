/* sub_080067D6  (original: 0x080067D6-0x080067F4 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_080067D6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1[0x44] == 0) {
    param_1[0x44] = 1;
    iVar1 = *(int *)(*param_1 + 0x24);
    __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  }
  return;
}

