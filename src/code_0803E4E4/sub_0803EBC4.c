/* sub_0803EBC4  (original: 0x0803EBC4-0x0803EBF4 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803E4E4();


void sub_0803EBC4(int param_1)

{
  sub_0803E4E4();
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x5e);
  }
  *(undefined4 *)(param_1 + 0x54) = 0x803eb99;
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x4e) & 0xf;
  *(byte *)(param_1 + 0x4a) = (*(byte *)(param_1 + 0x4a) & 0xfc) + 2;
  return;
}

