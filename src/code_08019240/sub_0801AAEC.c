/* sub_0801AAEC  (original: 0x0801AAEC-0x0801AB3E in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080293E4();
extern int sub_0800FF44();
extern int __call_via_r2();


void sub_0801AAEC(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(int *)((char *)__frame + 0x0))
#define local_14 (*(int *)((char *)__frame + 0x4))
  sVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(short *)((int)param_2 + 0x12) = sVar1;
  if (sVar1 == 0x10) {
    iVar2 = *(int *)(param_1 + 4);
    sub_0800FF44(&local_18,param_2);
    *(int *)(iVar2 + 0x20) = local_18 << 8;
    *(int *)(iVar2 + 0x24) = local_14 << 8;
    sub_080293E4(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
  }
  else if (sVar1 == 0x20) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

