/* sub_0805141C  (original: 0x0805141C-0x08051430 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _080491F0;


void sub_0805141C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

