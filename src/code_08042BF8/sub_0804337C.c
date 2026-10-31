/* sub_0804337C  (original: 0x0804337C-0x08043392 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080444EE();
extern int sub_0804389E();
extern undefined1 volatile DAT_03004cd6;


void sub_0804337C(void)

{
  undefined1 uVar1;
  
  uVar1 = DAT_03004cd6;
  DAT_03004cd6 = 1;
  sub_080444EE();
  sub_0804389E();
  DAT_03004cd6 = uVar1;
  return;
}

