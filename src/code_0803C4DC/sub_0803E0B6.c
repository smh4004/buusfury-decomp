/* sub_0803E0B6  (original: 0x0803E0B6-0x0803E152 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 7% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined1 volatile _03000868;


void sub_0803E0B6(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar1 = (uint)*(byte *)(param_1 + 4);
  if ((int)(uVar1 << 0x1f) < 0) {
    if ((int)(uVar1 << 0x1b) < 0) {
      iVar2 = (uint)*(byte *)((int)param_1 + 0x12) * (uint)*(byte *)(param_1 + 0xd);
      uVar5 = iVar2 * (0x40 - *(char *)((int)param_1 + 0x13)) >> 10;
      uVar3 = iVar2 * (*(char *)((int)param_1 + 0x13) + 0x40) >> 10;
      *(short *)(param_1 + 3) = (short)uVar5;
      *(short *)((int)param_1 + 0xe) = (short)uVar3;
      if ((uVar3 & 0xffff) == 0 && (uVar5 & 0xffff) == 0) {
        param_1[6] = 0x803e0b5;
      }
      else {
        param_1[6] = &_03000868;
      }
    }
    if ((int)(uVar1 << 0x1c) < 0) {
      puVar4 = (undefined4 *)param_1[10];
      param_1[2] = *puVar4;
      param_1[8] = (uint)*(ushort *)((int)puVar4 + 6) << 0xe;
      param_1[9] = (uint)*(ushort *)(puVar4 + 2) << 0xe;
      *(undefined2 *)(param_1 + 5) = *(undefined2 *)((int)puVar4 + 10);
      *(undefined1 *)((int)param_1 + 0x11) = *(undefined1 *)(puVar4 + 1);
    }
    if ((int)(uVar1 << 0x1d) < 0) {
      *param_1 = 0;
      *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfb;
    }
    if ((int)(uVar1 << 0x1e) < 0) {
      uVar1 = ((uint)*(ushort *)(param_1 + 5) * param_1[0xc] >> 0xe) * 0x1063 + 0x7ff >> 0xc;
      param_1[7] = uVar1;
      if ((int)((uint)*(byte *)((int)param_1 + 0x11) << 0x1d) < 0) {
        param_1[1] = -uVar1;
      }
      else {
        param_1[1] = uVar1;
      }
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

