/* sub_0803AE10  (original: 0x0803AE10-0x0803AE5A in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804912C();


void sub_0803AE10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 * -2 + 3;
  iVar2 = 0;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      *(int *)(param_1 + iVar2 * 4) = iVar1;
      *(int *)(iVar1 * 4 + param_1 + -4) = iVar2;
      if (iVar3 < 0) {
        iVar3 = iVar2 * 4 + iVar3 + 6;
      }
      else {
        iVar3 = (iVar2 - iVar1) * 4 + iVar3 + 10;
        iVar1 = iVar1 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (0x80 - param_2 != 0) {
    sub_0804912C(param_2 * 4 + param_1,0,(0x80 - param_2) * 4);
  }
  return;
}

