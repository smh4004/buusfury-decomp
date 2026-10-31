/* sub_08048600  (original: 0x08048600-0x0804861C in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03002fcc;
extern undefined * volatile DAT_03002fd4;
extern undefined volatile _0804CC10;
extern undefined volatile _0804B110;


void sub_08048600(void)

{
  DAT_03002fcc = &_0804CC10;
  DAT_03002fd4 = &_0804B110;
  return;
}

