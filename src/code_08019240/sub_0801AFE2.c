/* sub_0801AFE2  (original: 0x0801AFE2-0x0801B002 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0801AFE2(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((int)((uint)*(ushort *)(iVar1 + 4) << 0x1e) < 0) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

