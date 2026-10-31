/* sub_08050A50  (original: 0x08050A50-0x08050A68 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08006618();
extern int sub_0803D63C();


void sub_08050A50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

