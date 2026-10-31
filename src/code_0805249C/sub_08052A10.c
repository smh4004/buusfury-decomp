/* sub_08052A10  (original: 0x08052A10-0x08052A24 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _080493E4;


void sub_08052A10(undefined4 *param_1,int param_2)

{
  *param_1 = &_080493E4;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

