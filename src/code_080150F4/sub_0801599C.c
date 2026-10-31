/* sub_0801599C  (original: 0x0801599C-0x080159F2 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0801599C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    iVar2 = *(int *)(iVar3 + 0x1a0) - *(int *)(iVar1 + 0x1a0);
    iVar4 = *(int *)(iVar3 + 0x1a4) - *(int *)(iVar1 + 0x1a4);
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = -iVar2;
    }
    iVar5 = iVar4;
    if (iVar4 < 0) {
      iVar5 = -iVar4;
    }
    if (iVar3 < iVar5) {
      if (iVar4 < 1) {
        *(undefined1 *)(iVar1 + 0x10) = 1;
      }
      else {
        *(undefined1 *)(iVar1 + 0x10) = 0;
      }
    }
    else if (iVar2 < 1) {
      *(undefined1 *)(iVar1 + 0x10) = 2;
    }
    else {
      *(undefined1 *)(iVar1 + 0x10) = 3;
    }
  }
  return;
}

