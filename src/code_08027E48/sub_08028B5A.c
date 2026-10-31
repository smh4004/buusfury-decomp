/* sub_08028B5A  (original: 0x08028B5A-0x08028BEE in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_08028B5A(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    if (*(int **)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 0x14) == (param_1[0x11] ^ 1U)) {
      iVar3 = param_1[8] + param_1[0x10] * param_1[0xe];
      iVar2 = param_1[9] + param_1[0x10] * param_1[0xf];
      if ((((*(int *)(param_3 + 4) < iVar3 + 0xc) && (iVar3 + -0xc < *(int *)(param_3 + 0xc))) &&
          (*(int *)(param_3 + 8) < iVar2 + 0xc)) && (iVar2 + -0xc < *(int *)(param_3 + 0x10))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 0xb) {
    uVar1 = 0;
  }
  else if (param_2 == 0xc) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

