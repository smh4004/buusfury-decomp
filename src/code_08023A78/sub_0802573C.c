/* sub_0802573C  (original: 0x0802573C-0x0802574C in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _080491F0;


void sub_0802573C(undefined4 *param_1,int param_2)

{
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C();
  }
  return;
}

