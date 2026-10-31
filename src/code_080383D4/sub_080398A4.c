/* sub_080398A4  (original: 0x080398A4-0x080398C4 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08000158();
extern int sub_08011CCA();
extern undefined volatile DAT_03001c4c;


bool sub_080398A4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08000158(0x99);
  iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
  return iVar2 == 0;
}

