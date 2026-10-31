/* sub_08041C0A  (original: 0x08041C0A-0x08041CE4 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08041BDC();
extern int sub_08041B18();
extern short volatile DAT_03004cdc;
extern undefined1 volatile DAT_03005218;
extern undefined1 volatile DAT_03005219;
extern undefined1 volatile DAT_03004be8;
extern undefined1 volatile DAT_03004bf8;
extern char volatile DAT_03004bf0;
extern char volatile DAT_0300521d;
extern short volatile DAT_03004cde;


void sub_08041C0A(int param_1)

{
  byte bVar1;
  
  if (param_1 == 0x33) {
_08041C9A:
    bVar1 = 0;
    do {
      bVar1 = bVar1 + 1;
    } while (bVar1 < 4);
    DAT_03004bf8 = 1;
    DAT_03005218 = 0xb;
    return;
  }
  if (param_1 < 0x34) {
    if (((param_1 != 0x13) && (0x13 < param_1)) && (param_1 != 0x14)) {
      if (param_1 == 0x30) goto _08041C9A;
      if (param_1 == 0x31) {
        bVar1 = 0;
        do {
          bVar1 = bVar1 + 1;
        } while (bVar1 < 4);
        return;
      }
      if (param_1 == 0x32) {
        bVar1 = 0;
        do {
          bVar1 = bVar1 + 1;
        } while (bVar1 < 4);
        return;
      }
    }
  }
  else {
    if (param_1 == 0x50) {
      sub_08041BDC();
      sub_08041B18();
      DAT_03004be8 = 0;
      return;
    }
    if (param_1 < 0x51) {
      if (param_1 == 0x40) {
        DAT_03005218 = 0xb;
        return;
      }
      if (param_1 == 0x42) {
        DAT_03005218 = 0x34;
        return;
      }
      if ((param_1 != 0x43) && (param_1 == 0x44)) {
        DAT_03005218 = 0xb;
      }
    }
    else {
      if (param_1 == 0xf0) {
        if (DAT_03004cdc == 0x26) {
          if ((DAT_03004bf0 != -0x71) && (DAT_0300521d != '\x01')) {
            return;
          }
          DAT_03004cde = 0;
        }
        else if (DAT_03004cde != 0) {
          DAT_03005218 = 0x32;
          DAT_03004be8 = 0;
          return;
        }
        return;
      }
      if (param_1 == 0xf1) {
        DAT_03005218 = 0x32;
        DAT_03004be8 = 0;
        return;
      }
      if (param_1 == 0xf2) {
        DAT_03005218 = 0x32;
        DAT_03004be8 = 0;
        return;
      }
      if (param_1 == 0xff) {
        DAT_03005218 = 0x3f;
        DAT_03005219 = 0x34;
        DAT_03004be8 = 0;
        return;
      }
    }
  }
  return;
}

