/* sub_08050B68  (original: 0x08050B68-0x08050B7C in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _080496A8;


void sub_08050B68(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

