/* sub_0802627E  (original: 0x0802627E-0x0802632E in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08027424();
extern int sub_08027448();


void sub_0802627E(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar2 = iVar1 * 0x28 + param_1 + 0xc;
      if ((((*(int *)(iVar2 + 0x18) <= *param_2) && (*param_2 < *(int *)(iVar2 + 0x20))) &&
          (*(int *)(iVar2 + 0x1c) <= param_2[1])) && (param_2[1] < *(int *)(iVar2 + 0x24))) {
        iVar3 = *param_2 - (*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x20) >> 1);
        iVar5 = param_2[1] - (*(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x24) >> 1);
        if (iVar3 * iVar3 + iVar5 * iVar5 < 0x7fffffff) {
          iVar4 = *(int *)(iVar2 + 0x28);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x518) != iVar4) {
    if (*(int *)(param_1 + 0x518) != 0) {
      sub_08027448();
    }
    *(int *)(param_1 + 0x518) = iVar4;
    if (iVar4 != 0) {
      sub_08027424(iVar4);
    }
  }
  return;
}

