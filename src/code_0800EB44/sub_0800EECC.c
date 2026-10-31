/* sub_0800EECC  (original: 0x0800EECC-0x0800EF08 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 33% of instructions covered.
 */
#include "ghidra_types.h"


void sub_0800EECC(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x38) = param_2;
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(int *)(param_1 + 0x34) = param_2;
  }
  else if (param_2 == 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x3c);
  }
  else {
    *(int *)(param_1 + 0x34) = param_1 + 0x74;
    iVar2 = 0;
    do {
      iVar3 = param_1 + iVar2;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x3c) + iVar2);
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar3 + 0x74) = *(undefined1 *)(param_2 + (uint)*pbVar1);
    } while (iVar2 < 0x100);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

