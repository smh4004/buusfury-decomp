/* sub_08048C60  (original: 0x08048C60-0x08048C7C in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03003278;
extern undefined * volatile DAT_0300327c;
extern undefined volatile _0804C6D8;
extern undefined volatile _0804AD28;


void sub_08048C60(void)

{
  DAT_03003278 = &_0804C6D8;
  DAT_0300327c = &_0804AD28;
  return;
}

