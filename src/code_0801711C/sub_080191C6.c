/* sub_080191C6  (original: 0x080191C6-0x080191E8 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_080190AA();


int sub_080191C6(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = sub_0803D5B8(*(int *)(param_1 + 0xc) * 4 + 0xc);
  if (iVar1 != 0) {
    sub_080190AA(iVar1,param_1,param_2);
  }
  return iVar1;
}

