/* sub_0803E68C  (original: 0x0803E68C-0x0803E6AA in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087B6C84;


void sub_0803E68C(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(&gUnknown_087B6C84 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar1;
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}

