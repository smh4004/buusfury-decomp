/* sub_08048778  (original: 0x08048778-0x08048794 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_0300305c;
extern undefined * volatile DAT_03003058;
extern undefined volatile _0804D37C;
extern undefined volatile _0804BCF0;


void sub_08048778(void)

{
  DAT_0300305c = &_0804D37C;
  DAT_03003058 = &_0804BCF0;
  return;
}

