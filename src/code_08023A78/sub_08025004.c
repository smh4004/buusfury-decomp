/* sub_08025004  (original: 0x08025004-0x08025056 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804915C();


void sub_08025004(int param_1)

{
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(undefined4 *)((char *)__frame + 0x0))
#define local_18 (*(undefined4 *)((char *)__frame + 0x4))
#define local_14 (*(undefined4 *)((char *)__frame + 0x8))
#define local_10 (*(int *)((char *)__frame + 0xc))
  local_1c = 0;
  local_18 = *(undefined4 *)(param_1 + 0xb18);
  local_14 = 0x68;
  local_10 = *(int *)(param_1 + 0xb18) + 0x38;
  sub_0804915C(*(int *)(param_1 + 0xb0c),0x6009800,(int)&local_1c);
  *(uint *)(*(int *)(param_1 + 0xafc) + 0x20) = (uint)(0 < *(int *)(param_1 + 0xb18));
  *(uint *)(*(int *)(param_1 + 0xb00) + 0x20) =
       (uint)(*(int *)(param_1 + 0xb18) < *(int *)(param_1 + 0xb1c));
  return;
}

