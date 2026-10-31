/* sub_080489D8  (original: 0x080489D8-0x080489F4 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03003128;
extern undefined * volatile DAT_0300312c;
extern undefined volatile _0804CBEC;
extern undefined volatile _0804B0A0;


void sub_080489D8(void)

{
  DAT_03003128 = &_0804CBEC;
  DAT_0300312c = &_0804B0A0;
  return;
}

