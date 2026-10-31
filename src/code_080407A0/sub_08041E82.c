/* sub_08041E82  (original: 0x08041E82-0x08041EF6 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049168();
extern byte volatile DAT_03004bec;
extern undefined1 volatile DAT_0300521b;
extern char volatile DAT_0300521d;
extern byte volatile DAT_03004be9;
extern byte volatile DAT_0300521c;
extern int volatile DAT_0300525c;
extern undefined2 volatile DAT_03005250;
extern undefined2 volatile DAT_03005252;


void sub_08041E82(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  sub_08049168(0x300521a,0,0x40);
  iVar1 = DAT_0300525c;
  DAT_0300521b = (int)((uint)DAT_03004bec * 0x2000000) < 0;
  DAT_0300521d = '\x01';
  uVar3 = (uint)DAT_03004be9;
  uVar2 = 0;
  do {
    if ((1 << uVar2 & uVar3) != 0) {
      DAT_0300521d = DAT_0300521d + '\x01';
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  DAT_0300521c = DAT_03004be9 << 1 | 1;
  DAT_03005250 = *(undefined2 *)(DAT_0300525c + 0x94);
  uVar2 = 0;
  do {
    if ((1 << uVar2 & uVar3) != 0) {
      (&DAT_03005252)[uVar2] = *(undefined2 *)(uVar2 * 0x20 + iVar1 + 0x14);
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  return;
}

