/* sub_08004E0C  (original: 0x08004E0C-0x08004E26 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _08049354;


void sub_08004E0C(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049354;
    param_1[1] = 0;
  }
  return;
}

