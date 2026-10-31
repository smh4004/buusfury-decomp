/* sub_08048E20  (original: 0x08048E20-0x08048E3C in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03004a70;
extern undefined * volatile DAT_03004a74;
extern undefined volatile _0804A7D0;
extern undefined volatile _08049834;


void sub_08048E20(void)

{
  DAT_03004a70 = &_08049834;
  DAT_03004a74 = &_0804A7D0;
  return;
}

