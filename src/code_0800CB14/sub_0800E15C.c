/* sub_0800E15C  (original: 0x0800E15C-0x0800E1AE in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08004098();
extern undefined volatile gUnknown_0877D028;


void sub_0800E15C(undefined4 param_1,int *param_2)

{
  int iVar1;
  unsigned int __frame[33];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_84 ((undefined1 *)((char *)__frame + 0x0))
#define local_18 ((uint *)((char *)__frame + 0x6c))
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  if (0 < *(int *)(iVar1 + 8)) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  }
  if ((*(short *)(iVar1 + 0x16) != 0) && (*(int *)(iVar1 + 8) == 0)) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    local_18[0] = (uint)(*(ushort *)(iVar1 + 2) >> 8);
    sub_08004098(auStack_84,&gUnknown_0877D028,local_18);
  }
  return;
}

