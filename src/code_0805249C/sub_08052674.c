/* sub_08052674  (original: 0x08052674-0x0805269C in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0803D63C();
extern undefined volatile _0804CFB8;


void sub_08052674(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &_0804CFB8;
  iVar1 = *(int *)param_1[1];
  iVar2 = *(int *)(iVar1 + 0xc);
  __call_via_r1((int *)param_1[1],iVar2 + iVar1,iVar2,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

