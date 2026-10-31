/* sub_08050918  (original: 0x08050918-0x0805093C in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803F58C();
extern int sub_0803D63C();
extern undefined volatile _080491F0;


void sub_08050918(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F58C(param_1 + 2,0,param_3,param_4,param_4);
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

