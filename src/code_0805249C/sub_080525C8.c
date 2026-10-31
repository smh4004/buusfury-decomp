/* sub_080525C8  (original: 0x080525C8-0x080525E0 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 2/2 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800EC34();
extern int sub_0803D63C();


void sub_080525C8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800EC34(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

