/* sub_08052860  (original: 0x08052860-0x08052874 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _080493E4;


void sub_08052860(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

