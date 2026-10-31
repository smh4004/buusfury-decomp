/* sub_08036730  (original: 0x08036730-0x08036780 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08036730(int param_1)

{
  *(int *)(param_1 + 4) =
       (int)*(short *)(*(int *)(param_1 + 0x10) + 6) + *(short *)(*(int *)(param_1 + 0x10) + 10) + 7
       >> 1;
  return 1;
}

