/* sub_0804890C  (original: 0x0804890C-0x08048928 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_030030e0;
extern undefined * volatile DAT_030030e4;
extern undefined volatile _0804CBA0;
extern undefined volatile _0804DBF0;


void sub_0804890C(void)

{
  DAT_030030e0 = &_0804DBF0;
  DAT_030030e4 = &_0804CBA0;
  return;
}

