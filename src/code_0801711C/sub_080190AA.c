/* sub_080190AA  (original: 0x080190AA-0x080190DE in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined volatile _0804BDA8;


undefined4 * sub_080190AA(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &_0804BDA8;
  iVar1 = *(int *)(param_2 + 0xc);
  iVar4 = 0;
  param_1[1] = iVar1;
  puVar5 = param_1;
  iVar6 = param_2;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(iVar4 * 4 + param_2 + 0x10);
      uVar3 = __call_via_r2(puVar2,param_3,*puVar2,param_4,puVar5,iVar6);
      param_1[iVar4 + 2] = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[1]);
  }
  return param_1;
}

