/* sub_08050B7C  (original: 0x08050B7C-0x08050B90 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _08049AF0;


void sub_08050B7C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AF0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

