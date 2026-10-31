/* sub_080007CC  (original: 0x080007CC-0x080007E6 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08004364();
extern undefined1 volatile DAT_03001068;


void sub_080007CC(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_08004364(&DAT_03001068,param_1[iVar2]);
  param_1[iVar2] = 1 - iVar1;
  return;
}

