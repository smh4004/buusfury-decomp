/* sub_08007714  (original: 0x08007714-0x0800773E in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 75% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


undefined4 sub_08007714(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_3 + 0x84);
  iVar2 = __call_via_r1(param_3,iVar2 + *param_3,iVar2,param_4,param_4);
  if (((*(ushort *)(iVar2 + 4) & 1) == 0) || (*(char *)(param_1 + 4) != (char)param_3[4])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

