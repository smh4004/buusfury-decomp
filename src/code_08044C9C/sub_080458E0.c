/* sub_080458E0  (original: 0x080458E0-0x080459A4 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_04000120;
extern byte volatile DAT_03005288;
extern short volatile DAT_03005292;
extern ushort volatile DAT_0300528e;
extern ushort volatile DAT_0300528a;
extern ushort volatile DAT_0300528c;
extern undefined2 volatile DAT_04000128;


void sub_080458E0(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = (uint)DAT_03005288;
  iVar1 = DAT_04000120;
  if (uVar5 != 1) {
    uVar2 = DAT_04000128;
    DAT_04000128 = uVar2 | 0x80;
  }
  uVar6 = (uint)(iVar1 << (uVar5 << 4 & 0xff)) >> 0x10;
  uVar7 = (1 - uVar5) * 0x10;
  uVar3 = iVar1 << (uVar7 & 0xff);
  uVar4 = uVar3 >> 0x10;
  if (DAT_03005292 == 0) {
    if (DAT_0300528e == uVar6) {
      if (3 < DAT_0300528a) {
        DAT_03005292 = (short)(uVar3 >> 0x10);
        goto _0804594C;
      }
      if (((~(uint)DAT_0300528c & 0xffff) == uVar6) && ((~(uint)DAT_0300528e & 0xffff) == uVar4)) {
        DAT_0300528a = DAT_0300528a + 1;
        goto _0804593A;
      }
    }
    else {
      DAT_0300528a = 0;
    }
  }
  else {
_0804593A:
    if (3 < DAT_0300528a) {
_0804594C:
      DAT_0300528c = 0x8001;
      goto _0804594E;
    }
  }
  DAT_0300528c = *(ushort *)("NINTENDO" + (uint)DAT_0300528a * 2);
_0804594E:
  DAT_0300528e = (short)~uVar4;
  DAT_04000120 = ((uint)DAT_0300528c << (uVar7 & 0xff)) + ((~uVar4 & 0xffff) << (uVar5 << 4 & 0xff))
  ;
  if ((uVar5 == 1) && ((DAT_0300528a != 0 || (uVar4 == 0x494e)))) {
    for (uVar2 = 0; uVar2 < 600; uVar2 = uVar2 + 1) {
    }
    if (DAT_03005292 == 0) {
      uVar2 = DAT_04000128;
      DAT_04000128 = uVar2 | 0x80;
    }
  }
  return;
}

