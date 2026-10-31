/* sub_080007E6  (original: 0x080007E6-0x080007FE in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08004380();
extern undefined1 volatile DAT_03001068;


void sub_080007E6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08004380(&DAT_03001068,param_1[iVar1],param_3,param_4,param_4);
  return;
}

