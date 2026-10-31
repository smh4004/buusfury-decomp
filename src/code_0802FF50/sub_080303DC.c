/* sub_080303DC  (original: 0x080303DC-0x08030404 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_080303DC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08011944(&DAT_03001c4c,param_1[2],param_3,param_4,param_4);
  sub_08011944(&DAT_03001c4c,param_1[1]);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

