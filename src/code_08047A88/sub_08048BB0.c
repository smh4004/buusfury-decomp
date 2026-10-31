/* sub_08048BB0  (original: 0x08048BB0-0x08048BCC in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03003248;
extern undefined * volatile DAT_0300324c;
extern undefined volatile _0804BD38;
extern undefined volatile _0804E170;


void sub_08048BB0(void)

{
  DAT_03003248 = &_0804E170;
  DAT_0300324c = &_0804BD38;
  return;
}

