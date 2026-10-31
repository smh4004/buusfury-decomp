/* sub_0800091E  (original: 0x0800091E-0x08000936 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08009692();
extern undefined4 volatile DAT_030019a4;


void sub_0800091E(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08009692(&DAT_030019a4,param_1[iVar1],param_3,param_4,param_4);
  return;
}

