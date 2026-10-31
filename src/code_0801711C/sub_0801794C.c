/* sub_0801794C  (original: 0x0801794C-0x0801796A in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


undefined4 sub_0801794C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 * 0x10000000 < 0) {
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)**(int **)(param_1 + 0x14);
    iVar2 = *piVar3;
    uVar1 = __call_via_r1(*(int **)(param_1 + 0x14),iVar2 + (int)piVar3,iVar2,param_4,param_4);
  }
  return uVar1;
}

