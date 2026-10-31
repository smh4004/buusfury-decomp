/* sub_0803A7CC  (original: 0x0803A7CC-0x0803A7EE in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08000158();
extern int sub_08011CCA();
extern undefined volatile DAT_03001c4c;


bool sub_0803A7CC(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08000158(0x12d);
  iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
  return iVar2 == 0;
}

