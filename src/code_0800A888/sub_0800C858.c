/* sub_0800C858  (original: 0x0800C858-0x0800C8C2 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FACC();


void sub_0800C858(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = *(int *)(param_1 + 0x24) + -1;
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x2c);
      puVar2 = *(undefined4 **)(iVar1 + 0x20);
      uVar4 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined4 *)(iVar1 + 0x24) = *puVar2;
      *(undefined4 *)(iVar1 + 0x28) = uVar4;
      *(undefined4 *)(iVar1 + 0x2c) = uVar8;
      *(undefined4 *)(iVar1 + 0x30) = uVar9;
    }
    else if (-1 < iVar1 * 0x40000000) {
      iVar1 = sub_0803FACC(5);
      iVar3 = sub_0803FACC(3);
      iVar5 = *(int *)(param_1 + 0x2c);
      piVar6 = *(int **)(iVar5 + 0x20);
      iVar10 = piVar6[1];
      iVar11 = piVar6[2];
      iVar7 = piVar6[3];
      *(int *)(iVar5 + 0x24) = *piVar6 + iVar1 + -2;
      *(int *)(iVar5 + 0x28) = iVar10 + iVar3 + -1;
      *(int *)(iVar5 + 0x2c) = iVar11 + iVar1 + -2;
      *(int *)(iVar5 + 0x30) = iVar7 + iVar3 + -1;
    }
  }
  return;
}

