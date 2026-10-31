/* sub_08041B18  (original: 0x08041B18-0x08041BDC in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08044BCE();
extern char volatile DAT_03004bf0;
extern byte volatile DAT_0300521c;
extern byte volatile DAT_03004bf2;
extern byte volatile DAT_03004bf3;
extern char volatile DAT_03004bfd;
extern char volatile DAT_03004bfe;
extern undefined1 volatile DAT_03004c04;
extern undefined1 volatile DAT_03004c08;
extern undefined1 volatile DAT_03004c0c;
extern undefined1 volatile DAT_03004c10;
extern undefined1 volatile DAT_03004c2c;
extern undefined4 volatile DAT_03004c30;
extern undefined4 volatile DAT_03005278;


void sub_08041B18(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  if (DAT_03004bf0 != -0x71) {
    uVar3 = 0;
    do {
      if ((((uint)DAT_0300521c & 2 << uVar3 & 0xffU) != 0) &&
         (*(char *)((&DAT_03005278)[uVar3] + 0x12) != '\0')) {
        DAT_03004bf2 = (byte)(2 << uVar3) | DAT_03004bf2;
        sub_08044BCE(uVar3);
        cVar1 = (&DAT_03004c04)[uVar3];
        cVar2 = (&DAT_03004c2c)[uVar3 * 8];
        if ((char)(cVar1 + '\x01') != cVar2) {
          if (cVar1 == cVar2) {
            (&DAT_03004c0c)[uVar3] = (&DAT_03004c0c)[uVar3] + '\x01';
            (&DAT_03004c30)[uVar3 * 2] = 0;
          }
          else if ((char)(cVar1 + -1) == cVar2) {
            (&DAT_03004c10)[uVar3] = (&DAT_03004c10)[uVar3] + '\x01';
            (&DAT_03004c30)[uVar3 * 2] = 0;
          }
          else {
            (&DAT_03004c08)[uVar3] = (&DAT_03004c08)[uVar3] + '\x01';
          }
        }
        (&DAT_03004c04)[uVar3] = (&DAT_03004c2c)[uVar3 * 8];
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    if (((DAT_0300521c & ~DAT_03004bf2) == 0) && ((DAT_0300521c & ~DAT_03004bf3) != 0)) {
      DAT_03004bfd = DAT_03004bfd + '\x01';
    }
    if (((DAT_0300521c & ~DAT_03004bf3) == 0) && ((DAT_0300521c & ~DAT_03004bf2) != 0)) {
      DAT_03004bfe = DAT_03004bfe + '\x01';
    }
  }
  return;
}

