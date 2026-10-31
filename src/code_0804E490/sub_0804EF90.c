/* sub_0804EF90  (original: 0x0804EF90-0x0804EFB4 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804CD9C;


void sub_0804EF90(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    *puVar1 = &_0804CD9C;
    puVar1[4] = 0;
  }
  return;
}

