/* sub_08048A40  (original: 0x08048A40-0x08048A64 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined * volatile DAT_03003144;
extern undefined * volatile DAT_0300314c;
extern undefined * volatile DAT_03003148;
extern undefined volatile _08049EAC;
extern undefined volatile _0804AA3C;
extern undefined volatile _0804C284;


void sub_08048A40(void)

{
  DAT_03003144 = &_08049EAC;
  DAT_0300314c = &_0804C284;
  DAT_03003148 = &_0804AA3C;
  return;
}

