/* sub_0803333C  (original: 0x0803333C-0x08033354 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _08049DC8;


undefined4 * sub_0803333C(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049DC8;
    puVar1[1] = param_1 + 0xc;
  }
  return puVar1;
}

