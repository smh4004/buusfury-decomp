/* sub_08033606  (original: 0x08033606-0x0803362A in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803F58C();
extern int sub_0803D63C();
extern undefined volatile _08049338;
extern undefined volatile _080491F0;


void sub_08033606(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_08049338;
  sub_0803F58C(param_1 + 5,0,param_3,param_4,param_4);
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

