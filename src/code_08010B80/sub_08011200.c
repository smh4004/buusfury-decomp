/* sub_08011200  (original: 0x08011200-0x0801124C in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 84% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08011200(undefined1 *param_1,int param_2)

{
  if ((byte)param_1[param_2 * 10 + 0x69d] == 0xff) {
    *param_1 = param_1[param_2 * 10 + 0x69c];
  }
  else {
    param_1[(uint)(byte)param_1[param_2 * 10 + 0x69d] * 10 + 0x69c] = param_1[param_2 * 10 + 0x69c];
  }
  if ((byte)param_1[param_2 * 10 + 0x69c] != 0xff) {
    param_1[(uint)(byte)param_1[param_2 * 10 + 0x69c] * 10 + 0x69d] = param_1[param_2 * 10 + 0x69d];
  }
  return;
}

