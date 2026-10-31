/* sub_080229B0  (original: 0x080229B0-0x08022AF6 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08046CBC();
extern int sub_08013378();
extern undefined volatile gUnknown_086B82EC;


void sub_080229B0(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  
  sub_08046CBC(param_2,0x68);
  *param_2 = 2;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  iVar3 = sub_08013378(*param_1);
  do {
    *(int *)(param_2 + 0x24) = iVar3;
  } while (*(int *)(param_2 + 0x24) != iVar3);
  iVar3 = 0;
  param_2[0xc] = param_1[1];
  param_2[0x15] = param_1[2];
  do {
    param_2[iVar3 + 0xd] = param_1[iVar3 + 3];
    cVar1 = param_1[iVar3 + 9];
    do {
      param_2[iVar3 * 2 + 0x2e] = cVar1;
    } while (param_2[iVar3 * 2 + 0x2e] != cVar1);
    do {
      param_2[iVar3 * 2 + 0x2f] = cVar1;
    } while (param_2[iVar3 * 2 + 0x2f] != cVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  sVar2 = *(short *)(param_1 + 0x10);
  do {
    *(short *)(param_2 + 0x16) = sVar2;
  } while (*(short *)(param_2 + 0x16) != sVar2);
  do {
    *(short *)(param_2 + 0x18) = sVar2;
  } while (*(short *)(param_2 + 0x18) != sVar2);
  sVar2 = *(short *)(param_1 + 0x12);
  do {
    *(short *)(param_2 + 0x1a) = sVar2;
  } while (*(short *)(param_2 + 0x1a) != sVar2);
  do {
    *(short *)(param_2 + 0x1c) = sVar2;
  } while (*(short *)(param_2 + 0x1c) != sVar2);
  cVar1 = param_1[0x14];
  do {
    param_2[0x28] = cVar1;
  } while (param_2[0x28] != cVar1);
  cVar1 = param_1[0x15];
  do {
    param_2[0x29] = cVar1;
  } while (param_2[0x29] != cVar1);
  cVar1 = param_1[0x16];
  do {
    param_2[0x2a] = cVar1;
  } while (param_2[0x2a] != cVar1);
  cVar1 = param_1[0x17];
  do {
    param_2[0x2b] = cVar1;
  } while (param_2[0x2b] != cVar1);
  param_2[0x14] = param_1[0xf];
  iVar3 = 0;
  do {
    sVar2 = *(short *)(param_1 + iVar3 * 2 + 0x18);
    do {
      *(int *)(param_2 + iVar3 * 4 + 0x3c) = (int)sVar2;
    } while (*(int *)(param_2 + iVar3 * 4 + 0x3c) != (int)sVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)(byte)param_2[0x14] * 0x18] << 0x1e) < 0) {
    sVar2 = *(short *)(param_2 + 0x1c);
    do {
      *(short *)(param_2 + 0x20) = sVar2;
    } while (*(short *)(param_2 + 0x20) != sVar2);
  }
  if (((&gUnknown_086B82EC)[(uint)(byte)param_2[0x14] * 0x18] & 1) != 0) {
    sVar2 = *(short *)(param_2 + 0x1c);
    do {
      *(short *)(param_2 + 0x1e) = sVar2;
    } while (*(short *)(param_2 + 0x1e) != sVar2);
  }
  return;
}

