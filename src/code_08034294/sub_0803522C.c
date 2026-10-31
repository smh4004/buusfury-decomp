/* sub_0803522C  (original: 0x0803522C-0x08035274 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087B6EEC;


void sub_0803522C(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_2 + 0x12);
  *(undefined1 *)(param_2 + 0x11) = 0;
  if (0x7f < uVar2) {
    uVar1 = uVar2 - 0x80 & 0xffff;
    *(short *)(param_2 + 0x176) =
         (short)(-*(int *)(&gUnknown_087B6EEC + ((uVar1 << 0x18) >> 0x16)) >> 0xd);
    if (uVar1 < 0x40) {
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x11) = 2;
    }
  }
  *(short *)(param_2 + 0x12) = (short)(uVar2 + 8);
  if ((uVar2 + 8 & 0xffff) == 0x100) {
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  return;
}

