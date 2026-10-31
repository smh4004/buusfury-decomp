/* sub_08004F50  (original: 0x08004F50-0x08005096 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int sub_08046E40();


void sub_08004F50(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = param_2[2] - *param_2;
  iVar4 = param_2[3] - param_2[1];
  puVar6 = (undefined4 *)
           (*(int *)(param_1 + 0x28) * param_2[1] + *(int *)(param_1 + 0x24) + *param_2);
  puVar1 = (undefined1 *)((int)puVar6 + iVar5 + -5);
  iVar3 = 0;
  puVar2 = puVar6;
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = 0x13f6e1d;
    *(undefined2 *)(puVar2 + 1) = 0x3001;
    *puVar1 = 0x30;
    *(undefined4 *)(puVar1 + 1) = 0x3f6e1d01;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x28) + (int)puVar2);
    puVar1 = puVar1 + *(int *)(param_1 + 0x28);
  } while (iVar3 < 3);
  for (; iVar3 < iVar4; iVar3 = iVar3 + 1) {
    *puVar2 = 0x13f6e1d;
    *(undefined2 *)(puVar2 + 1) = 0x3001;
    *puVar1 = 0x30;
    *(undefined4 *)(puVar1 + 1) = 0x3f6e1d01;
    *(undefined2 *)(puVar1 + 5) = 0x101;
    puVar1[7] = 1;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x28) + (int)puVar2);
    puVar1 = puVar1 + *(int *)(param_1 + 0x28);
  }
  sub_08046E40(puVar6,0x1d,iVar5);
  iVar3 = *(int *)(param_1 + 0x28);
  sub_08046E40((int)puVar6 + iVar3 + 1,0x6e);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 2,0x3f);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 3,1);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 3,1,iVar5 + -6);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 5,0x30);
  iVar3 = (iVar4 + -10) * *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 5,0x30,iVar5 + -10);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 3,1,iVar5 + -6);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 2,0x1d,iVar5 + -4);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40((int)puVar6 + iVar3 + 1,0x6e,iVar5 + -2);
  iVar3 = (int)puVar6 + *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40(iVar3,0x3f,iVar5);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40(iVar3 + 3,1,iVar5);
  iVar3 = *(int *)(param_1 + 0x28) + iVar3;
  sub_08046E40(iVar3 + 3,1,iVar5);
  sub_08046E40(*(int *)(param_1 + 0x28) + iVar3 + 3,1,iVar5);
  return;
}

