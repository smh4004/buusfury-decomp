/* sub_0804FD4C  (original: 0x0804FD4C-0x0804FD70 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08049168();
extern int * volatile DAT_03004a8c;


void sub_0804FD4C(undefined4 param_1,int param_2)

{
  int a2;
  
  a2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x1c) + *DAT_03004a8c);
  sub_08049168(param_2,0,a2);
  return;
}

