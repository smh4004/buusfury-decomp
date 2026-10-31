/* sub_0802F74C  (original: 0x0802F74C-0x0802F77C in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int volatile DAT_03001b94;


void sub_0802F74C(int param_1,int *param_2)

{
  if ((DAT_03001b94 != 0) && (*(int *)(DAT_03001b94 + 0x1cc) != 0)) {
    __call_via_r3(param_2,4,0,*(int *)(*param_2 + 0x30) + *param_2);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined2 *)(param_1 + 8) = 0x3c;
  }
  return;
}

