/* sub_08003310  (original: 0x08003310-0x08003320 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_03001068;


void sub_08003310(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  uVar4 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  iVar1 = 1 << (uVar4 & 0xff);
  if (iVar1 <= (int)uVar3) {
    uVar3 = iVar1 - 1;
  }
  iVar1 = 0;
  if (0 < (int)uVar4) {
    do {
      if ((uVar3 & 1) == 0) {
        sub_08004396(&DAT_03001068,iVar2 + iVar1);
      }
      else {
        sub_08004380();
      }
      uVar3 = (int)uVar3 >> 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar4);
  }
  return;
}

