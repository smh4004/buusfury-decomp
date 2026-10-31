/* sub_08035914  (original: 0x08035914-0x080359C2 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern int __call_via_r2();
extern undefined volatile DAT_03001c4c;


undefined4 sub_08035914(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    if ((int *)param_3[0xc] == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 5) == (param_1[0xe] ^ 1U)) {
      iVar3 = param_1[7] + param_1[0xd] * param_1[0xb];
      iVar2 = param_1[8] + param_1[0xd] * param_1[0xc];
      if ((((param_3[1] < iVar3 + 0xc) && (iVar3 + -0xc < param_3[3])) && (param_3[2] < iVar2 + 0xc)
          ) && (iVar2 + -0xc < param_3[4])) {
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
  else if (param_2 == 0x26) {
    if (param_1 == param_3) {
      sub_08011944(&DAT_03001c4c,param_1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

