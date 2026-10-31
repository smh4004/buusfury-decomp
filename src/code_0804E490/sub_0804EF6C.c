/* sub_0804EF6C  (original: 0x0804EF6C-0x0804EF90 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804C878;


void sub_0804EF6C(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    *puVar1 = &_0804C878;
    puVar1[4] = 0;
  }
  return;
}

