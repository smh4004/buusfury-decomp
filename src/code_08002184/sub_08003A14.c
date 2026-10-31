/* sub_08003A14  (original: 0x08003A14-0x08003A4E in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_0300158c;


void sub_08003A14(int *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar3 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  puVar2 = (ushort *)(&DAT_0300158c + param_1[iVar4 + -1] * 0x68);
  uVar1 = *puVar2;
  do {
    *puVar2 = (ushort)((uint)uVar1 + iVar3);
  } while ((uint)*puVar2 != ((uint)uVar1 + iVar3 & 0xffff));
  return;
}

