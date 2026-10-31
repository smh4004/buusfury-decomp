/* sub_0804F1C4  (original: 0x0804F1C4-0x0804F1E8 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009692();
extern int __call_via_r2();
extern undefined4 volatile DAT_030019a4;


void sub_0804F1C4(int *param_1)

{
  sub_08009692(&DAT_030019a4,0);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

