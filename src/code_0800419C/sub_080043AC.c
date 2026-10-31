/* sub_080043AC  (original: 0x080043AC-0x080043C2 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080043AC(int param_1,uint param_2)

{
  param_1 = ((int)param_2 >> 3) + param_1;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) ^ (byte)(1 << (param_2 & 7));
  return;
}

