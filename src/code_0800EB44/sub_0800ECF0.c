/* sub_0800ECF0  (original: 0x0800ECF0-0x0800ED18 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined volatile gUnknown_08072670;


void sub_0800ECF0(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (&gUnknown_08072670)[param_2];
  param_1[0x14] = *(int *)(param_1[0x16] + (uint)bVar1 * 4 + 0x54);
  iVar2 = *(int *)(param_1[0x16] + 0x50);
  if (iVar2 != 0) {
    param_1[0x13] = *(int *)(iVar2 + (uint)bVar1 * 4);
  }
  __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x2c) + *param_1);
  return;
}

