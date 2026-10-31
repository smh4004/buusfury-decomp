/* sub_0800348A  (original: 0x0800348A-0x080034B8 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08013C66();
extern undefined1 volatile DAT_03001573;
extern undefined2 volatile DAT_03001576;
extern undefined2 volatile DAT_03001578;
extern undefined2 volatile DAT_0300157a;
extern undefined2 volatile DAT_0300157c;


void sub_0800348A(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (&DAT_03001576)[iVar1 * 0x34] = (&DAT_03001578)[iVar1 * 0x34];
    (&DAT_0300157a)[iVar1 * 0x34] = (&DAT_0300157c)[iVar1 * 0x34];
    if ((int)((uint)(byte)(&DAT_03001573)[iVar1 * 0x68] << 0x1f) < 0) {
      sub_08013C66();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  return;
}

