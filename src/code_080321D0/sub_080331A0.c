/* sub_080331A0  (original: 0x080331A0-0x080331B4 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_080331A0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_2 + 0x14) == *(int *)(param_1 + 8))) {
    return 0;
  }
  return 1;
}

