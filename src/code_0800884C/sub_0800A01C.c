/* sub_0800A01C  (original: 0x0800A01C-0x0800A134 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int sub_0800FDFA();
extern int __call_via_r2();


undefined4 sub_0800A01C(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
#define local_30 (*(undefined1 * *)((char *)__frame + 0x10))
#define auStack_2c ((undefined1 *)((char *)__frame + 0x14))
#define local_1c (*(int * *)((char *)__frame + 0x24))
#define local_18 (*(int * *)((char *)__frame + 0x28))
  sub_0800FDFA(auStack_2c);
  local_18 = (int *)(param_1 + 4);
  piVar4 = param_2 + 0x68;
  local_1c = (int *)(param_1 + 8);
  *piVar4 = *piVar4 + *(int *)(param_1 + 4);
  param_2[0x69] = param_2[0x69] + *local_1c;
  local_30 = auStack_2c;
  sub_0800FDFA(auStack_40,param_2);
  __call_via_r3(param_2,local_30,1,*(int *)(*param_2 + 0x4c) + *param_2);
  iVar2 = __call_via_r2(param_2,auStack_40,*(int *)(*param_2 + 0x50) + *param_2);
  if (iVar2 == 0) {
    __call_via_r3(param_2,local_30,0,*(int *)(*param_2 + 0x4c) + *param_2);
    iVar2 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
    *piVar4 = *piVar4 - *local_18;
    param_2[0x69] = param_2[0x69] - *local_1c;
    uVar3 = 0;
  }
  else {
    iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x12);
    __call_via_r3(param_2,auStack_40,0,*(int *)(*param_2 + 0x4c) + *param_2);
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 == 0) {
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      sVar1 = *(short *)(param_1 + 0xe);
      *piVar4 = (int)*(short *)(param_1 + 0xc) << 8;
      param_2[0x69] = (int)sVar1 << 8;
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

