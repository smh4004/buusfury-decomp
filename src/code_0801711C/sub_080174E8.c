/* sub_080174E8  (original: 0x080174E8-0x080175FC in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 3/6 snapshots, 70% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D876();
extern int sub_0803D8A0();
extern int sub_0803E378();
extern int sub_0803D5B8();
extern undefined volatile DAT_03003e5c;
extern undefined volatile _0804920C;
extern undefined volatile gUnknown_08319488;
extern undefined volatile _0804AFF8;
extern undefined volatile gUnknown_0831947C;


undefined4 sub_080174E8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  switch(param_3) {
  case 0:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    uVar4 = *(undefined4 *)(param_1 + 0x114);
    uVar5 = *(undefined4 *)(param_1 + 0x120);
    uVar6 = sub_0803D5B8(0x124);
    puVar2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    puVar1 = (undefined4 *)uVar6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804AFF8;
      puVar1[0x45] = uVar4;
      puVar1[0x46] = uVar5;
      puVar2 = puVar1 + 0x47;
    }
    sub_0803D8A0(puVar1,puVar2);
    return 0;
  case 1:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(1);
    return 1;
  case 2:
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    iVar3 = *(int *)(param_1 + 0x120) + -2;
    *(int *)(param_1 + 0x120) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  default:
    break;
  case 3:
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    iVar3 = *(int *)(param_1 + 0x120) + 2;
    *(int *)(param_1 + 0x120) = iVar3;
    if (*(int *)(param_1 + 0x118) <= iVar3) {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x118) + -1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
    break;
  case 6:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(2);
    return 1;
  case 7:
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(3);
    return 1;
  }
  return 0;
}

