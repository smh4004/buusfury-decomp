/* sub_08048740  (original: 0x08048740-0x0804875C in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_0300303c;
extern undefined * volatile DAT_03003040;
extern undefined volatile _0804AA2C;
extern undefined volatile _0804C260;


void sub_08048740(void)

{
  DAT_0300303c = &_0804C260;
  DAT_03003040 = &_0804AA2C;
  return;
}

