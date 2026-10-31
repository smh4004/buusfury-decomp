/* sub_0804E6A0  (original: 0x0804E6A0-0x0804E6C2 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080342A8();
extern int __call_via_r1();


void sub_0804E6A0(int param_1,int *param_2)

{
  int iVar1;
  
  sub_080342A8();
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  *(int *)(param_1 + 0x10) = iVar1 * *(int *)(param_1 + 0xc) >> 0x10;
  return;
}

