/* sub_0800051A  (original: 0x0800051A-0x0800058E in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001574;
extern undefined2 volatile DAT_0300157a;
extern undefined2 volatile DAT_0300157c;
extern undefined volatile DAT_0300157e;
extern undefined volatile DAT_03001580;
extern undefined volatile gUnknown_086B82EC;


void sub_0800051A(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)DAT_03001068;
  iVar3 = uVar2 * 0x68;
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  if ((int)(short)(&DAT_0300157c)[uVar2 * 0x34] < (int)param_1) {
    param_1 = (uint)(short)(&DAT_0300157c)[uVar2 * 0x34];
  }
  uVar1 = (ushort)param_1;
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[iVar3] * 0x18] << 0x1e) < 0
     ) {
    do {
      *(ushort *)(&DAT_03001580 + iVar3) = uVar1;
    } while ((uint)*(ushort *)(&DAT_03001580 + iVar3) != (param_1 & 0xffff));
  }
  else if (((&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[iVar3] * 0x18] & 1) == 0) {
    do {
      (&DAT_0300157a)[uVar2 * 0x34] = uVar1;
    } while ((&DAT_0300157a)[uVar2 * 0x34] != uVar1);
  }
  else {
    do {
      *(ushort *)(&DAT_0300157e + iVar3) = uVar1;
    } while ((uint)*(ushort *)(&DAT_0300157e + iVar3) != (param_1 & 0xffff));
  }
  return;
}

