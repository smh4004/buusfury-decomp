/* sub_0800C1E0  (original: 0x0800C1E0-0x0800C224 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0800C1E0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = 0;
  piVar1 = (int *)*param_2;
  do {
    piVar2 = piVar1;
    *piVar2 = ((uint)(iVar3 << 0x1c) >> 7 | 0x80006000) + 0x88;
    iVar5 = iVar3 * 0x10;
    iVar3 = iVar3 + 1;
    uVar6 = piVar2[1];
    uVar4 = (uint)*(ushort *)(param_1 + 0xc) + iVar5 & 0x3ff;
    piVar2[1] = uVar4 | uVar6 & 0xfffffc00;
    piVar2[1] = uVar4 | uVar6 & 0xfffff000 | (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    piVar1 = piVar2 + 2;
  } while (iVar3 < 7);
  piVar2[2] = 0x40e02088;
  uVar6 = piVar2[3];
  uVar4 = *(ushort *)(param_1 + 0xc) + 0x70 & 0x3ff;
  piVar2[3] = uVar4 | uVar6 & 0xfffffc00;
  piVar2[3] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar4 | uVar6 & 0xfffff000;
  *param_2 = piVar2 + 6;
  return 0;
}

