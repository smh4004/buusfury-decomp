/* sub_0801D5F8  (original: 0x0801D5F8-0x0801D674 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013C66();
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001560;
extern undefined volatile DAT_030015ac;
extern undefined volatile DAT_030015ae;
extern undefined volatile DAT_030015b0;
extern undefined volatile DAT_030015b4;


void sub_0801D5F8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  iVar3 = (uint)DAT_03001068 * 0x68;
  puVar5 = &DAT_03001560 + iVar3;
  puVar4 = (uint *)(puVar5 + *(int *)(param_1 + 0x114) * 4 + 0x3c);
  uVar6 = *puVar4;
  if (*(int *)(param_1 + 0x150) != 0) {
    uVar2 = ((int *)(param_1 + 0x150))[*(int *)(param_1 + 0x13c) * 2 + 1] & 0xfffffff;
    do {
      *puVar4 = uVar2;
    } while (*puVar4 != uVar2);
  }
  sub_08013C66(puVar5);
  iVar1 = *(int *)(param_1 + 0x114);
  do {
    *(uint *)(puVar5 + iVar1 * 4 + 0x3c) = uVar6;
  } while (*(uint *)(puVar5 + iVar1 * 4 + 0x3c) != uVar6);
  *(uint *)(param_1 + 0x128) = (uint)*(ushort *)(&DAT_030015ac + iVar3);
  *(uint *)(param_1 + 300) = (uint)*(ushort *)(&DAT_030015ae + iVar3);
  *(uint *)(param_1 + 0x130) = (uint)*(ushort *)(&DAT_030015b0 + iVar3);
  *(uint *)(param_1 + 0x134) = (uint)*(ushort *)(&DAT_030015b4 + iVar3);
  return;
}

