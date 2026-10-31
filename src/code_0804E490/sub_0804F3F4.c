/* sub_0804F3F4  (original: 0x0804F3F4-0x0804F408 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _0804BDD0;


void sub_0804F3F4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_0804BDD0;
    sub_0803D63C();
  }
  return;
}

