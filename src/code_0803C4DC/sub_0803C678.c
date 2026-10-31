/* sub_0803C678  (original: 0x0803C678-0x0803C696 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int volatile DAT_03001c34;


void sub_0803C678(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_03001c34 != 0) {
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(DAT_03001c34 + 0x10);
  }
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}

