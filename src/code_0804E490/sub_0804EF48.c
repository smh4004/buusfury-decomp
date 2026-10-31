/* sub_0804EF48  (original: 0x0804EF48-0x0804EF6C in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804B9A4;


void sub_0804EF48(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &_0804B9A4;
    puVar1[5] = 0;
  }
  return;
}

