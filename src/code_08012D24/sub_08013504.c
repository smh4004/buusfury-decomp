/* sub_08013504  (original: 0x08013504-0x08013598 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 44% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_086B82EC;


void sub_08013504(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1e) < 0) {
    if ((int)(uint)*(ushort *)(param_1 + 0x20) < (int)param_2) {
      do {
        *(undefined2 *)(param_1 + 0x20) = 0;
      } while (*(short *)(param_1 + 0x20) != 0);
    }
    else {
      uVar1 = (uint)*(ushort *)(param_1 + 0x20) - (param_2 & 0xffff);
      do {
        *(short *)(param_1 + 0x20) = (short)uVar1;
      } while ((uint)*(ushort *)(param_1 + 0x20) != (uVar1 & 0xffff));
    }
  }
  else if (((&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] & 1) == 0) {
    if ((int)*(short *)(param_1 + 0x1a) < (int)param_2) {
      do {
        *(undefined2 *)(param_1 + 0x1a) = 0;
      } while (*(short *)(param_1 + 0x1a) != 0);
    }
    else {
      iVar2 = (*(ushort *)(param_1 + 0x1a) - param_2) * 0x10000;
      do {
        *(short *)(param_1 + 0x1a) = (short)((uint)iVar2 >> 0x10);
      } while ((int)*(short *)(param_1 + 0x1a) != iVar2 >> 0x10);
    }
  }
  else if ((int)(uint)*(ushort *)(param_1 + 0x1e) < (int)param_2) {
    do {
      *(undefined2 *)(param_1 + 0x1e) = 0;
    } while (*(short *)(param_1 + 0x1e) != 0);
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x1e) - (param_2 & 0xffff);
    do {
      *(short *)(param_1 + 0x1e) = (short)uVar1;
    } while ((uint)*(ushort *)(param_1 + 0x1e) != (uVar1 & 0xffff));
  }
  return;
}

