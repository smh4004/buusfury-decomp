/* sub_08035F9E  (original: 0x08035F9E-0x08035FF6 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_08035F9E(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = 1;
  uVar2 = *(short *)((int)param_2 + 0x12) + 1;
  uVar3 = (uint)uVar2;
  *(ushort *)((int)param_2 + 0x12) = uVar2;
  if (uVar3 < 8) {
    uVar1 = (uint)(uVar2 >> 2);
  }
  else if (0x8b < uVar3) {
    uVar1 = (int)(uVar3 - 0x84) >> 2;
  }
  uVar4 = param_4;
  if (*(byte *)((int)param_2 + 0x11) != uVar1) {
    if (uVar1 == 1) {
      param_2[0x73] = 1;
      uVar4 = 1;
    }
    else if (uVar1 == 2) {
      uVar4 = 0;
      param_2[0x73] = 0;
    }
  }
  if ((int)uVar1 < *(int *)param_2[0x14]) {
    *(char *)((int)param_2 + 0x11) = (char)uVar1;
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,uVar4,param_4);
  }
  return;
}

