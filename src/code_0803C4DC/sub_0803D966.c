/* sub_0803D966  (original: 0x0803D966-0x0803D9AC in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 53% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049120();
extern int sub_080491A8();
extern int sub_08049138();
extern int sub_0804918C();


void sub_0803D966(int *param_1,int param_2,int param_3)

{
  int *a1;
  int iVar1;
  
  a1 = param_1 + 2;
  iVar1 = *param_1;
  if (param_3 == 0) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        sub_08049120(param_2,(int)a1,0,(int)param_1);
      }
      return;
    }
    sub_08049138(param_2,(int)a1,param_1[1]);
  }
  else {
    if (iVar1 == 0) {
      sub_0804918C(param_2,(int)a1,param_3,param_1[1]);
      return;
    }
    if (iVar1 == 1) {
      sub_080491A8(param_2,(int)a1,param_3,(int)param_1);
      return;
    }
  }
  return;
}

