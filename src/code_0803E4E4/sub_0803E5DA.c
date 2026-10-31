/* sub_0803E5DA  (original: 0x0803E5DA-0x0803E608 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0803E5DA(int param_1)

{
  int iVar1;
  
  iVar1 = ((uint)*(byte *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar1 >> 0x18);
  if (0x3f < iVar1 >> 0x18) {
    *(undefined1 *)(param_1 + 0x48) = 0x40;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfc;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  return;
}

