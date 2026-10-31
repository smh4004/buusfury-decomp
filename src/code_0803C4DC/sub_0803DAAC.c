/* sub_0803DAAC  (original: 0x0803DAAC-0x0803DADA in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_0803DAAC(int param_1,short *param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  
  uVar3 = param_4;
  do {
    psVar2 = param_2 + 1;
    if (*param_2 == 8) {
      sVar1 = *psVar2;
      psVar2 = param_2 + 2;
      param_3 = param_3 + -1;
      *(char *)(param_1 + 3) = (char)sVar1;
    }
    else {
      __call_via_r3(param_1,*param_2,param_4,*(undefined4 *)(param_1 + 0x20),uVar3);
    }
    param_3 = param_3 + -1;
    param_2 = psVar2;
  } while (0 < param_3);
  return;
}

