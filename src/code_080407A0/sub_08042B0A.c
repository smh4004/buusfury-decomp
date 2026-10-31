/* sub_08042B0A  (original: 0x08042B0A-0x08042B34 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08042ADA();
extern undefined1 volatile DAT_03004ccc;
extern undefined1 volatile DAT_03004ccd;
extern int volatile DAT_03004d04;
extern undefined1 volatile DAT_03004cd1;
extern undefined2 volatile DAT_03004cfa;
extern undefined2 volatile DAT_03004ce0;
extern undefined1 volatile DAT_03004cd3;


void sub_08042B0A(int param_1)

{
  sub_08042ADA();
  DAT_03004ccc = 1;
  DAT_03004ccd = 2;
  DAT_03004d04 = param_1;
  DAT_03004cd1 = *(undefined1 *)(param_1 + 0x11);
  DAT_03004cfa = *(undefined2 *)(param_1 + 0x12);
  DAT_03004ce0 = *(undefined2 *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x10) != '\0') {
    DAT_03004cd3 = 1;
  }
  return;
}

