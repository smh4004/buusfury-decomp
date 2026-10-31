/* sub_080457F4  (original: 0x080457F4-0x08045894 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern char volatile DAT_03005289;
extern short volatile DAT_03005292;
extern undefined2 volatile REG_IF;
extern char volatile DAT_03005288;
extern undefined2 volatile REG_IE;
extern short volatile DAT_0300528a;
extern undefined2 volatile REG_IME;
extern short volatile DAT_0300528c;
extern undefined2 volatile DAT_04000128;


short sub_080457F4(void)

{
  ushort uVar1;
  
  if (DAT_03005289 == '\0') {
    DAT_03005288 = '\x01';
    uVar1 = DAT_04000128;
    DAT_04000128 = uVar1 | 1;
    REG_IME = 0;
    uVar1 = REG_IE;
    REG_IE = uVar1 | 0x80;
    REG_IME = 1;
    DAT_03005289 = '\x01';
    uVar1 = DAT_04000128;
    DAT_04000128 = uVar1 | 0x80;
  }
  else {
    if (DAT_03005289 != '\x01') {
      return DAT_03005292;
    }
    if (DAT_03005292 != 0) {
      DAT_03005289 = 2;
      return DAT_03005292;
    }
    if (DAT_03005288 == '\x01') {
      if (DAT_0300528a != 0) {
        return 0;
      }
      REG_IME = 0;
      uVar1 = DAT_04000128;
      DAT_04000128 = uVar1 | 0x80;
    }
    else {
      if (DAT_0300528c == -0x7fff) {
        return 0;
      }
      if (DAT_0300528a != 0) {
        return 0;
      }
      REG_IME = 0;
      uVar1 = REG_IE;
      REG_IE = uVar1 & 0xff7f;
      REG_IME = 1;
      DAT_04000128 = 0;
      DAT_04000128 = 0x1000;
      REG_IF = 0x80;
      uVar1 = DAT_04000128;
      DAT_04000128 = uVar1 | 0x4080;
      REG_IME = 0;
      uVar1 = REG_IE;
      REG_IE = uVar1 | 0x80;
    }
    REG_IME = 1;
  }
  return 0;
}

