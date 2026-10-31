/* sub_08047018  (original: 0x08047018-0x08047040 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08047018(int param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  if (param_2 < param_3) {
    do {
      __call_via_r2(param_1,param_2,param_5);
      param_2 = param_2 + param_4;
      param_1 = param_1 + param_4;
    } while (param_2 < param_3);
  }
  return;
}

