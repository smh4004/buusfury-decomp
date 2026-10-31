/* sub_0803ECCA  (original: 0x0803ECCA-0x0803ED2A in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E5DA();
extern undefined volatile gUnknown_087B6A04;


void sub_0803ECCA(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087B6A04 + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
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
    *(undefined4 *)(param_1 + 0x54) = 0x803e5db;
    sub_0803E5DA();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) + (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (0x3f < iVar3 >> 0x18) {
    *(undefined1 *)(param_2 + 8) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}

