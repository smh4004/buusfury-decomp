/* sub_08013C66  (original: 0x08013C66-0x08013DD6 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08013C02();
extern int sub_080046AE();
extern uint volatile DAT_03002b70;
extern uint volatile DAT_03002b74;
extern uint volatile DAT_03002b78;
extern uint volatile DAT_03002b7c;
extern uint volatile DAT_03002b80;
extern undefined2 volatile DAT_03002b60;
extern undefined2 volatile DAT_03002b62;
extern undefined2 volatile DAT_03002b64;
extern undefined2 volatile DAT_03002b66;
extern undefined2 volatile DAT_03002b68;
extern undefined1 volatile DAT_03002b5d;
extern undefined1 volatile DAT_03002b5e;
extern undefined2 volatile DAT_03002b6a;
extern undefined2 volatile DAT_03002b6c;
extern undefined1 volatile DAT_03002b5c;
extern undefined1 volatile DAT_03002b84;
extern undefined1 volatile DAT_03001068;
extern undefined volatile gEquipmentTable;


/* WARNING: Restarted to delay deadcode elimination for space: ram */

void sub_08013C66(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  DAT_03002b70 = (uint)*(byte *)(param_1 + 0x28);
  DAT_03002b74 = (uint)*(byte *)(param_1 + 0x29);
  DAT_03002b78 = (uint)*(byte *)(param_1 + 0x2a);
  DAT_03002b7c = (uint)*(byte *)(param_1 + 0x2a);
  DAT_03002b80 = (uint)*(byte *)(param_1 + 0x2b);
  DAT_03002b60 = 0x100;
  DAT_03002b62 = 0x100;
  DAT_03002b64 = 0;
  DAT_03002b66 = 0x100;
  DAT_03002b68 = 0x1000;
  DAT_03002b5d = 0x10;
  DAT_03002b5e = 0x10;
  DAT_03002b6a = 0x4000;
  DAT_03002b6c = 0;
  DAT_03002b5c = 0;
  DAT_03002b84 = 0;
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  do {
    sub_08013C02(param_1,&gEquipmentTable + *(int *)(iVar4 * 4 + param_1 + 0x3c) * 0x2c);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  sub_080046AE(&DAT_03001068,&DAT_03002b5c);
  uVar1 = DAT_03002b70;
  puVar2 = (ushort *)(param_1 + 0x4c);
  if ((int)DAT_03002b70 < 0) {
    do {
      *puVar2 = 0;
    } while (*puVar2 != 0);
  }
  else {
    uVar3 = DAT_03002b70 & 0xffff;
    do {
      *puVar2 = (ushort)uVar1;
    } while (*puVar2 != uVar3);
  }
  uVar1 = DAT_03002b74;
  puVar2 = (ushort *)(param_1 + 0x4e);
  if ((int)DAT_03002b74 < 0) {
    do {
      *puVar2 = 0;
    } while (*puVar2 != 0);
  }
  else {
    uVar3 = DAT_03002b74 & 0xffff;
    do {
      *puVar2 = (ushort)uVar1;
    } while (*puVar2 != uVar3);
  }
  uVar1 = DAT_03002b78;
  puVar2 = (ushort *)(param_1 + 0x50);
  if ((int)DAT_03002b78 < 0) {
    do {
      *puVar2 = 0;
    } while (*puVar2 != 0);
  }
  else {
    uVar3 = DAT_03002b78 & 0xffff;
    do {
      *puVar2 = (ushort)uVar1;
    } while (*puVar2 != uVar3);
  }
  uVar1 = DAT_03002b7c;
  puVar2 = (ushort *)(param_1 + 0x52);
  if ((int)DAT_03002b7c < 0) {
    do {
      *puVar2 = 0;
    } while (*puVar2 != 0);
  }
  else {
    uVar3 = DAT_03002b7c & 0xffff;
    do {
      *puVar2 = (ushort)uVar1;
    } while (*puVar2 != uVar3);
  }
  uVar1 = DAT_03002b80;
  puVar2 = (ushort *)(param_1 + 0x54);
  if ((int)DAT_03002b80 < 0) {
    do {
      *puVar2 = 0;
    } while (*puVar2 != 0);
  }
  else {
    uVar3 = DAT_03002b80 & 0xffff;
    do {
      *puVar2 = (ushort)uVar1;
    } while (*puVar2 != uVar3);
  }
  *(undefined2 *)(param_1 + 0x58) = DAT_03002b60;
  *(undefined2 *)(param_1 + 0x5a) = DAT_03002b62;
  *(undefined2 *)(param_1 + 0x5c) = DAT_03002b64;
  *(undefined2 *)(param_1 + 0x5e) = DAT_03002b66;
  *(undefined2 *)(param_1 + 0x60) = DAT_03002b68;
  *(undefined1 *)(param_1 + 0x56) = DAT_03002b5d;
  *(undefined1 *)(param_1 + 0x57) = DAT_03002b5e;
  *(undefined2 *)(param_1 + 0x62) = DAT_03002b6a;
  *(undefined2 *)(param_1 + 100) = DAT_03002b6c;
  *(undefined1 *)(param_1 + 0x66) = DAT_03002b5c;
  *(undefined1 *)(param_1 + 0x67) = DAT_03002b84;
  return;
}

