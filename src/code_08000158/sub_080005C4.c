/* sub_080005C4  (original: 0x080005C4-0x080005DC in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 91% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_0300155c;


void sub_080005C4(int param_1)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  DAT_0300155c = param_1;
  return;
}

