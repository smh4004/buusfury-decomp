/* sub_08030584  (original: 0x08030584-0x080305AA in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08030584(undefined4 param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  
  uVar2 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar2;
  if (7 < uVar2) {
    *(undefined2 *)(param_2 + 0x12) = 0;
    bVar1 = *(char *)(param_2 + 0x11) + 1;
    *(byte *)(param_2 + 0x11) = bVar1;
    if (5 < bVar1) {
      *(undefined1 *)(param_2 + 0x11) = 4;
    }
  }
  return;
}

