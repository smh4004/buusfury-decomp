/* sub_080307FA  (original: 0x080307FA-0x0803084C in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087B6EEC;


void sub_080307FA(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_2 + 0x12);
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined1 *)(param_2 + 0x11) = 0;
    *(short *)(param_2 + 0x176) =
         (short)(-*(int *)(&gUnknown_087B6EEC + ((uVar1 << 0x18) >> 0x16)) >> 0xd);
  }
  else if (*(char *)(param_1 + 0xc) == '\x01') {
    *(short *)(param_2 + 0x176) =
         (short)(-*(int *)(&gUnknown_087B6EEC + ((uVar1 << 0x18) >> 0x16)) >> 0xb);
    if (uVar1 == 0x30) {
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    else if (uVar1 == 0x50) {
      *(undefined1 *)(param_2 + 0x11) = 2;
    }
  }
  *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) + 8 & 0x7f;
  return;
}

