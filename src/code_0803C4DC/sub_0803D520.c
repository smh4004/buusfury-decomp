/* sub_0803D520  (original: 0x0803D520-0x0803D548 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_03003488;


void sub_0803D520(int param_1)

{
  if (DAT_03003488 == 0) {
    *(undefined2 *)(param_1 + 8) = 0;
  }
  else {
    *(short *)(param_1 + 8) = (short)(DAT_03003488 + -0x2000000 >> 2);
    *(short *)(DAT_03003488 + 10) = (short)(param_1 + -0x2000000 >> 2);
  }
  *(undefined2 *)(param_1 + 10) = 0;
  DAT_03003488 = param_1;
  return;
}

