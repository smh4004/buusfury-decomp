/* sub_0804554C  (original: 0x0804554C-0x08045564 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080437C2();
extern undefined2 volatile DAT_04000128;


void sub_0804554C(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    DAT_04000128 = 0x2000;
  }
  sub_080437C2();
  return;
}

