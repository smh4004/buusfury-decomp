/* sub_080002A6  (original: 0x080002A6-0x080002BA in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001030;


void sub_080002A6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_03001030 + 8);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}

