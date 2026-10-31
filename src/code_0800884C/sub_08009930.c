/* sub_08009930  (original: 0x08009930-0x080099A4 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 94% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08009930(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  uVar2 = 0;
  if (-1 < *param_1) {
    uVar2 = *param_1 >> 3;
  }
  if (-1 < param_1[1]) {
    iVar6 = param_1[1] >> 3;
  }
  iVar3 = 0x100;
  iVar7 = iVar3;
  if (param_1[2] < 0x800) {
    iVar7 = param_1[2] + 7 >> 3;
  }
  if (param_1[3] < 0x800) {
    iVar3 = param_1[3] + 7 >> 3;
  }
  for (; iVar6 < iVar3; iVar6 = iVar6 + 1) {
    for (uVar1 = uVar2; (int)uVar1 < iVar7; uVar1 = uVar1 + 1) {
      puVar4 = (uint *)(((int)uVar1 >> 5) * 4 + iVar6 * 0x20 + param_2);
      uVar5 = 1 << (uVar1 & 0x1f);
      if (param_3 == 0) {
        *puVar4 = *puVar4 & ~uVar5;
      }
      else {
        *puVar4 = uVar5 | *puVar4;
      }
    }
  }
  return;
}

