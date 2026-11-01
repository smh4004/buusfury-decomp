/* sub_08022934  (original: 0x08022934-0x080229B0 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int Player_GetLevel();


void sub_08022934(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = Player_GetLevel(param_2);
  *param_1 = uVar1;
  param_1[1] = *(undefined1 *)(param_2 + 0xc);
  param_1[2] = *(undefined1 *)(param_2 + 0x15);
  iVar3 = 0;
  do {
    param_1[iVar3 + 3] = *(undefined1 *)(param_2 + iVar3 + 0xd);
    iVar2 = iVar3 + 1;
    param_1[iVar3 + 9] = *(undefined1 *)(iVar3 * 2 + param_2 + 0x2e);
    iVar3 = iVar2;
  } while (iVar2 < 6);
  param_1[0xf] = *(undefined1 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x1c);
  param_1[0x14] = *(undefined1 *)(param_2 + 0x28);
  param_1[0x15] = *(undefined1 *)(param_2 + 0x29);
  param_1[0x16] = *(undefined1 *)(param_2 + 0x2a);
  param_1[0x17] = *(undefined1 *)(param_2 + 0x2b);
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 4;
    iVar4 = iVar3 * 2;
    iVar3 = iVar3 + 1;
    *(short *)(param_1 + iVar4 + 0x18) = (short)*(undefined4 *)(iVar2 + param_2 + 0x3c);
  } while (iVar3 < 4);
  return;
}

