/* sub_08048694  (original: 0x08048694-0x080486B0 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03002ffc;
extern undefined * volatile DAT_03003000;
extern undefined volatile _0804A700;
extern undefined volatile _0804AAE4;


void sub_08048694(void)

{
  DAT_03002ffc = &_0804A700;
  DAT_03003000 = &_0804AAE4;
  return;
}

