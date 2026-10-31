/* sub_08029DAE  (original: 0x08029DAE-0x08029E5C in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FDFA();
extern int __call_via_r2();
extern int __call_via_r3();


undefined4 sub_08029DAE(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[15];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_3c ((undefined1 *)((char *)__frame + 0x0))
#define auStack_2c ((undefined1 *)((char *)__frame + 0x10))
#define piStack_1c (*(int * *)((char *)__frame + 0x20))
#define piStack_18 (*(int * *)((char *)__frame + 0x24))
  iVar1 = __call_via_r2(param_2,9,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800FDFA(auStack_2c,param_2);
    piStack_18 = param_2 + 0x68;
    piStack_1c = (int *)(param_1 + 4);
    *piStack_18 = *piStack_18 + *(int *)(param_1 + 4);
    param_2[0x69] = param_2[0x69] + *(int *)(param_1 + 8);
    sub_0800FDFA(auStack_3c,param_2);
    __call_via_r3(param_2,auStack_2c,1,*(int *)(*param_2 + 0x4c) + *param_2);
    iVar1 = __call_via_r2(param_2,auStack_3c,*(int *)(*param_2 + 0x50) + *param_2);
    if (iVar1 == 0) {
      *piStack_18 = *piStack_18 - *piStack_1c;
      piStack_18[1] = piStack_18[1] - *(int *)(param_1 + 8);
      __call_via_r3(param_2,auStack_2c,0,*(int *)(*param_2 + 0x4c) + *param_2);
    }
    else {
      __call_via_r3(param_2,auStack_3c,0,*(int *)(*param_2 + 0x4c) + *param_2);
    }
    uVar2 = 0;
  }
  return uVar2;
}

