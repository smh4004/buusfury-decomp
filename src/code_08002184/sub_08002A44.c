/* sub_08002A44  (original: 0x08002A44-0x08002AB6 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08010692();
extern int sub_0801712C();
extern int sub_0801711C();
extern int volatile DAT_03001c34;
extern byte volatile DAT_03001068;
extern undefined4 volatile DAT_03001544;
extern undefined1 volatile DAT_03001560;
extern undefined1 volatile DAT_03001574;
extern undefined volatile gUnknown_086B82EC;


void sub_08002A44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  uVar2 = param_1[iVar1];
  sub_0801712C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
  DAT_03001068 = (byte)uVar2;
  DAT_03001544 = 0;
  if (DAT_03001c34 != 0) {
    iVar1 = (uVar2 & 0xff) * 0x68;
    sub_08010692(DAT_03001c34,&DAT_03001560 + iVar1,iVar1,0x68,param_4);
  }
  sub_0801711C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
  return;
}

