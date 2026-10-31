/* sub_0803DA10  (original: 0x0803DA10-0x0803DA54 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0803DA10(int *param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar4 = param_1[2];
  iVar5 = param_1[1];
  psVar3 = (short *)((iVar5 * 0x20 + iVar2) * 2 + param_2);
  if (iVar5 < param_1[3]) {
    do {
      iVar1 = *param_1;
      if (iVar1 < param_1[2]) {
        do {
          *psVar3 = param_3;
          psVar3 = psVar3 + 1;
          param_3 = param_3 + 1;
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[2]);
      }
      psVar3 = psVar3 + (0x20 - (iVar4 - iVar2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[3]);
  }
  return;
}

