/* sub_08009904  (original: 0x08009904-0x08009930 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009324();


void sub_08009904(int param_1,int *param_2,byte *param_3)

{
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
#define local_c (*(int *)((char *)__frame + 0x8))
#define local_8 (*(int *)((char *)__frame + 0xc))
  local_14 = *param_2 >> 8;
  local_10 = param_2[1] >> 8;
  local_c = local_14 + (uint)*param_3;
  local_8 = local_10 + (uint)param_3[1];
  sub_08009324(&local_14,*(undefined4 *)(param_1 + 0xb0));
  return;
}

