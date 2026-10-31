/* sub_08016240  (original: 0x08016240-0x08016260 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _0804929C;
extern undefined volatile _08049898;


void sub_08016240(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049898;
  sub_0803D63C(param_1[3]);
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

