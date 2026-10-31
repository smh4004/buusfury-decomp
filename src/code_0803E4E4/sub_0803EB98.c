/* sub_0803EB98  (original: 0x0803EB98-0x0803EBC4 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, r0-void.
 */
#include "ghidra_types.h"


void sub_0803EB98(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x52) + -1;
  *(char *)(param_1 + 0x52) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 5;
    *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x4e) & 0xf;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 4;
  }
  return;
}

