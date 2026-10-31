/* sub_08052E48  (original: 0x08052E48-0x08052E60 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0802573C();
extern int sub_0803D63C();


void sub_08052E48(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0802573C(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

