/* sub_080420B8  (original: 0x080420B8-0x08042188 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile DAT_03004cdc;
extern byte volatile DAT_03004be9;
extern char * volatile DAT_0300525c;
extern char volatile DAT_03005218;
extern undefined1 volatile DAT_03005219;
extern undefined1 volatile DAT_03004be8;


void sub_080420B8(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_03004be9 & ~(byte)DAT_03004cdc;
  bVar2 = bVar1;
  if (param_1 != 0x40) {
    bVar2 = DAT_03004be9;
    if (param_1 < 0x41) {
      if (param_1 == 0x14) {
        if (DAT_0300525c[1] == '\0') {
          DAT_03005218 = '\x03';
        }
        else {
          DAT_03005218 = '\"';
        }
      }
      else if (param_1 < 0x15) {
        if (param_1 == 0x11) {
          bVar2 = (byte)DAT_03004cdc | DAT_03004be9;
        }
        else if ((param_1 < 0x12) && (param_1 == 0)) {
          DAT_03005218 = '\x03';
        }
      }
      else if (((param_1 == 0x30) || (((param_1 != 0x31 && (param_1 != 0x32)) && (param_1 == 0x33)))
               ) && ((bVar2 = bVar1, DAT_03005218 != '\x04' && (*DAT_0300525c == -1)))) {
        DAT_03005218 = '\x03';
      }
    }
    else if (param_1 == 0x50) {
      DAT_03004be8 = 0;
    }
    else if (param_1 < 0x51) {
      if (param_1 != 0x41) {
        if (param_1 == 0x42) {
          DAT_03005218 = '4';
        }
        else if (param_1 == 0x43) {
          DAT_03005218 = '\x03';
        }
        else if (param_1 == 0x44) {
          DAT_03005218 = '\v';
        }
      }
    }
    else if (param_1 == 0xf0) {
      DAT_03005218 = '?';
      DAT_03005219 = 0;
      DAT_03004be8 = 0;
    }
    else if (param_1 == 0xf1) {
      DAT_03005218 = '?';
      DAT_03005219 = 0;
      DAT_03004be8 = 0;
    }
    else if (param_1 == 0xf2) {
      DAT_03005218 = '?';
      DAT_03005219 = 0;
      DAT_03004be8 = 0;
    }
    else if (param_1 == 0xff) {
      DAT_03005218 = '?';
      DAT_03005219 = 0x34;
      DAT_03004be8 = 0;
    }
  }
  DAT_03004be9 = bVar2;
  return;
}

