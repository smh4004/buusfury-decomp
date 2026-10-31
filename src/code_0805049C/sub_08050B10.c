/* sub_08050B10  (original: 0x08050B10-0x08050B24 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _08049238;


void sub_08050B10(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049238;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

