/* sub_0804019A  (original: 0x0804019A-0x080401C2 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int * volatile DAT_03000ff4;
extern undefined4 volatile DAT_03004a80;
extern undefined4 volatile _03000FFC;


void sub_0804019A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*DAT_03000ff4 + 0xc);
  __call_via_r1(DAT_03000ff4,iVar1 + *DAT_03000ff4,iVar1,param_4,param_4);
  _03000FFC = DAT_03004a80;
  DAT_03000ff4 = param_1;
  __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
  return;
}

