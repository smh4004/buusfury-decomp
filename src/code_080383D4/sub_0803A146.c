/* sub_0803A146  (original: 0x0803A146-0x0803A16E in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int __call_via_r2();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0803A146(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
    sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 4));
  }
  sub_0803D63C(param_1);
  return;
}

