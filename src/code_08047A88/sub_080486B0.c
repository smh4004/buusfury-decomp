/* sub_080486B0  (original: 0x080486B0-0x080486CC in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03003004;
extern undefined * volatile DAT_0300300c;
extern undefined volatile _0804D6F0;
extern undefined volatile _0804C164;


void sub_080486B0(void)

{
  DAT_03003004 = &_0804D6F0;
  DAT_0300300c = &_0804C164;
  return;
}

