/* sub_08048B4C  (original: 0x08048B4C-0x08048B68 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_0300322c;
extern undefined * volatile DAT_03003230;
extern undefined volatile _0804BD48;
extern undefined volatile _0804D968;


void sub_08048B4C(void)

{
  DAT_0300322c = &_0804D968;
  DAT_03003230 = &_0804BD48;
  return;
}

