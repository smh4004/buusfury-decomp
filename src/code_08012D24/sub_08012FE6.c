/* sub_08012FE6  (original: 0x08012FE6-0x08013022 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0800DFBE();


void sub_08012FE6(int param_1,int *param_2)

{
  int iVar1;
  
  sub_0800DFBE();
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  param_2[0x73] = (uint)(*(char *)(iVar1 + 0x67) == '\0');
  *(undefined1 *)(param_2 + 0x6e) = 0x80;
  *(undefined1 *)((int)param_2 + 0x1b9) = 0x80;
  return;
}

