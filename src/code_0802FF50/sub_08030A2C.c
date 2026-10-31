/* sub_08030A2C  (original: 0x08030A2C-0x08030A4C in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03000f94;


undefined4 sub_08030A2C(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (DAT_03000f94 << 0x1d < 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x24) >> 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    }
  }
  return 1;
}

