/* sub_08000C4E  (original: 0x08000C4E-0x08000C9A in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011CCA();
extern int sub_08000158();
extern undefined volatile DAT_03001c4c;


void sub_08000C4E(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (param_1[iVar1] < 0) {
    iVar1 = sub_08011CCA(&DAT_03001c4c,7,-(param_1[iVar1] + 1),param_4,param_4);
    iVar3 = *param_1;
    *param_1 = iVar3 + 1;
    param_1[iVar3 + 1] = iVar1;
  }
  else {
    uVar2 = sub_08000158();
    iVar1 = sub_08011CCA(&DAT_03001c4c,5,uVar2);
    iVar3 = *param_1;
    *param_1 = iVar3 + 1;
    param_1[iVar3 + 1] = iVar1;
  }
  return;
}

