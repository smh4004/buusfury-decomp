/* sub_0800A93C  (original: 0x0800A93C-0x0800A95A in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 71% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();


void sub_0800A93C(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = 0xff;
    *param_1 = 0;
    param_1[2] = param_2;
  }
  return;
}

