/* sub_080134B8  (original: 0x080134B8-0x08013504 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 57% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_086B82EC;


undefined4 sub_080134B8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 * (uint)*(byte *)(param_1 + 0x56)) >> 4;
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1e) < 0) {
    if (iVar1 <= (int)(uint)*(ushort *)(param_1 + 0x20)) {
      return 1;
    }
    return 0;
  }
  if (((&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] & 1) == 0) {
    if (iVar1 <= *(short *)(param_1 + 0x1a)) {
      return 1;
    }
    return 0;
  }
  if (iVar1 <= (int)(uint)*(ushort *)(param_1 + 0x1e)) {
    return 1;
  }
  return 0;
}

