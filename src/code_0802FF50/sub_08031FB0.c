/* sub_08031FB0  (original: 0x08031FB0-0x08031FCE in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006618();
extern int sub_0803D63C();
extern undefined volatile _08049B88;


void sub_08031FB0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &_08049B88;
  sub_08006618(param_1,0,param_3,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

