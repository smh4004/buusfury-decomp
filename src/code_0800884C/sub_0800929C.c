/* sub_0800929C  (original: 0x0800929C-0x080092BC in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800929C(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4);
    iVar2 = *piVar1;
    __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 4) + iVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}

