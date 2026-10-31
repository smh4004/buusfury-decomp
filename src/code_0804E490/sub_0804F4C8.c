/* sub_0804F4C8  (original: 0x0804F4C8-0x0804F4E4 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0803D63C();


void sub_0804F4C8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  }
  sub_0803D63C(param_1);
  return;
}

