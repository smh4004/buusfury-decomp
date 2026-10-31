/* Wfz_LoadContainer  (original: 0x0803D940-0x0803D966 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 70% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08046D18();
extern int sub_08049120();


void Wfz_LoadContainer(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int a3;
  
  a3 = *param_1;
  if (a3 == 0) {
    sub_08046D18(param_2,param_1 + 2,param_1[1],0,param_4);
  }
  else if ((a3 == 1) || (a3 == 2)) {
    sub_08049120(param_2,(int)(param_1 + 2),(int)param_1,a3);
  }
  return;
}

