/* sub_08051C5C  (original: 0x08051C5C-0x08051C70 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _080493E4;


void sub_08051C5C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

