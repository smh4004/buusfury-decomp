/* sub_0803CB50  (original: 0x0803CB50-0x0803CB82 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0803CB50(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = 0;
  uVar2 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar2;
  if (0x2f < uVar2) {
    iVar1 = (int)(uVar2 - 0x30) >> 3;
  }
  if (iVar1 < *(int *)param_2[0x14]) {
    *(char *)((int)param_2 + 0x11) = (char)iVar1;
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  }
  return;
}

