/* sub_08051384  (original: 0x08051384-0x08051398 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _08049AE0;


void sub_08051384(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049AE0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

