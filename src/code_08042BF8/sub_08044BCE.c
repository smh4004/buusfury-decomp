/* sub_08044BCE  (original: 0x08044BCE-0x08044BE0 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03005278;


void sub_08044BCE(uint param_1)

{
  if (param_1 < 4) {
    *(undefined1 *)((&DAT_03005278)[param_1] + 0x12) = 0;
  }
  return;
}

