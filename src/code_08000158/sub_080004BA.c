/* sub_080004BA  (original: 0x080004BA-0x0800051A in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001574;
extern undefined2 volatile DAT_0300157a;
extern undefined volatile DAT_0300157e;
extern undefined volatile DAT_03001580;
extern undefined volatile gUnknown_086B82EC;


void sub_080004BA(int *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (uint)DAT_03001068 * 0x68;
  iVar5 = *param_1;
  iVar4 = iVar5 + 1;
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[iVar3] * 0x18] << 0x1e) < 0
     ) {
    uVar1 = *(ushort *)(&DAT_03001580 + iVar3);
    *param_1 = iVar4;
    param_1[iVar5 + 1] = (uint)uVar1;
  }
  else if (((&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[iVar3] * 0x18] & 1) == 0) {
    sVar2 = (&DAT_0300157a)[(uint)DAT_03001068 * 0x34];
    *param_1 = iVar4;
    param_1[iVar5 + 1] = (int)sVar2;
  }
  else {
    uVar1 = *(ushort *)(&DAT_0300157e + iVar3);
    *param_1 = iVar4;
    param_1[iVar5 + 1] = (uint)uVar1;
  }
  return;
}

