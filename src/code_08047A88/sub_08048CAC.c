/* sub_08048CAC  (original: 0x08048CAC-0x08048CC8 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03003294;
extern undefined * volatile DAT_0300329c;
extern undefined volatile _0804B630;
extern undefined volatile _0804CFF0;


void sub_08048CAC(void)

{
  DAT_03003294 = &_0804CFF0;
  DAT_0300329c = &_0804B630;
  return;
}

