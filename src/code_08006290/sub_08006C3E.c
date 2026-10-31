/* sub_08006C3E  (original: 0x08006C3E-0x08006C74 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int sub_080193AE();
extern undefined4 volatile DAT_03002bd8;


void sub_08006C3E(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      iVar2 = *piVar1;
      __call_via_r3(piVar1,0xd,0,*(int *)(iVar2 + 0x24) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  sub_080193AE(&DAT_03002bd8,0xd);
  return;
}

