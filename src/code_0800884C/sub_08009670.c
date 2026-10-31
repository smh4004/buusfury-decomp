/* sub_08009670  (original: 0x08009670-0x08009680 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08012664();
extern undefined4 volatile DAT_03002a64;


void sub_08009670(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08012664(&DAT_03002a64,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),param_4
               ,param_4);
  return;
}

