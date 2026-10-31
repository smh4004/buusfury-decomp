/* sub_08010D26  (original: 0x08010D26-0x08010D7C in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 32% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0800EEB0();
extern undefined * volatile gUnknown_0807273C;


undefined4 sub_08010D26(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x22c) + 4);
    iVar3 = *piVar1;
    iVar3 = __call_via_r1(piVar1,*(int *)(iVar3 + 0xc) + iVar3);
    if ((*(int *)(param_1 + 0x14) == iVar3) && (iVar3 = sub_0800EEB0(param_1,0), iVar3 != 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else if ((*(undefined **)(param_1 + 0x14) == (&gUnknown_0807273C)[param_2]) &&
          (iVar3 = sub_0800EEB0(param_1,param_2,param_3,param_4,param_4), iVar3 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

