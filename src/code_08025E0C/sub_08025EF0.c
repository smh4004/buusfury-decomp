/* sub_08025EF0  (original: 0x08025EF0-0x08025F16 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803F58C();
extern int sub_0803D63C();
extern undefined volatile _0804A52C;
extern undefined volatile _080491F0;


void sub_08025EF0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_0804A52C;
  if (param_1[7] != 0) {
    sub_0803F58C(param_1[7],1,param_3,param_4,param_4);
  }
  *param_1 = &_080491F0;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

