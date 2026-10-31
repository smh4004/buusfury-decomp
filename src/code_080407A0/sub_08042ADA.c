/* sub_08042ADA  (original: 0x08042ADA-0x08042B0A in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_03004ccd;
extern undefined1 volatile DAT_03004ccc;
extern undefined1 volatile DAT_03004cce;
extern undefined1 volatile DAT_03004ccf;
extern undefined1 volatile DAT_03004cd8;
extern undefined1 volatile DAT_03004cd4;
extern undefined1 volatile DAT_03004cec;
extern undefined1 volatile DAT_03004cf8;
extern undefined2 volatile DAT_03004cf0;
extern undefined2 volatile DAT_03004cfc;


void sub_08042ADA(void)

{
  uint uVar1;
  uint uVar2;
  
  DAT_03004ccd = 0;
  DAT_03004ccc = 0;
  DAT_03004cce = 0xff;
  DAT_03004ccf = 0;
  DAT_03004cd8 = 0;
  DAT_03004cd4 = 0;
  DAT_03004cec = 0;
  DAT_03004cf8 = 0;
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1 & 0xff;
    (&DAT_03004cf0)[uVar1] = 0;
    (&DAT_03004cfc)[uVar1] = 0;
    uVar1 = uVar2;
  } while (uVar2 < 4);
  return;
}

