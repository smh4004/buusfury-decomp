/* sub_080119BC  (original: 0x080119BC-0x08011A1E in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804FE54();


void sub_080119BC(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  piVar4 = (int *)(param_1 + 4);
  if (0 < *(int *)(param_1 + 4)) {
    do {
      if (piVar4[iVar2 + 1] == param_2) goto _080119DE;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = -1;
_080119DE:
  if (iVar2 == -1) {
    piVar1 = (int *)(param_1 + 0x40c);
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *piVar1) {
      do {
        iVar2 = piVar1[iVar3 + 1];
        if (iVar2 == param_2) goto _08011A0A;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar1);
    }
    iVar3 = -1;
_08011A0A:
    sub_0804FE54(piVar1,iVar3,iVar3,iVar2,param_4);
    iVar2 = *piVar4;
    *piVar4 = iVar2 + 1;
    piVar4[iVar2 + 1] = param_3;
  }
  else {
    piVar4[iVar2 + 1] = param_3;
  }
  return;
}

