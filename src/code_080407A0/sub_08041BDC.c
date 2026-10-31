/* sub_08041BDC  (original: 0x08041BDC-0x08041C0A in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03004ccb;
extern byte volatile DAT_03004bf3;
extern byte volatile DAT_0300521c;
extern undefined1 volatile DAT_03004bf5;
extern undefined1 volatile DAT_03004bf9;
extern int volatile DAT_03004c00;


void sub_08041BDC(void)

{
  uint uVar1;
  
  uVar1 = (DAT_03004ccb & 0x7f) << 1 | (uint)DAT_03004bf3;
  DAT_03004bf3 = (char)uVar1;
  if (((uint)DAT_0300521c & ~uVar1) == 0) {
    DAT_03004bf5 = 0;
    DAT_03004bf9 = 0;
    return;
  }
  DAT_03004bf5 = 1;
  DAT_03004c00 = DAT_03004c00 + 1;
  return;
}

