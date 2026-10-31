/* sub_08048BFC  (original: 0x08048BFC-0x08048C18 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_0300325c;
extern undefined * volatile DAT_03003260;
extern undefined volatile _0804BC78;
extern undefined volatile _0804D310;


void sub_08048BFC(void)

{
  DAT_0300325c = &_0804D310;
  DAT_03003260 = &_0804BC78;
  return;
}

