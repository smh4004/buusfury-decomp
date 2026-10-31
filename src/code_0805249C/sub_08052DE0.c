/* sub_08052DE0  (original: 0x08052DE0-0x08052DF4 in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _080496A8;


void sub_08052DE0(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

