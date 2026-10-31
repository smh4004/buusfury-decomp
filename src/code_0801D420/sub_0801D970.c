/* sub_0801D970  (original: 0x0801D970-0x0801D988 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0801D970(int param_1,undefined4 *param_2)

{
  param_2[1] = (*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x138)) * 0x10 + 0x24;
  *param_2 = 0x12;
  return 1;
}

