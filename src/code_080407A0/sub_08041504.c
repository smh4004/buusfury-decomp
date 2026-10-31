/* sub_08041504  (original: 0x08041504-0x0804151A in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080430FE();
extern undefined1 volatile DAT_03004b2d;
extern byte volatile DAT_03005218;
extern char volatile DAT_03004b30;
extern char volatile DAT_03004cca;
extern byte volatile DAT_03005219;
extern byte volatile DAT_03004b2c;
extern char volatile DAT_0300521b;
extern undefined1 volatile DAT_03004b31;
extern int volatile DAT_0300525c;
extern byte volatile DAT_03004b42;
extern undefined4 volatile DAT_03005268;
extern undefined volatile gUnknown_087B76F8;
extern undefined2 volatile REG_TM2CNT;


undefined4 sub_08041504(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  DAT_03004b2d = 0;
  sVar1 = REG_TM2CNT;
  sub_080430FE(*(undefined2 *)(int)sVar1);
  if ((DAT_03005218 == 6) && (DAT_03004b30 != '\0')) {
    DAT_03005218 = 7;
  }
  if (DAT_03005218 == 0xb) {
    sub_08042B34();
    DAT_03005218 = 0xc;
    return 1;
  }
  if (DAT_03005218 < 0xc) {
    switch(DAT_03005218) {
    case 1:
      sub_08042B0A(param_1 + 4);
      DAT_03005218 = 2;
      break;
    case 5:
      iVar2 = sub_08042B3C(0,0,0x78,&gUnknown_087B76F8,param_4);
      if (iVar2 == 0) {
        DAT_03004b2d = 0;
        DAT_03005218 = 6;
      }
      break;
    case 6:
      sub_080414AC(param_1,DAT_03004b2d);
      return 1;
    case 7:
      iVar2 = sub_08042BF8(*(undefined2 *)((uint)DAT_03004b42 * 0x20 + DAT_0300525c + 0x14),0x78);
      if (iVar2 == 0) {
        DAT_03005218 = 8;
        return 1;
      }
      DAT_03005218 = 5;
      return 1;
    case 9:
      sub_08042CE6(0);
      return 1;
    }
  }
  else {
    if (DAT_03005218 == 0x25) {
      sVar1 = *(short *)((&DAT_03005268)[DAT_03004b2c] + 0x34);
      if (sVar1 == 0x46) {
        sub_080446A8(8);
        if (DAT_0300521b == '\0') {
          return 1;
        }
        DAT_03004b31 = 2;
        return 1;
      }
      if ((sVar1 != 0x47) && (sVar1 != 0x48)) {
        return 1;
      }
      sub_080446A8(8);
      DAT_03005218 = 0x3f;
      DAT_03005219 = 0x33;
      return 1;
    }
    if (DAT_03005218 < 0x26) {
      if ((((DAT_03005218 != 0xc) && (DAT_03005218 != 0xd)) && (DAT_03005218 != 0xe)) &&
         ((DAT_03005218 == 0x10 && (DAT_03004cca == '\0')))) {
        sub_080444EE(*(byte *)(DAT_0300525c + 3) | *(byte *)(DAT_0300525c + 2));
        sub_0804389E();
      }
    }
    else {
      if (DAT_03005218 == 0x33) {
        if (*(char *)(DAT_0300525c + 3) != '\0' || *(char *)(DAT_0300525c + 2) != '\0') {
          DAT_03005218 = 0x10;
          sub_08042E3E();
          return 1;
        }
        DAT_03005218 = 5;
        return 1;
      }
      if (DAT_03005218 == 0x34) {
        sub_08043558();
        return 0;
      }
      if (DAT_03005218 == 0x3f) {
        DAT_03005218 = DAT_03005219;
      }
    }
  }
  return 1;
}

