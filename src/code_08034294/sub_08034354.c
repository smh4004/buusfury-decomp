/* sub_08034354  (original: 0x08034354-0x0803436E in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _08049D84;


void sub_08034354(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049D84;
    puVar1[1] = 0;
    puVar1[2] = 0x10;
  }
  return;
}

