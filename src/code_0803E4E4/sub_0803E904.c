/* sub_0803E904  (original: 0x0803E904-0x0803E950 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 94% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E4E4();
extern int sub_0803E8BC();


void sub_0803E904(int param_1)

{
  byte bVar1;
  
  sub_0803E4E4();
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    if ((*(byte *)(param_1 + 0x58) & 0x11) != 0) {
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
    bVar1 = *(byte *)(param_1 + 0x5e);
    if ((bVar1 & 0xf) != 0) {
      *(byte *)(param_1 + 0x50) = (byte)(((uint)bVar1 << 0x1c) >> 0x1a);
    }
    if (((uint)bVar1 << 0x18) >> 0x1c != 0) {
      *(byte *)(param_1 + 0x4f) = bVar1 >> 4;
    }
    *(undefined4 *)(param_1 + 0x54) = 0x803e8bd;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    sub_0803E8BC(param_1);
  }
  return;
}

