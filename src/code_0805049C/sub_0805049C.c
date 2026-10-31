/* sub_0805049C  (original: 0x0805049C-0x080504B2 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 60% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();


void sub_0805049C(int param_1)

{
  if ((param_1 != 0) || (param_1 = sub_0803D5B8(0x80), param_1 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

