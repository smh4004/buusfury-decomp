/* sub_0803EB6C  (original: 0x0803EB6C-0x0803EB96 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803E4E4();


void sub_0803EB6C(int *param_1)

{
  sub_0803E4E4();
  if ((*(byte *)(param_1 + 0x16) & 0x11) != 0) {
    *param_1 = (uint)*(byte *)((int)param_1 + 0x5e) << 0x16;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfb;
    *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfb;
  }
  return;
}

