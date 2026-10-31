/* sub_08044A0C  (original: 0x08044A0C-0x08044AF4 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08044668();
extern int volatile DAT_0300525c;
extern undefined4 volatile DAT_03005268;
extern undefined4 volatile DAT_03005278;
extern undefined2 volatile REG_IME;


undefined4 sub_08044A0C(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined2 uVar5;
  
  if (3 < param_2) {
    return 0x400;
  }
  bVar1 = (byte)param_3;
  if (param_1 == 0x20) {
    puVar4 = (ushort *)(&DAT_03005268)[param_2];
    if ((~*puVar4 & 0x8020) != 0) {
      return 0x403;
    }
    uVar3 = (byte)puVar4[0xd] ^ param_3;
    if ((uVar3 & param_3) != 0) {
      return 0x404;
    }
    if (uVar3 != 0) {
      uVar5 = REG_IME;
      REG_IME = 0;
      uVar2 = 0;
      do {
        if ((1 << uVar2 & uVar3) != 0) {
          *(undefined2 *)((&DAT_03005268)[uVar2] + 2) = 0;
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 4);
      *(byte *)(DAT_0300525c + 4) = *(byte *)(DAT_0300525c + 4) & ~(byte)uVar3;
      *(byte *)(puVar4 + 0xd) = bVar1;
      if (param_3 == 0) {
        sub_08044668(param_2,0,puVar4,param_2,uVar5);
        *puVar4 = 0x27;
      }
      REG_IME = uVar5;
    }
  }
  else {
    if (param_1 != 0x10) {
      return 0x600;
    }
    if (*(short *)(&DAT_03005278)[param_2] != -0x7fdc) {
      return 0x403;
    }
    uVar2 = 0;
    uVar3 = 0;
    do {
      if (uVar3 != param_2) {
        uVar2 = uVar2 | *(byte *)((&DAT_03005278)[uVar3] + 3);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    if ((uVar2 & param_3) != 0) {
      return 0x404;
    }
    uVar5 = REG_IME;
    REG_IME = 0;
    *(byte *)(DAT_0300525c + 6) =
         *(byte *)(DAT_0300525c + 6) & ~*(byte *)((int)(&DAT_03005278)[param_2] + 3) | bVar1;
    *(byte *)((&DAT_03005278)[param_2] + 3) = bVar1;
    REG_IME = uVar5;
  }
  return 0;
}

