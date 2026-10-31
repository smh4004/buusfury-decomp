/* sub_08005578  (original: 0x08005578-0x08005632 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@02000000.
 */
#include "ghidra_types.h"
extern int sub_0803DADA();
extern int sub_0803DCC4();
extern int sub_0805313C();
extern int sub_0803DC96();
extern undefined4 volatile gUnknown_0807012C;
extern undefined volatile gUnknown_0806E050;
extern undefined volatile gUIStringPtrs;


void sub_08005578(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = 2;
  if (*(int *)(param_1 + 0x10c) == param_3) {
    uVar1 = *(undefined1 *)(param_1 + 0x124);
  }
  param_2[3] = uVar1;
  *(undefined **)(param_2 + 0xc) = &gUnknown_0806E050;
  *param_2 = 0;
  *(int *)(param_2 + 8) = param_4 + 8;
  *(undefined4 *)(param_2 + 4) = 0x10;
  sub_0803DC96(param_2,L"Game %d",param_3 + 1);
  *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
  *(int *)(param_2 + 8) = param_4 + 0xe;
  *(undefined4 *)(param_2 + 4) = 100;
  if (*(int *)(param_1 + 300 + param_3 * 0x80) == 0) {
    sub_0803DADA(param_2,*(undefined4 *)(&gUIStringPtrs + *(int *)(param_1 + 0x118) * 4));
  }
  else {
    iVar3 = param_3 * 0x80 + param_1 + 300;
    sub_0803DCC4(param_2,0x6c,*(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(iVar3 + 4) * 4));
    *(int *)(param_2 + 8) = param_4 + 0x1b;
    *(undefined4 *)(param_2 + 4) = 100;
    sub_0803DCC4(param_2,0x6c,*(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(iVar3 + 6) * 4));
    uVar2 = *(undefined4 *)(iVar3 + 8);
    *(int *)(param_2 + 8) = param_4 + 0x28;
    *(undefined4 *)(param_2 + 4) = 100;
    uVar4 = sub_0805313C(uVar2);
    sub_0803DC96(param_2,L"%d:%02d",(int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
  }
  return;
}

