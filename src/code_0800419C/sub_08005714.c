/* sub_08005714  (original: 0x08005714-0x08005740 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08005714(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 2) {
    if (*(int *)(param_1 + 0x10c) != 0) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else if (param_3 == 3) {
    if (*(int *)(param_1 + 0x10c) < 2) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}

