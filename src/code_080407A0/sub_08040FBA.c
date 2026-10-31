/* sub_08040FBA  (original: 0x08040FBA-0x08040FCC in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08040D1E();
extern int sub_080400EE();
extern undefined4 volatile DAT_03004a98;


void sub_08040FBA(void)

{
  DAT_03004a98 = 0;
  sub_08040D1E();
  sub_080400EE();
  return;
}

