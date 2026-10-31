/* sub_0801FC3E  (original: 0x0801FC3E-0x0801FC7A in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801FBD0();
extern int sub_08049138();


void sub_0801FC3E(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int *a0;
  
  a0 = param_3 + param_4 * 2 + 1;
  iVar1 = sub_0801FBD0(param_1,param_2,a0,param_5);
  if ((iVar1 != 0) && (iVar1 = *a0, *a0 = iVar1 - param_5, iVar1 - param_5 == 0)) {
    iVar1 = *param_3;
    *param_3 = iVar1 + -1;
    iVar1 = (iVar1 + -1) - param_4;
    if (iVar1 != 0) {
      sub_08049138((int)a0,(int)(param_3 + param_4 * 2 + 3),iVar1 * 8);
    }
  }
  return;
}

