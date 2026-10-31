/* sub_080127AE  (original: 0x080127AE-0x08012846 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 57% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_080127AE(int *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    sVar1 = (short)((uint)*(undefined4 *)(param_2 + 0x1a0) >> 8);
    sVar2 = (short)((uint)*(undefined4 *)(param_2 + 0x1a4) >> 8);
    iVar3 = *param_1;
    do {
      iVar6 = iVar3 + -1;
      if (iVar6 < 0) {
        return 0;
      }
      iVar5 = param_1[iVar3];
      iVar3 = iVar6;
    } while ((((sVar1 < *(short *)(iVar5 + 4)) || (*(short *)(iVar5 + 8) <= sVar1)) ||
             (sVar2 < *(short *)(iVar5 + 6))) ||
            ((*(short *)(iVar5 + 10) <= sVar2 ||
             (iVar6 = **(int **)(iVar5 + 0xc),
             iVar6 = __call_via_r2(*(int **)(iVar5 + 0xc),param_2,*(int *)(iVar6 + 0xc) + iVar6),
             iVar6 == 0))));
    uVar4 = 1;
  }
  return uVar4;
}

