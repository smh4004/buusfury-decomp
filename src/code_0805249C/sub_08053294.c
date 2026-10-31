/* sub_08053294  (original: 0x08053294-0x080532BE in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08053294(int *param_1,int *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_1[2] < *param_2) {
    param_1[2] = *param_2;
  }
  if (param_1[3] < param_2[1]) {
    param_1[3] = param_2[1];
  }
  return;
}

