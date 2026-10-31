/* sub_08002C2A  (original: 0x08002C2A-0x08002C68 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001574;
extern undefined volatile gUnknown_086B82EC;


void sub_08002C2A(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((&gUnknown_086B82EC)[(uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18] & 1) ==
       0) && (-1 < (int)((uint)(byte)(&gUnknown_086B82EC)
                                     [(uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18]
                        << 0x1e))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}

