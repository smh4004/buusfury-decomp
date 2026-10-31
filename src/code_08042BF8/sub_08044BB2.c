/* sub_08044BB2  (original: 0x08044BB2-0x08044BCE in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03005278;


void sub_08044BB2(uint param_1)

{
  if ((param_1 < 4) && (*(short *)(&DAT_03005278)[param_1] == -0x7fdc)) {
    *(undefined1 *)((short *)(&DAT_03005278)[param_1] + 1) = 1;
  }
  return;
}

