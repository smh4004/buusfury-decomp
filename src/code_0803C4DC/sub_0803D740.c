/* sub_0803D740  (original: 0x0803D740-0x0803D756 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile DAT_02000800;


int sub_0803D740(void)

{
  int iVar1;
  ushort *puVar2;
  
  puVar2 = &DAT_02000800;
  iVar1 = 0;
  while( true ) {
    iVar1 = iVar1 + 1;
    if (*puVar2 == 0) break;
    puVar2 = (ushort *)((uint)*puVar2 * 4 + 0x2000000);
  }
  return iVar1;
}

