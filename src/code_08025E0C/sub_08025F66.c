/* sub_08025F66  (original: 0x08025F66-0x08025FAC in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804915C();


void sub_08025F66(int param_1)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(undefined4 *)((char *)__frame + 0x0))
#define local_14 (*(undefined4 *)((char *)__frame + 0x4))
#define local_10 (*(undefined4 *)((char *)__frame + 0x8))
#define local_c (*(int *)((char *)__frame + 0xc))
  local_18 = 0;
  local_14 = *(undefined4 *)(param_1 + 0x10);
  local_10 = 0x68;
  local_c = *(int *)(param_1 + 0x10) + 0x38;
  sub_0804915C(*(int *)(param_1 + 0x1c),0x6009800,(int)&local_18);
  *(uint *)(*(int *)(param_1 + 0x24) + 0x20) = (uint)(0 < *(int *)(param_1 + 0x10));
  *(uint *)(*(int *)(param_1 + 0x28) + 0x20) =
       (uint)(*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14));
  return;
}

