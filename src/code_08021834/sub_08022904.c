/* sub_08022904  (original: 0x08022904-0x08022934 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08022904(ushort *param_1,undefined1 *param_2)

{
  *param_2 = 0;
  *(short *)(param_2 + 2) = (short)*(undefined4 *)(param_1 + 2);
  *(short *)(param_2 + 4) = (short)*(undefined4 *)(param_1 + 4);
  param_2[6] = (char)*(undefined4 *)(param_1 + 6);
  param_2[7] = (char)*(undefined4 *)(param_1 + 8);
  param_2[8] = (char)*(undefined4 *)(param_1 + 10);
  param_2[9] = (char)*(undefined4 *)(param_1 + 0xc);
  param_2[10] = 0x2d;
  param_2[0xb] = 1;
  param_2[0xc] = 7;
  param_2[0xd] = 0;
  *(uint *)(param_2 + 0x14) = (uint)*param_1;
  return;
}

