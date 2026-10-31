/* sub_08003A74  (original: 0x08003A74-0x08003B48 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801064C();
extern int volatile DAT_03001c34;
extern byte volatile DAT_03001068;
extern int volatile DAT_03001554;
extern int volatile DAT_03001550;
extern int volatile DAT_0300154c;
extern int volatile DAT_03001548;
extern int volatile DAT_03001544;
extern undefined1 volatile DAT_03001558;
extern undefined volatile DAT_03001588;
extern undefined volatile DAT_03001589;
extern undefined volatile DAT_0300158a;
extern undefined volatile DAT_0300158b;


void sub_08003A74(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar2 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  iVar3 = param_1[iVar4 + -1];
  *param_1 = iVar4 + -3;
  iVar5 = param_1[iVar4 + -2];
  *param_1 = iVar4 + -4;
  iVar6 = param_1[iVar4 + -3];
  *param_1 = iVar4 + -5;
  if (param_1[iVar4 + -4] == 0) {
    iVar4 = (uint)DAT_03001068 * 0x68;
    pbVar1 = &DAT_03001588 + iVar4;
    uVar7 = (uint)*pbVar1 + iVar6;
    do {
      *pbVar1 = (byte)uVar7;
    } while ((uint)*pbVar1 != (uVar7 & 0xff));
    pbVar1 = &DAT_03001589 + iVar4;
    uVar7 = (uint)*pbVar1 + iVar5;
    do {
      *pbVar1 = (byte)uVar7;
    } while ((uint)*pbVar1 != (uVar7 & 0xff));
    pbVar1 = &DAT_0300158a + iVar4;
    uVar7 = (uint)*pbVar1 + iVar3;
    do {
      *pbVar1 = (byte)uVar7;
    } while ((uint)*pbVar1 != (uVar7 & 0xff));
    pbVar1 = &DAT_0300158b + iVar4;
    uVar7 = (uint)*pbVar1 + iVar2;
    do {
      *pbVar1 = (byte)uVar7;
    } while ((uint)*pbVar1 != (uVar7 & 0xff));
  }
  else {
    DAT_03001544 = param_1[iVar4 + -4] * 0x3c;
    DAT_03001558 = 0;
    DAT_03001548 = iVar6;
    DAT_0300154c = iVar5;
    DAT_03001550 = iVar3;
    DAT_03001554 = iVar2;
  }
  if (DAT_03001c34 != 0) {
    sub_0801064C();
  }
  return;
}

