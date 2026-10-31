/* sub_080414AC  (original: 0x080414AC-0x08041504 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03004b30;
extern int volatile DAT_0300525c;
extern undefined1 volatile DAT_03004b42;


void sub_080414AC(undefined4 param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  
  iVar1 = DAT_0300525c;
  uVar3 = 0;
  DAT_03004b30 = 0;
  if (*(char *)(DAT_0300525c + 8) != '\0') {
    do {
      if (((1 << (uVar3 & 0xff) & param_2) != 0) && (*(byte *)(uVar3 * 0x20 + iVar1 + 0x16) < 4)) {
        (&DAT_03004b42)[DAT_03004b30] = (char)uVar3;
        DAT_03004b30 = DAT_03004b30 + 1;
      }
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < *(byte *)(iVar1 + 8));
    uVar4 = (ushort)DAT_03004b30;
    if ((uVar4 != 0) && (uVar2 = 0, uVar4 != 0)) {
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
  }
  return;
}

