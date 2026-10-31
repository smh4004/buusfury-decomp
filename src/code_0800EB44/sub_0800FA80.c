/* sub_0800FA80  (original: 0x0800FA80-0x0800FAB6 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E97E();


void sub_0800FA80(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sub_0800E97E();
  piVar1 = (int *)(param_1 + 0x28c);
  *piVar1 = *piVar1 + (*param_2 + 0x3ff >> 10) * 0x400;
  iVar2 = *(int *)(*(int *)(param_1 + 0x224) + 4);
  iVar4 = *piVar1;
  iVar3 = iVar2 * 0x400;
  if (iVar4 != iVar3 && iVar4 + iVar2 * -0x400 < 0 == SBORROW4(iVar4,iVar3)) {
    *piVar1 = iVar3;
  }
  return;
}

