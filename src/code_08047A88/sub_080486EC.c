/* sub_080486EC  (original: 0x080486EC-0x08048708 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_0300301c;
extern undefined * volatile DAT_03003020;
extern undefined volatile _0804AA1C;
extern undefined volatile _0804C23C;


void sub_080486EC(void)

{
  DAT_0300301c = &_0804C23C;
  DAT_03003020 = &_0804AA1C;
  return;
}

