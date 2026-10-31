/* sub_08010692  (original: 0x08010692-0x080106F6 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801064C();
extern int sub_0800EDF8();
extern int sub_0801714A();
extern int sub_0801713C();
extern int __call_via_r2();
extern undefined volatile gUnknown_086B82EC;


void sub_08010692(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = sub_0801713C(&gUnknown_086B82EC + (uint)*(byte *)(param_2 + 0x14) * 0x18);
  sub_0800EDF8(param_1,uVar1);
  iVar3 = *(int *)param_1[0x8b];
  __call_via_r2((int *)param_1[0x8b],param_1,*(int *)(iVar3 + 4) + iVar3);
  piVar2 = (int *)sub_0801714A(&gUnknown_086B82EC + (uint)*(byte *)(param_2 + 0x14) * 0x18);
  param_1[0x8b] = (int)piVar2;
  __call_via_r2(piVar2,param_1,*(int *)*piVar2 + *piVar2);
  sub_0801064C(param_1);
  __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
  return;
}

