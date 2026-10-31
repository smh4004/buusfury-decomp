/* sub_0803A79C  (original: 0x0803A79C-0x0803A7CA in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_0803A79C(int param_1,int *param_2,int param_3)

{
  unsigned int __frame[2];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define aiStack_8 ((int *)((char *)__frame + 0x0))
  if (*(int *)(param_3 + 4) != 0) {
    aiStack_8[0] = *(int *)(param_1 + 0xc) * *(int *)(param_3 + 0x18) >> 0x10;
    __call_via_r2(param_2,aiStack_8,*(int *)(*param_2 + 0x60) + *param_2);
  }
  return 1;
}

