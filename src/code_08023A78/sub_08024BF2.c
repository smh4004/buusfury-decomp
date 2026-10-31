/* sub_08024BF2  (original: 0x08024BF2-0x08024C04 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_BLDCNT;


void sub_08024BF2(int param_1)

{
  if (*(char *)(param_1 + 5) != '\0') {
    REG_BLDCNT = 0x3f5f;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}

