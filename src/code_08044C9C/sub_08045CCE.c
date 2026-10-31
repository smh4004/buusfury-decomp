/* sub_08045CCE  (original: 0x08045CCE-0x08045D3E in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 * volatile DAT_03005294;
extern undefined2 volatile DAT_04000102;
extern undefined2 volatile DAT_04000134;
extern undefined2 volatile DAT_04000128;
extern undefined2 volatile REG_TM0CNT;


void sub_08045CCE(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  
  DAT_04000134 = 0x8000;
  DAT_04000134 = 0x80a0;
  bVar1 = *(byte *)((int)DAT_03005294 + 10);
  puVar3 = &DAT_04000102 + (uint)bVar1 * 2;
  *puVar3 = 0;
  (&REG_TM0CNT)[(uint)bVar1 * 2] = 0;
  *puVar3 = 0x83;
  while ((ushort)(&REG_TM0CNT)[(uint)bVar1 * 2] < 0x12) {
    DAT_04000134 = 0x80a2;
  }
  *puVar3 = 3;
  puVar2 = DAT_03005294;
  DAT_04000134 = 0x80a0;
  DAT_04000128 = 0x5003;
  *DAT_03005294 = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined1 *)((int)puVar2 + 5) = 0;
  *(undefined1 *)((int)puVar2 + 6) = 0;
  *(undefined1 *)((int)puVar2 + 7) = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *(undefined1 *)((int)puVar2 + 9) = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  *(undefined2 *)((int)puVar2 + 0x12) = 0;
  *(undefined1 *)(puVar2 + 5) = 1;
  *(undefined1 *)((int)puVar2 + 0x15) = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  return;
}

