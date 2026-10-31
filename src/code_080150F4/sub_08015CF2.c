/* sub_08015CF2  (original: 0x08015CF2-0x08015D10 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08015BB8();


void sub_08015CF2(int param_1,undefined4 param_2)

{
  sub_08015BB8(param_2,param_1 + 0x20,param_1 + 0x30,*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x38));
  return;
}

