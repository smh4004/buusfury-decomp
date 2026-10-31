/* sub_0800887C  (original: 0x0800887C-0x080088BC in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08008192();
extern int sub_080086D8();
extern int sub_08008598();


void sub_0800887C(int param_1,int *param_2)

{
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  local_14 = *param_2 >> 0x12;
  local_10 = param_2[1] >> 0x12;
  if ((local_14 != *(int *)(param_1 + 0x50)) || (local_10 != *(int *)(param_1 + 0x54))) {
    sub_08008598(param_1,&local_14);
  }
  sub_08008192(param_1,param_2);
  sub_080086D8(param_1,param_2);
  return;
}

