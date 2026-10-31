/* sub_080455DC  (original: 0x080455DC-0x08045658 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08044668();
extern int sub_080437C2();
extern int volatile DAT_0300525c;
extern undefined4 volatile DAT_03005268;
extern undefined4 volatile DAT_03005278;


void sub_080455DC(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
    do {
      if (*(char *)((&DAT_03005278)[uVar2] + 2) != '\0') {
        *(undefined1 *)((&DAT_03005278)[uVar2] + 2) = 0;
      }
      psVar3 = (short *)(&DAT_03005268)[uVar2];
      if (*psVar3 == -0x7fe0) {
        sub_08044668(uVar2,0,psVar3);
        iVar1 = DAT_0300525c;
        *(byte *)(DAT_0300525c + 4) = *(byte *)(DAT_0300525c + 4) & ~*(byte *)(psVar3 + 0xd);
        if (*(char *)((int)psVar3 + 0x2d) == '\x01') {
          *(byte *)(iVar1 + 7) = *(byte *)(iVar1 + 7) | (byte)(1 << uVar2);
        }
        *psVar3 = 0x26;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 4);
  }
  *(undefined1 *)(DAT_0300525c + 0xe) = 0;
  sub_080437C2(0x24,param_2);
  return;
}

