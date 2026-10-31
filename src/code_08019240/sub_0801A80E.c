/* sub_0801A80E  (original: 0x0801A80E-0x0801A83E in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0801A80E(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar2;
  if (iVar1 == 0) {
    if (0x10 < uVar2) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
    }
  }
  else {
    *(byte *)((int)param_2 + 0x11) = (byte)(((uint)uVar2 << 0x1c) >> 0x1f);
  }
  return;
}

