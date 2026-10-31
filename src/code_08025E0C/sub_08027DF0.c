/* sub_08027DF0  (original: 0x08027DF0-0x08027E16 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011E94();
extern int __call_via_r2();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_08027DF0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011944(&DAT_03001c4c,param_1[1],param_3,param_4,param_4);
  sub_08011E94(&DAT_03001c4c);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

