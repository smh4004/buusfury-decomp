/* sub_0804557E  (original: 0x0804557E-0x08045598 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080437C2();
extern int volatile DAT_03005260;


void sub_0804557E(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)(DAT_03005260 + 9) = 1;
  }
  sub_080437C2();
  return;
}

