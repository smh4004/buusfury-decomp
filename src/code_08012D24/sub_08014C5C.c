/* sub_08014C5C  (original: 0x08014C5C-0x08014D56 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 60% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803FFE8();
extern int sub_08014124();
extern int sub_08013E64();
extern int sub_0800666C();
extern int sub_0800664E();
extern undefined4 volatile gUnknown_0807012C;
extern undefined volatile gUIStringPtrs;


void sub_08014C5C(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  iVar4 = param_3;
  sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x114));
  *(undefined4 *)(param_1 + 0x114) = 0;
  sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x118));
  *(undefined4 *)(param_1 + 0x118) = 0;
  sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = 0;
  sub_0800666C(param_1,*(undefined4 *)(param_1 + 0x124));
  *(undefined4 *)(param_1 + 0x124) = 0;
  iVar2 = 0xc;
  if (param_2 != 0) {
    uVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0,iVar3,param_2,iVar4);
    *(undefined4 *)(param_1 + 0x114) = uVar1;
    sub_0800664E(param_1,uVar1);
    uVar1 = sub_08014124(0,param_1,0x1c,0x90,*(undefined4 *)(&gUIStringPtrs + param_2 * 4),5,0,
                         &gUnknown_0807012C);
    *(undefined4 *)(param_1 + 0x120) = uVar1;
    sub_0800664E(param_1,uVar1);
    iVar2 = sub_0803FFE8(&gUnknown_0807012C,*(undefined4 *)(&gUIStringPtrs + param_2 * 4));
    iVar2 = iVar2 + 0x20;
  }
  if (param_3 != 0) {
    uVar1 = sub_08013E64(0,param_1,1,iVar2,0x84,1,1,0);
    *(undefined4 *)(param_1 + 0x118) = uVar1;
    sub_0800664E(param_1,uVar1);
    uVar1 = sub_08014124(0,param_1,iVar2 + 0x10,0x90,*(undefined4 *)(&gUIStringPtrs + param_3 * 4),5
                         ,0,&gUnknown_0807012C);
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    sub_0800664E(param_1,uVar1);
  }
  return;
}

