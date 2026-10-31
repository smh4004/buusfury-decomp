/* sub_08031620  (original: 0x08031620-0x08031644 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006618();
extern int sub_0803D63C();
extern undefined4 volatile DAT_03003174;
extern undefined volatile _080499A8;


void sub_08031620(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_080499A8;
  DAT_03003174 = 0;
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

