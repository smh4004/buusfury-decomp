/* sub_08035E56  (original: 0x08035E56-0x08035E82 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08035E56(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  iVar2 = (uVar1 >> 2) + 6;
  if (iVar2 < *(int *)param_2[0x14]) {
    *(char *)((int)param_2 + 0x11) = (char)iVar2;
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}

