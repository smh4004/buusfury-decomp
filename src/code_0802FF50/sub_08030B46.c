/* sub_08030B46  (original: 0x08030B46-0x08030B6C in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_08030B46(int param_1)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0x8030b25;
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = 0x8030b21;
  return;
}

