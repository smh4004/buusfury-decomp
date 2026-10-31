/* sub_080413FC  (original: 0x080413FC-0x080414AC in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804326E();
extern int sub_080449B8();
extern int sub_080447E0();
extern int sub_0804347E();
extern int sub_08049168();
extern int sub_08043260();
extern byte volatile DAT_03004b33;
extern int volatile DAT_0300525c;
extern undefined1 volatile DAT_03004b34;
extern undefined1 volatile DAT_03004b35;
extern undefined1 volatile DAT_03004b32;
extern undefined1 volatile DAT_0300521c;
extern undefined1 volatile DAT_03004d10;
extern undefined1 volatile DAT_03004b4c;
extern sbyte volatile DAT_03004b2c;
extern undefined1 volatile DAT_03005218;
extern undefined1 volatile DAT_03004b36;
extern undefined1 volatile DAT_03004b3a;
extern undefined1 volatile DAT_03004b3e;
extern undefined volatile DAT_03004b54;
extern undefined1 volatile DAT_03004b6c;
extern undefined2 volatile DAT_03005250;


void sub_080413FC(void)

{
  uint uVar1;
  
  DAT_03004b33 = 0;
  do {
    if ((&DAT_03005250)[DAT_03004b33] == *(short *)(DAT_0300525c + 0x94)) break;
    uVar1 = DAT_03004b33 + 1;
    DAT_03004b33 = (byte)uVar1;
  } while ((uVar1 & 0xff) < 5);
  sub_08049168(0x3004b4c,0,8);
  sub_08049168(0x3004b54,0,0x18);
  sub_0804347E(&DAT_03004b6c);
  DAT_03004b34 = 0;
  DAT_03004b35 = 0;
  uVar1 = 0;
  do {
    (&DAT_03004b36)[uVar1] = 0;
    (&DAT_03004b3e)[uVar1] = 0;
    (&DAT_03004b3a)[uVar1] = 0;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  DAT_03004b32 = 0;
  DAT_03004d10 = DAT_0300521c;
  DAT_03004b4c = 0;
  sub_08043260(0x80413f5);
  sub_0804326E(0x8041313);
  sub_080447E0(0x10,DAT_03004b2c,&DAT_03004b54,0x18);
  sub_080449B8(1 << DAT_03004b2c & 0xff,&DAT_03004b4c,8);
  DAT_03005218 = 0x31;
  return;
}

