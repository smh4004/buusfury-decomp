/* sub_0801900A  (original: 0x0801900A-0x08019042 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


uint sub_0801900A(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar4 = 1;
  iVar3 = 0;
  iVar5 = param_1;
  uVar6 = param_3;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(iVar3 * 4 + param_1 + 0x10);
      uVar2 = __call_via_r3(iVar1,param_2,param_3,*(undefined4 *)(iVar1 + 4),iVar5,param_2,uVar6);
      if (uVar2 == 2) {
        return 2;
      }
      uVar4 = uVar4 & uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  return uVar4;
}

