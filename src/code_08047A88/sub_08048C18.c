/* sub_08048C18  (original: 0x08048C18-0x08048C34 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03003264;
extern undefined * volatile DAT_03003268;
extern undefined volatile _0804B090;
extern undefined volatile _0804CBC8;


void sub_08048C18(void)

{
  DAT_03003264 = &_0804CBC8;
  DAT_03003268 = &_0804B090;
  return;
}

