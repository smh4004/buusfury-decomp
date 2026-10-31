/* sub_08051F80  (original: 0x08051F80-0x08051F94 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _0804984C;


void sub_08051F80(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804984C;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

