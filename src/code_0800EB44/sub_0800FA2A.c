/* sub_0800FA2A  (original: 0x0800FA2A-0x0800FA80 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C0C();
extern int __call_via_r3();
extern int sub_0800E8E6();
extern undefined volatile DAT_03001c4c;


undefined4 sub_0800FA2A(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x28c);
  if (*piVar3 == 0) {
    uVar1 = 1;
  }
  else {
    sub_0800E8E6(param_1,param_2,param_3,param_4,param_4);
    iVar2 = *piVar3 - *(int *)(param_2 + 0x18);
    *piVar3 = iVar2;
    if (iVar2 < 1) {
      *piVar3 = 0;
      sub_08011C0C(&DAT_03001c4c,0x11,param_1);
      iVar2 = *(int *)(*(int *)(param_1 + 0x224) + 0x14);
      __call_via_r3(iVar2,param_1,param_2,*(undefined4 *)(iVar2 + 8));
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

