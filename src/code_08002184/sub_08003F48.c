/* sub_08003F48  (original: 0x08003F48-0x08003F78 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern undefined * volatile gScriptNativeFuncs;
extern undefined * volatile gScriptSetterFuncs;


void sub_08003F48(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)*param_2;
  pbVar3 = (byte *)*param_2 + 1;
  *param_2 = pbVar3;
  __call_via_r1(param_1,(&gScriptNativeFuncs)[bVar1],pbVar3,param_4,param_4);
  iVar2 = param_1[*param_1] + -1;
  param_1[*param_1] = iVar2;
  __call_via_r1(iVar2,(&gScriptSetterFuncs)[bVar1]);
  return;
}

