/* sub_08034D86  (original: 0x08034D86-0x08034DE8 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern undefined volatile gUnknown_087B6EEC;


void sub_08034D86(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_2 + 0x12);
  *(undefined1 *)(param_2 + 0x11) = 0;
  if (uVar1 == 0) {
    sub_0800ECDA(param_2,0x12);
  }
  else if (uVar1 == 0xc0) {
    sub_0800ECDA(param_2,0x13);
  }
  if (0x7f < uVar1) {
    uVar1 = uVar1 - 0x80 & 0xffff;
    if (uVar1 < 0x80) {
      *(short *)(param_2 + 0x176) =
           (short)(-*(int *)(&gUnknown_087B6EEC + ((uVar1 << 0x18) >> 0x16)) >> 0xb);
    }
    else {
      *(undefined2 *)(param_2 + 0x176) = 0;
    }
    if (uVar1 < 0x40) {
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    else {
      *(byte *)(param_2 + 0x11) = (byte)((uVar1 << 0x1a) >> 0x1f);
    }
  }
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 8;
  return;
}

