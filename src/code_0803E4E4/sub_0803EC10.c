/* sub_0803EC10  (original: 0x0803EC10-0x0803EC2A in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_0803EC10(int param_1)

{
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_1 + 0x5e);
  *(undefined4 *)(param_1 + 0x54) = 0x803ebf9;
  *(byte *)(param_1 + 0x4a) = (*(byte *)(param_1 + 0x4a) & 0xfc) + 2;
  return;
}

