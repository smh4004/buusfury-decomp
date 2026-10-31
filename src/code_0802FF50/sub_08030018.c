/* sub_08030018  (original: 0x08030018-0x08030038 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_08030018(int *param_1)

{
  sub_08011944(&DAT_03001c4c,param_1[1]);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

