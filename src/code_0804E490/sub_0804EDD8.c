/* sub_0804EDD8  (original: 0x0804EDD8-0x0804EDF0 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0804EDD8(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x28c) + *(int *)(param_1 + 0x10) * -0x400 < 0 !=
      SBORROW4(*(int *)(param_2 + 0x28c),*(int *)(param_1 + 0x10) * 0x400)) {
    return 1;
  }
  return 0;
}

