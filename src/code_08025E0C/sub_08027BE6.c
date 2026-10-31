/* sub_08027BE6  (original: 0x08027BE6-0x08027C20 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FE34();
extern int sub_08027B4C();


void sub_08027BE6(int param_1,undefined4 param_2)

{
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
#define local_14 (*(int *)((char *)__frame + 0x10))
#define local_10 (*(int *)((char *)__frame + 0x14))
  sub_0800FE34(&local_24,*(undefined4 *)(param_1 + 0x1c));
  local_14 = local_24 + local_1c >> 1;
  local_10 = local_20 + local_18 >> 1;
  sub_08027B4C(param_1,param_2,&local_14);
  return;
}

