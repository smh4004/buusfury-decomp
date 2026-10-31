/* sub_08021EBC  (original: 0x08021EBC-0x08021EEA in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08007040();
extern int * volatile DAT_03002f34;
extern int * volatile DAT_03002da0;
extern undefined volatile DAT_03002c18;
extern undefined volatile DAT_03002dac;


void sub_08021EBC(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r1(&DAT_03002dac,*DAT_03002f34 + (int)DAT_03002f34,*DAT_03002f34,param_4,param_4);
  __call_via_r1(&DAT_03002c18,*DAT_03002da0 + (int)DAT_03002da0);
  sub_08007040(param_1);
  return;
}

