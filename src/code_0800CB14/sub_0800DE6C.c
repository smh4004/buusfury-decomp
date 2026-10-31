/* sub_0800DE6C  (original: 0x0800DE6C-0x0800DE94 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 78% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800DE6C(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar1 = uVar1 >> (sbyte)param_1[1];
  if ((int)(uint)uVar1 < **(int **)(param_2 + 0x50)) {
    *(char *)(param_2 + 0x11) = (char)uVar1;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x24);
    __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  }
  return;
}

