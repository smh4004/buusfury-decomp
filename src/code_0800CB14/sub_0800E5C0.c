/* sub_0800E5C0  (original: 0x0800E5C0-0x0800E5F4 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E074();
extern int __call_via_r1();
extern int sub_08013C66();


void sub_0800E5C0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + 0x80);
  uVar1 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  sub_08013C66();
  sub_0800E074(param_2,uVar1);
  param_2[0x8e] = param_2[0x8e] + 0x40;
  param_2[0x8f] = param_2[0x8f] + 0x40;
  return;
}

