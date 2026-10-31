/* sub_08027020  (original: 0x08027020-0x08027154 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 68% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern ushort volatile DAT_03003304;
extern ushort volatile DAT_03003306;
extern ushort volatile DAT_03003302;
extern undefined volatile DAT_06010000;


void sub_08027020(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((DAT_03003304 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc24) = 1;
    *(undefined4 *)(param_1 + 0xc20) = 0;
  }
  if ((DAT_03003306 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc24) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc20);
  if (*(int *)(param_1 + 0xc24) == 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)(param_1 + 0xc20) = iVar2;
      if (-1 < iVar2 * -0x80000000) {
        sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                     (iVar2 >> 1) * 0x400 + param_1 + 0x10,0x400);
      }
    }
  }
  else if (iVar2 < 4) {
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 0xc20) = iVar2;
    if (-1 < iVar2 * -0x80000000) {
      sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                   (iVar2 >> 1) * 0x400 + param_1 + 0x10,0x400);
    }
  }
  piVar1 = (int *)(param_1 + 0xc18);
  if ((int)((uint)DAT_03003302 << 0x1a) < 0) {
    *piVar1 = *piVar1 + -0x80;
  }
  if ((int)((uint)DAT_03003302 << 0x1b) < 0) {
    *piVar1 = *piVar1 + 0x80;
  }
  piVar4 = (int *)(param_1 + 0xc1c);
  if ((int)((uint)DAT_03003302 << 0x19) < 0) {
    *piVar4 = *piVar4 + -0x80;
  }
  if ((int)((uint)DAT_03003302 << 0x18) < 0) {
    *piVar4 = *piVar4 + 0x80;
  }
  piVar3 = (int *)(param_1 + 0xc10);
  *piVar3 = *piVar3 + *piVar1;
  *(int *)(param_1 + 0xc14) = *(int *)(param_1 + 0xc14) + *(int *)(param_1 + 0xc1c);
  iVar2 = *(int *)(param_1 + 0xc18) * 3;
  *(int *)(param_1 + 0xc18) = (int)(((uint)(iVar2 >> 0x1f) >> 0x1e) + iVar2) >> 2;
  iVar2 = *(int *)(param_1 + 0xc1c) * 3;
  *(int *)(param_1 + 0xc1c) = (int)(((uint)(iVar2 >> 0x1f) >> 0x1e) + iVar2) >> 2;
  if (*piVar3 < 0x1000) {
    *piVar3 = 0x1000;
    *piVar1 = 0;
  }
  if (0xe000 < *piVar3) {
    *piVar3 = 0xe000;
    *piVar1 = 0;
  }
  piVar1 = (int *)(param_1 + 0xc14);
  if (*piVar1 < 0x1000) {
    *piVar1 = 0x1000;
    *piVar4 = 0;
  }
  if (0x9000 < *piVar1) {
    *piVar1 = 0x9000;
    *piVar4 = 0;
  }
  return;
}

