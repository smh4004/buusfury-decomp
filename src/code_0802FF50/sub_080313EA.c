/* sub_080313EA  (original: 0x080313EA-0x080314A6 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int __call_via_r3();
extern int sub_0800ED18();
extern int __call_via_r2();
extern int sub_0800FDFA();
extern undefined4 volatile DAT_03002b9c;


undefined4 sub_080313EA(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[15];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_3c ((undefined1 *)((char *)__frame + 0x0))
#define auStack_2c ((undefined1 *)((char *)__frame + 0x10))
#define piStack_1c (*(int * *)((char *)__frame + 0x20))
#define piStack_18 (*(int * *)((char *)__frame + 0x24))
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    if ((undefined4 *)param_2[5] != &DAT_03002b9c) {
      sub_0800ECDA(param_2,1);
      sub_0800ED18(param_2,&DAT_03002b9c);
    }
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

