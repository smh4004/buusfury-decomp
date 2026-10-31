/* sub_0803CFC2  (original: 0x0803CFC2-0x0803D046 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803CE94();
extern int sub_08050484();


void sub_0803CFC2(undefined4 param_1,int param_2)

{
  int *piVar1;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(int *)((char *)__frame + 0x0))
#define auStack_1c ((undefined1 *)((char *)__frame + 0x4))
#define auStack_18 ((undefined1 *)((char *)__frame + 0x8))
#define auStack_14 ((undefined1 *)((char *)__frame + 0xc))
  local_20 = 0;
  sub_08050484(auStack_1c,1);
  sub_08050484(auStack_18,0);
  sub_08050484(auStack_14,0xffffffff);
  sub_0803CE94(param_1,param_2);
  *(int *)(param_2 + 0x1a4) =
       *(int *)(param_2 + 0x1a4) +
       *(int *)(auStack_1c + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4);
  piVar1 = (int *)(*(int *)(param_2 + 0x1f8) + 0x1a4);
  *piVar1 = *piVar1 + *(int *)(auStack_1c + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4
                              );
  piVar1 = (int *)(*(int *)(*(int *)(param_2 + 0x1f8) + 0x1f8) + 0x1a4);
  *piVar1 = *piVar1 + *(int *)(auStack_1c + (uint)*(byte *)(*(int *)(param_2 + 500) + 0x11) * 4 + -4
                              );
  return;
}

