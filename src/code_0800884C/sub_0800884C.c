/* sub_0800884C  (original: 0x0800884C-0x0800887C in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08008192();
extern int sub_080086D8();
extern int sub_08008598();


void sub_0800884C(undefined4 param_1,int *param_2)

{
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  local_14 = *param_2 >> 0x12;
  local_10 = param_2[1] >> 0x12;
  sub_08008598(param_1,&local_14);
  sub_08008192(param_1,param_2);
  sub_080086D8(param_1,param_2);
  return;
}

