/* sub_08008924  (original: 0x08008924-0x0800897A in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_BG0VOFS;
extern undefined2 volatile REG_BG0HOFS;


void sub_08008924(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar5 = *(int *)(iVar4 + 4);
  iVar7 = *(int *)(iVar4 + 0x10);
  iVar8 = *(int *)(param_2 + 0x34);
  iVar2 = *(int *)(param_2 + 0x40);
  iVar4 = *(int *)(iVar4 + 0x18);
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] =
       (short)(*(int *)(param_2 + 0x18) * *(int *)(iVar3 + 4) + *(int *)(iVar3 + 0xc) +
               *(int *)(param_2 + 0x30) + *(int *)(param_2 + 0x40) * *(int *)(iVar3 + 0x14) >> 10);
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = (short)(iVar6 * iVar5 + iVar7 + iVar8 + iVar2 * iVar4 >> 10);
  return;
}

