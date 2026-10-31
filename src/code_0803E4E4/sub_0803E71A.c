/* sub_0803E71A  (original: 0x0803E71A-0x0803E738 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087B6A04;


void sub_0803E71A(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(&gUnknown_087B6A04 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar1;
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}

