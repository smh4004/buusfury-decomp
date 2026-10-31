/* sub_0801EF5C  (original: 0x0801EF5C-0x0801EF8E in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D876();


undefined4 sub_0801EF5C(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = -1;
    if (0 < *(int *)(param_1 + 0x11c)) {
      iVar2 = *(int *)(param_1 + 0x11c);
    }
    sub_0803D876(iVar2);
    uVar1 = 1;
  }
  else if (param_3 == 1) {
    sub_0803D876(0xffffffff);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

