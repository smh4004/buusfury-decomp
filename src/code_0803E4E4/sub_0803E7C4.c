/* sub_0803E7C4  (original: 0x0803E7C4-0x0803E806 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087B6C84;


void sub_0803E7C4(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(&gUnknown_087B6C84 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar3;
  *(uint *)(param_1 + 0x30) = uVar3;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar3 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf4;
  }
  return;
}

