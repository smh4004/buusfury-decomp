/* sub_0803EE24  (original: 0x0803EE24-0x0803EE84 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E5AC();
extern undefined volatile gUnknown_087B6C84;


void sub_0803EE24(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087B6C84 + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5ad;
    sub_0803E5AC();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) - (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (iVar3 >> 0x18 < 1) {
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}

