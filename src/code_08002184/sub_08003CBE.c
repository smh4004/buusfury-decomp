/* sub_08003CBE  (original: 0x08003CBE-0x08003CD4 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined * volatile gScriptNativeFuncs;


void sub_08003CBE(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *(byte *)*param_2;
  pbVar2 = (byte *)*param_2 + 1;
  *param_2 = pbVar2;
  __call_via_r1(param_1,(&gScriptNativeFuncs)[bVar1],&gScriptNativeFuncs,pbVar2,param_4);
  return;
}

