/* sub_08048724  (original: 0x08048724-0x08048740 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03003030;
extern undefined * volatile DAT_03003034;
extern undefined volatile _0804BE3C;
extern undefined volatile _0804A648;


void sub_08048724(void)

{
  DAT_03003030 = &_0804BE3C;
  DAT_03003034 = &_0804A648;
  return;
}

