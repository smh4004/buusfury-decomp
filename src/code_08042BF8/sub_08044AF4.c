/* sub_08044AF4  (original: 0x08044AF4-0x08044B46 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08044668();
extern int volatile DAT_0300525c;
extern undefined4 volatile DAT_03005268;
extern undefined2 volatile REG_IME;


undefined4 sub_08044AF4(uint param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  if (param_1 < 4) {
    uVar1 = REG_IME;
    REG_IME = 0;
    uVar3 = *(ushort *)((&DAT_03005268)[param_1] + 0x34);
    if ((int)((uint)uVar3 << 0x10) < 0) {
      if (uVar3 == 0x8043) {
        uVar3 = 0x48;
      }
      else {
        uVar3 = 0x47;
      }
      *(ushort *)((&DAT_03005268)[param_1] + 0x34) = uVar3;
      *(byte *)(DAT_0300525c + 5) = *(byte *)(DAT_0300525c + 5) & ~(byte)(1 << (param_1 & 0xff));
      sub_08044668(param_1,1);
    }
    REG_IME = uVar1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x400;
  }
  return uVar2;
}

