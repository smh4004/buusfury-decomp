/* sub_08028F2C  (original: 0x08028F2C-0x08028FFE in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08011944();
extern int sub_08049138();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;


undefined4 sub_08028F2C(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    if ((int *)param_3[0xc] == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 5) == (param_1[0xe] ^ 1U)) {
      iVar2 = param_1[7] + param_1[0xd] * param_1[0xb];
      iVar3 = param_1[8] + param_1[0xd] * param_1[0xc];
      if ((((param_3[1] < iVar2 + 0xc) && (iVar2 + -0xc < param_3[3])) && (param_3[2] < iVar3 + 0xc)
          ) && (iVar3 + -0xc < param_3[4])) {
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
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),
                 *(int *)(param_1[0xf] + 8),0x40);
    sub_08049138((uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010040,*(int *)(param_1[0xf] + 0x14),
                 0x80);
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

