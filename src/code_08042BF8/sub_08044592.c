/* sub_08044592  (original: 0x08044592-0x080445FC in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080437C2();
extern int volatile DAT_03005264;
extern int volatile DAT_03005260;
extern undefined1 * volatile DAT_0300525c;


void sub_08044592(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar2 = DAT_0300525c;
  if (((param_2 == 0) && (*(char *)(*(int *)(DAT_03005264 + 0xdc) + 4) == '\0')) &&
     (*(char *)(DAT_03005260 + 5) != '\0')) {
    uVar3 = 0;
    *DAT_0300525c = 0;
    do {
      if (((uint)*(byte *)(DAT_03005260 + 5) & 1 << uVar3 & 0xffU & (uint)(byte)puVar2[3]) != 0) {
        bVar1 = (byte)(1 << uVar3);
        puVar2[2] = puVar2[2] | bVar1;
        puVar2[3] = puVar2[3] & ~bVar1;
        puVar2[1] = puVar2[1] + '\x01';
        *(undefined1 *)(DAT_03005260 + uVar3 + 10) = 0;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    *(undefined1 *)(DAT_03005260 + 5) = 0;
  }
  sub_080437C2(param_1);
  return;
}

