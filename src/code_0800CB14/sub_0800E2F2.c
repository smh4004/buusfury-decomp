/* sub_0800E2F2  (original: 0x0800E2F2-0x0800E344 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E074();
extern int __call_via_r1();
extern int sub_08013C66();


void sub_0800E2F2(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 0x80);
  uVar1 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sub_08013C66();
  sub_0800E074(param_2,uVar1);
  *(short *)(param_2 + 0x6c) = (short)param_2[0x6c] + 5;
  *(short *)((int)param_2 + 0x1b2) = *(short *)((int)param_2 + 0x1b2) + 5;
  *(short *)(param_2 + 0x6d) = (short)param_2[0x6d] + 5;
  *(short *)((int)param_2 + 0x1b6) = *(short *)((int)param_2 + 0x1b6) + 5;
  param_2[0x8e] = param_2[0x8e] + 0x80;
  param_2[0x8f] = param_2[0x8f] + 0x80;
  return;
}

