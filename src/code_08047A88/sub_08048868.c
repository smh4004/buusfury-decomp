/* sub_08048868  (original: 0x08048868-0x08048884 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_030030b0;
extern undefined * volatile DAT_030030b4;
extern undefined volatile _0804C1FC;
extern undefined volatile _0804D7AC;


void sub_08048868(void)

{
  DAT_030030b0 = &_0804D7AC;
  DAT_030030b4 = &_0804C1FC;
  return;
}

