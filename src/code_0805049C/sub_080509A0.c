/* sub_080509A0  (original: 0x080509A0-0x080509B4 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _0804E47C;


void sub_080509A0(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804E47C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

