/* sub_0801F7D8  (original: 0x0801F7D8-0x0801F7F8 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0801F7D8(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x114) == '\0') {
    param_2[1] = *(int *)(param_1 + 0x124) * 0xe + 0x2e;
    *param_2 = 0x12;
  }
  else if (*(char *)(param_1 + 0x114) == '\x01') {
    param_2[1] = *(int *)(param_1 + 0x128) * 0xe + 0x3c;
    *param_2 = 0x88;
  }
  return 1;
}

