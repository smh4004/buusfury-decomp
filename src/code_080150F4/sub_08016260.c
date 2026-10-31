/* sub_08016260  (original: 0x08016260-0x080162A8 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@02000000, r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803F922();
extern int __call_via_r2();


void sub_08016260(int param_1,undefined4 param_2)

{
  int iVar1;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(int *)((char *)__frame + 0x0))
#define local_1c (*(int *)((char *)__frame + 0x4))
#define local_14 (*(int *)((char *)__frame + 0xc))
  if ((-1 < *(int *)(param_1 + 8) << 0x1c) &&
     (iVar1 = **(int **)(param_1 + 4),
     iVar1 = __call_via_r2(*(int **)(param_1 + 4),&local_20,*(int *)(iVar1 + 0x1c) + iVar1),
     iVar1 != 0)) {
    local_20 = local_20 + -0x10;
    local_14 = local_1c + 8;
    local_1c = local_1c + -8;
    sub_0803F922(param_2,*(undefined4 *)(param_1 + 0xc),&local_20);
  }
  return;
}

