/* sub_080512BC  (original: 0x080512BC-0x080512D0 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 2/2 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _080491F0;


void sub_080512BC(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

