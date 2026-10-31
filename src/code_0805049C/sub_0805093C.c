/* sub_0805093C  (original: 0x0805093C-0x08050950 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _08049320;


void sub_0805093C(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049320;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

