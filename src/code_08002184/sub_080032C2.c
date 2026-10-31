/* sub_080032C2  (original: 0x080032C2-0x08003310 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08004364();
extern undefined1 volatile DAT_03001068;


void sub_080032C2(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *param_1;
  uVar4 = 0;
  *param_1 = iVar1 + -1;
  iVar5 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = param_1[iVar1 + -1];
  uVar3 = 0;
  if (0 < iVar5) {
    do {
      iVar2 = sub_08004364(&DAT_03001068,iVar1 + uVar3);
      if (iVar2 != 0) {
        uVar4 = uVar4 | 1 << (uVar3 & 0xff);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar5);
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = uVar4;
  return;
}

