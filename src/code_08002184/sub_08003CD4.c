/* sub_08003CD4  (original: 0x08003CD4-0x08003CF6 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined * volatile gScriptSetterFuncs;


void sub_08003CD4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)*param_2;
  pbVar3 = (byte *)*param_2 + 1;
  *param_2 = pbVar3;
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  __call_via_r1(param_1[iVar2],(&gScriptSetterFuncs)[bVar1],&gScriptSetterFuncs,pbVar3,param_4);
  return;
}

