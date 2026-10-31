/* sub_080487A4  (original: 0x080487A4-0x080487C0 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03003068;
extern undefined * volatile DAT_0300306c;
extern undefined volatile _0804BCE0;
extern undefined volatile _0804D358;


void sub_080487A4(void)

{
  DAT_03003068 = &_0804D358;
  DAT_0300306c = &_0804BCE0;
  return;
}

