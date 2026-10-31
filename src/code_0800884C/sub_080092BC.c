/* sub_080092BC  (original: 0x080092BC-0x080092EA in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_080092BC(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4);
    iVar2 = *piVar1;
    __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 8) + iVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x1c);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

