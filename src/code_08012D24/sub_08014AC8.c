/* sub_08014AC8  (original: 0x08014AC8-0x08014BBC in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/4 snapshots, 17% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049144();
extern int sub_0803D876();
extern int sub_08015882();
extern int sub_0803D8A0();
extern int sub_0803E378();
extern int sub_0803D850();
extern int sub_08014188();
extern int sub_0803D5B8();
extern int sub_080335BC();
extern int volatile DAT_0300225c;
extern undefined volatile DAT_03002260;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_0877CCC4;
extern undefined volatile _08049264;
extern undefined volatile _0804920C;
extern undefined volatile gUnknown_08319488;
extern undefined volatile _08049588;


undefined4 sub_08014AC8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x10c) == 3) {
      sub_080335BC(0,0);
      sub_0803D8A0();
      sub_08015882();
      sub_08049144(0x5000000,0x805652c,0x200);
      sub_08049144(0x5000200,0x805652c,0x200);
    }
    else if (*(int *)(param_1 + 0x10c) == 4) {
      sub_0803D876(1);
      puVar1 = (undefined4 *)sub_0803D5B8(0x10);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 1;
        *puVar1 = &_08049264;
        puVar1[3] = 0;
        puVar1[2] = &gUnknown_0877CCC4;
      }
      iVar2 = DAT_0300225c * 4;
      DAT_0300225c = DAT_0300225c + 1;
      *(undefined4 **)(&DAT_03002260 + iVar2) = puVar1;
    }
    return 1;
  }
  if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(1);
    return 1;
  }
  if (param_3 == 6) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar1 = (undefined4 *)sub_0803D5B8(0x118);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_08049588;
      puVar1[0x45] = 0;
    }
    sub_0803D850();
    return 1;
  }
  if (param_3 == 7) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_08014188(0);
    sub_0803D850();
    return 1;
  }
  return 0;
}

