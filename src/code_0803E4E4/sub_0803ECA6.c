/* sub_0803ECA6  (original: 0x0803ECA6-0x0803ECC2 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803E4E4();


void sub_0803ECA6(int param_1)

{
  sub_0803E4E4();
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_1 + 0x5e);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x5e);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  return;
}

