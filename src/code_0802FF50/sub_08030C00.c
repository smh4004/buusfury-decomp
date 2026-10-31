/* sub_08030C00  (original: 0x08030C00-0x08030C16 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08030C00(int param_1,int param_2,undefined1 param_3,char param_4)

{
  *(undefined1 *)(param_2 + 2) = param_3;
  *(char *)(param_2 + 3) = param_4 - (char)*(undefined4 *)(param_1 + 0x58);
  if (0xf < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x60) = 0x8030b6d;
  }
  return 0;
}

