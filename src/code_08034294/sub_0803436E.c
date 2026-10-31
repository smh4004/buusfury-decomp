/* sub_0803436E  (original: 0x0803436E-0x08034388 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _08049D84;


void sub_0803436E(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049D84;
    puVar1[1] = 0x2c;
    puVar1[2] = 0x4c;
  }
  return;
}

