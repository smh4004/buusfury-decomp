/* sub_08036EA4  (original: 0x08036EA4-0x08036F44 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001c34;


undefined4 sub_08036EA4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_03001c34 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = (*(int *)(DAT_03001c34 + 0x1a0) >> 8) - (*(int *)(param_2 + 0x1a0) >> 8);
    iVar3 = (*(int *)(DAT_03001c34 + 0x1a4) >> 8) - (*(int *)(param_2 + 0x1a4) >> 8);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if ((iVar2 < 0x11) && (iVar3 < 0x11)) {
      iVar2 = *(int *)(DAT_03001c34 + 0x1a8) - *(int *)(param_2 + 0x1a8) >> 10;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      uVar1 = 1;
      if (0xf < iVar2) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

