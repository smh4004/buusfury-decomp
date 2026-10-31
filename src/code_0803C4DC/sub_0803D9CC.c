/* sub_0803D9CC  (original: 0x0803D9CC-0x0803DA10 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0803D9CC(int *param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar4 = param_1[2];
  iVar5 = param_1[1];
  puVar3 = (undefined2 *)((iVar5 * 0x20 + iVar2) * 2 + param_2);
  if (iVar5 < param_1[3]) {
    do {
      iVar1 = *param_1;
      if (iVar1 < param_1[2]) {
        do {
          *puVar3 = param_3;
          puVar3 = puVar3 + 1;
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[2]);
      }
      puVar3 = puVar3 + (0x20 - (iVar4 - iVar2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[3]);
  }
  return;
}

