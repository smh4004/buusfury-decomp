/* sub_080327E0  (original: 0x080327E0-0x080327FE in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08000158();
extern int sub_08011CCA();
extern undefined volatile DAT_03001c4c;


int sub_080327E0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08000158(0x2f);
  iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
  if (iVar2 != 1) {
    iVar2 = 0;
  }
  return iVar2;
}

