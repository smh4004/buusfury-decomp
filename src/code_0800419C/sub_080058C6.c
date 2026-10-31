/* sub_080058C6  (original: 0x080058C6-0x08005948 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804912C();
extern int sub_0803D876();
extern int __call_via_r1();
extern int sub_0803D5B8();
extern int sub_0803D8A0();
extern int volatile DAT_03001910;
extern undefined2 volatile REG_DISPCNT;
extern undefined volatile _0804920C;
extern undefined volatile _080496FC;


void sub_080058C6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(*param_1 + 0x24);
  __call_via_r1(param_1,iVar3 + *param_1,iVar3,param_4,param_4);
  iVar3 = param_1[0x43];
  iVar4 = param_1[0xbe];
  uVar5 = sub_0803D5B8(0x124);
  puVar2 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  puVar1 = (undefined4 *)uVar5;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804920C;
    puVar1[1] = 0;
    puVar1[0x43] = 0;
    puVar1[0x42] = 0;
    puVar1[0x44] = 0;
    *puVar1 = &_080496FC;
    puVar1[0x45] = iVar3;
    iVar3 = param_1[0xc0];
    puVar1[0x46] = param_1[0xbf];
    puVar1[0x47] = iVar3;
    puVar1[0x48] = iVar4;
    puVar2 = puVar1 + 0x49;
  }
  sub_0803D8A0(puVar1,puVar2);
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  REG_DISPCNT = 0;
  DAT_03001910 = param_1[0x43];
  sub_0803D876(2);
  return;
}

