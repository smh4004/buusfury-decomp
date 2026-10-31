/* sub_0804388A  (original: 0x0804388A-0x0804389E in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte * volatile DAT_03005260;
extern int * volatile DAT_03005264;


void sub_0804388A(int param_1)

{
  *DAT_03005264 = param_1;
  if (param_1 != 0) {
    *DAT_03005260 = *DAT_03005260 | 8;
    return;
  }
  *DAT_03005260 = *DAT_03005260 & 0xf7;
  return;
}

