/* sub_08050AFC  (original: 0x08050AFC-0x08050B10 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _08049238;


void sub_08050AFC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049238;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

