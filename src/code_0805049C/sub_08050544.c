/* sub_08050544  (original: 0x08050544-0x08050568 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _08049EFC;


void sub_08050544(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049EFC;
    param_1[1] = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

