/* sub_08051690  (original: 0x08051690-0x080516A4 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _080496A8;


void sub_08051690(undefined4 *param_1,int param_2)

{
  *param_1 = &_080496A8;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

