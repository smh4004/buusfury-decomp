/* sub_08004380  (original: 0x08004380-0x08004396 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_08004380(int param_1,uint param_2)

{
  param_1 = ((int)param_2 >> 3) + param_1;
  *(byte *)(param_1 + 0x55) = (byte)(1 << (param_2 & 7)) | *(byte *)(param_1 + 0x55);
  return;
}

