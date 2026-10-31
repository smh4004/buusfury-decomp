/* sub_08048420  (original: 0x08048420-0x0804843C in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03001c3c;
extern undefined * volatile DAT_03001c40;
extern undefined volatile _0804B2F8;
extern undefined volatile _0804AB6C;


void sub_08048420(void)

{
  DAT_03001c3c = &_0804B2F8;
  DAT_03001c40 = &_0804AB6C;
  return;
}

