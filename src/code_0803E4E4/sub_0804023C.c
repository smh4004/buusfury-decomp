/* sub_0804023C  (original: 0x0804023C-0x08040284 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, mem@03000000.
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03000f94;


void sub_0804023C(byte *param_1,ushort param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)(param_1 + 2) ^ param_2;
  uVar3 = param_2 & uVar2;
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 2) & uVar2;
  *(ushort *)(param_1 + 2) = param_2;
  if (uVar3 != 0) {
    *(ushort *)(param_1 + (uint)*param_1 * 2 + 8) = uVar3;
    *(undefined4 *)(param_1 + (uint)*param_1 * 4 + 0x88) = DAT_03000f94;
    bVar1 = *param_1;
    *param_1 = bVar1 + 1;
    if (0x3f < (byte)(bVar1 + 1)) {
      *param_1 = 0;
    }
  }
  return;
}

