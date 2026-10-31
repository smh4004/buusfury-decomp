/* sub_0800DF8A  (original: 0x0800DF8A-0x0800DFAC in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0800DF8A(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_2 + 0x50);
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar1 = uVar1 >> 5;
  if (iVar2 <= (int)(uint)uVar1) {
    *(undefined2 *)(param_2 + 0x12) = 0x40;
    *(undefined1 *)(param_2 + 0x11) = 2;
    return;
  }
  *(char *)(param_2 + 0x11) = (char)uVar1;
  return;
}

