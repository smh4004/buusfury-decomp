/* sub_0801947C  (original: 0x0801947C-0x080194C6 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080192CE();


void sub_0801947C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)(iVar1 + 0x24);
  iVar3 = *(int *)(iVar1 + 0x30);
  iVar4 = *(int *)(iVar1 + 0x2c) - *piVar2;
  iVar5 = *(int *)(iVar1 + 0x28);
  *(int *)(param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 0x18) = iVar3 - iVar5;
  iVar3 = *piVar2;
  *(int *)(param_1 + 0x28) = *(int *)(iVar1 + 0x28) << 8;
  *(int *)(param_1 + 0x24) = iVar3 << 8;
  sub_080192CE(piVar2,param_1 + 8,param_1 + 0x2c,param_1 + 0x1c,*(undefined4 *)(param_1 + 0x10),
               iVar4);
  return;
}

