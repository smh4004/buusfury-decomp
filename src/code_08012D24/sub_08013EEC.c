/* sub_08013EEC  (original: 0x08013EEC-0x08013F0C in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern undefined volatile _0804929C;
extern undefined volatile _08049880;


void sub_08013EEC(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049880;
  sub_0803D63C(param_1[0xe]);
  *param_1 = &_0804929C;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

