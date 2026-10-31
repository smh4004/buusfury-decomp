/* sub_0802FC8A  (original: 0x0802FC8A-0x0802FCA0 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804A178;


void sub_0802FC8A(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A178;
  }
  return;
}

