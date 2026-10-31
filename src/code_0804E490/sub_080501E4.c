/* sub_080501E4  (original: 0x080501E4-0x080501F8 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08040F02();
extern int volatile DAT_03004a80;


void sub_080501E4(void)

{
  sub_08040F02();
  DAT_03004a80 = DAT_03004a80 + 1;
  return;
}

