/* sub_08042E5E  (original: 0x08042E5E-0x08042EEC in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080446A8();
extern int sub_0804333C();
extern int sub_0804337C();
extern int sub_08042E3E();
extern char volatile DAT_03004ccc;
extern byte volatile DAT_03004cd8;
extern byte volatile DAT_03004cec;
extern char volatile DAT_03004cca;
extern undefined2 volatile REG_IME;
extern undefined1 volatile DAT_03004ccd;
extern int volatile DAT_0300525c;
extern undefined2 volatile DAT_03004cdc;
extern undefined2 volatile DAT_03004cf0;
extern undefined4 volatile DAT_03005268;


void sub_08042E5E(void)

{
  short sVar1;
  undefined2 uVar2;
  
  uVar2 = REG_IME;
  REG_IME = 0;
  if (DAT_03004ccc == '\x0f') {
    sVar1 = (&DAT_03004cf0)[DAT_03004cd8];
    (&DAT_03004cf0)[DAT_03004cd8] = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) {
      if (*(short *)(&DAT_03005268)[DAT_03004cd8] != 0x27) goto _08042EB6;
    }
    sub_08042E3E();
    DAT_03004ccc = '\x18';
    sub_080446A8(4,DAT_03004cd8);
    DAT_03004cec = DAT_03004cec & ~(byte)(1 << (uint)DAT_03004cd8);
    (&DAT_03004cf0)[DAT_03004cd8] = 0;
  }
_08042EB6:
  REG_IME = uVar2;
  if (DAT_03004ccc == '\x18') {
    if (DAT_03004cca == '\x01') {
      sub_08042E3E();
    }
    if (DAT_03004cca == '\0') {
      DAT_03004ccd = 0;
      DAT_03004ccc = '\0';
      sub_0804337C(*(byte *)(DAT_0300525c + 3) | *(byte *)(DAT_0300525c + 2));
      DAT_03004cdc = 0;
      sub_0804333C(0x25,1);
    }
  }
  return;
}

