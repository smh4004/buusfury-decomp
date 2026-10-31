/* sub_0803EC5A  (original: 0x0803EC5A-0x0803ECA2 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E4E4();
extern int sub_0803E8BC();


void sub_0803EC5A(int param_1)

{
  byte bVar1;
  
  sub_0803E4E4();
  if ((*(byte *)(param_1 + 0x58) & 0x11) != 0) {
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x5e);
  if ((bVar1 & 0xf) != 0) {
    *(byte *)(param_1 + 0x50) = bVar1 & 0xf;
  }
  if (((uint)bVar1 << 0x18) >> 0x1c != 0) {
    *(byte *)(param_1 + 0x4f) = bVar1 >> 4;
  }
  *(undefined4 *)(param_1 + 0x54) = 0x803e8bd;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  sub_0803E8BC(param_1);
  return;
}

