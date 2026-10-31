/* sub_08037C06  (original: 0x08037C06-0x08037C1C in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804B1C0;


void sub_08037C06(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B1C0;
  }
  return;
}

