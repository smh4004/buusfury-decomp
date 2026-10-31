/* sub_08019CC4  (original: 0x08019CC4-0x08019D00 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 58% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_08019CC4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == 0xb) {
    param_1[5] = 0;
  }
  else if (param_2 == 0xc) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1,0xc,param_4);
  }
  else if (((param_2 == 0x11) || (param_2 == 0x12)) && (param_1[7] == param_3)) {
    param_1[7] = 0;
  }
  return 0;
}

