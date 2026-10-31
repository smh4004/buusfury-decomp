/* sub_0801064C  (original: 0x0801064C-0x08010692 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0801714A();
extern int __call_via_r2();
extern undefined volatile gUnknown_086B82EC;


void sub_0801064C(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x80) + *param_1);
  iVar3 = *(int *)param_1[0x8b];
  __call_via_r2((int *)param_1[0x8b],param_1,*(int *)(iVar3 + 4) + iVar3);
  piVar2 = (int *)sub_0801714A(&gUnknown_086B82EC + (uint)*(byte *)(iVar1 + 0x14) * 0x18);
  param_1[0x8b] = (int)piVar2;
  __call_via_r2(piVar2,param_1,*(int *)*piVar2 + *piVar2);
  return;
}

