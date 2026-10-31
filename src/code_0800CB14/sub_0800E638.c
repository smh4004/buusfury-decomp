/* sub_0800E638  (original: 0x0800E638-0x0800E66E in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08004098();
extern int sub_0800E1D0();
extern undefined volatile gUnknown_0877D028;


void sub_0800E638(int param_1,int *param_2)

{
  int iVar1;
  unsigned int __frame[34];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_88 ((undefined1 *)((char *)__frame + 0x0))
#define local_1c ((uint *)((char *)__frame + 0x6c))
  sub_0800E1D0();
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 < 0) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    local_1c[0] = (uint)(*(ushort *)(iVar1 + 2) >> 8);
    sub_08004098(auStack_88,&gUnknown_0877D028,local_1c);
  }
  return;
}

