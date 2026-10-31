/* sub_080422D4  (original: 0x080422D4-0x08042372 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08044A0C();
extern int sub_08044AF4();
extern int volatile DAT_0300525c;
extern undefined4 volatile DAT_03005268;
extern undefined4 volatile DAT_03005278;


void sub_080422D4(byte param_1)

{
  byte bVar1;
  short *psVar2;
  uint uVar3;
  
  if (*(char *)(DAT_0300525c + 4) != '\0') {
    uVar3 = 0;
    do {
      if (((int)((uint)*(ushort *)(&DAT_03005268)[uVar3] << 0x10) < 0) &&
         (bVar1 = (byte)((ushort *)(&DAT_03005268)[uVar3])[0xd], (bVar1 & param_1) != 0)) {
        sub_08044A0C(0x20,uVar3,bVar1 & ~param_1);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
  }
  if (*(char *)(DAT_0300525c + 5) != '\0') {
    uVar3 = 0;
    do {
      if (((int)((uint)*(ushort *)((&DAT_03005268)[uVar3] + 0x34) << 0x10) < 0) &&
         ((*(byte *)((&DAT_03005268)[uVar3] + 0x4e) & param_1) != 0)) {
        sub_08044AF4(uVar3);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
  }
  if (*(byte *)(DAT_0300525c + 6) != 0) {
    *(byte *)(DAT_0300525c + 6) = *(byte *)(DAT_0300525c + 6) & ~param_1;
    uVar3 = 0;
    do {
      psVar2 = (short *)(&DAT_03005278)[uVar3];
      if ((*psVar2 == -0x7fdc) && ((*(byte *)((int)psVar2 + 3) & param_1) != 0)) {
        *(byte *)((int)psVar2 + 3) = *(byte *)((int)psVar2 + 3) & ~param_1;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
  }
  return;
}

