/* sub_080007B6  (original: 0x080007B6-0x080007CC in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08004364();
extern undefined1 volatile DAT_03001068;


void sub_080007B6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_08004364(&DAT_03001068,param_1[iVar2]);
  param_1[iVar2] = iVar1;
  return;
}

