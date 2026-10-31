/* sub_0801F120  (original: 0x0801F120-0x0801F184 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03002f54;


void sub_0801F120(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_2 = (byte)*(undefined4 *)(*(int *)(param_1 + 0x130) + 0xba0);
  iVar1 = 2;
  param_2[1] = (byte)DAT_03002f54;
  iVar2 = 0;
  if (*param_2 != 0) {
    do {
      iVar3 = iVar2 * 8;
      param_2[iVar1] = (byte)*(undefined4 *)(iVar3 + *(int *)(param_1 + 0x130) + 0xba4);
      iVar2 = iVar2 + 1;
      param_2[iVar1 + 1] =
           (byte)((uint)*(undefined4 *)(iVar3 + *(int *)(param_1 + 0x130) + 0xba4) >> 8);
      iVar4 = iVar1 + 3;
      param_2[iVar1 + 2] = *(byte *)(iVar3 + *(int *)(param_1 + 0x130) + 0xba8);
      iVar1 = iVar1 + 4;
      param_2[iVar4] = *(byte *)(iVar3 + *(int *)(param_1 + 0x130) + 0xba9);
    } while (iVar2 < (int)(uint)*param_2);
  }
  return;
}

