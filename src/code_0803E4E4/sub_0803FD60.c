/* sub_0803FD60  (original: 0x0803FD60-0x0803FD76 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0803FD60(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *param_2 * -0x400;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[1] * -0x400;
  return;
}

