/* sub_08040F98  (original: 0x08040F98-0x08040FBA in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08040C78();
extern int sub_080400EE();
extern undefined4 volatile DAT_03004a98;
extern undefined1 volatile DAT_03004a94;
extern undefined1 volatile DAT_03004a6c;


void sub_08040F98(int param_1)

{
  DAT_03004a98 = 1;
  DAT_03004a94 = 0;
  DAT_03004a6c = 0xff;
  *(undefined4 *)(param_1 + 4) = 10;
  sub_080400EE();
  sub_08040C78();
  return;
}

