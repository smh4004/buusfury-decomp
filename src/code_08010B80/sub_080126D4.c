/* sub_080126D4  (original: 0x080126D4-0x08012700 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_080126D4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  
  if (((param_1[0x34] != 0) && (param_2 != (int *)0x0)) &&
     (iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2),
     *(short *)(iVar2 + 0x16) != 0)) {
    iVar2 = param_2[0x68] >> 8;
    uVar7 = CONCAT22((short)((uint)param_2[0x69] >> 8),(short)((uint)param_2[0x68] >> 8));
    param_1[0x31] = param_1[0x31] + 1;
    param_1[0x33] = 1;
    iVar9 = iVar2;
    iVar6 = *param_1;
    do {
      iVar1 = iVar6;
      iVar6 = iVar1 + -1;
      if (iVar6 < 0) goto _080127A6;
      iVar3 = param_1[iVar1];
    } while ((((short)uVar7 < *(short *)(iVar3 + 4)) || (*(short *)(iVar3 + 8) <= (short)uVar7)) ||
            ((sVar8 = (short)((uint)uVar7 >> 0x10), sVar8 < *(short *)(iVar3 + 6) ||
             ((*(short *)(iVar3 + 10) <= sVar8 ||
              (iVar5 = **(int **)(iVar3 + 0xc),
              iVar3 = __call_via_r3(*(int **)(iVar3 + 0xc),iVar3,param_2,*(int *)(iVar5 + 8) + iVar5
                                    ,iVar2,uVar7,iVar9), iVar3 == 0))))));
    piVar4 = *(int **)(param_1[iVar1] + 0xc);
    iVar6 = *piVar4;
    __call_via_r3(piVar4,param_1[iVar1],param_2,*(int *)(iVar6 + 4) + iVar6,iVar2,uVar7,iVar9);
_080127A6:
    param_1[0x33] = 0;
  }
  return;
}

