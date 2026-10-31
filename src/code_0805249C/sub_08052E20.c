/* sub_08052E20  (original: 0x08052E20-0x08052E34 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _0804984C;


void sub_08052E20(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804984C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

