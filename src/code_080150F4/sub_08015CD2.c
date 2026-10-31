/* sub_08015CD2  (original: 0x08015CD2-0x08015CF2 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08015CD2(int param_1,undefined4 *param_2)

{
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) != *(int *)(param_1 + 8)) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = *(int *)(param_1 + 0x34) + -3;
  return 1;
}

