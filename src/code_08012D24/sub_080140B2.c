/* sub_080140B2  (original: 0x080140B2-0x080140D2 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_080140B2(int param_1,undefined4 *param_2)

{
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) != *(int *)(param_1 + 8)) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  param_2[1] = *(int *)(param_1 + 0x38) + -3;
  return 1;
}

