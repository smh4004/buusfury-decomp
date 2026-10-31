/* sub_0800666C  (original: 0x0800666C-0x080066BA in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 10% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int __call_via_r2();


void sub_0800666C(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)(param_1 + 4);
    iVar3 = *piVar2;
    iVar1 = 0;
    if (0 < iVar3) {
      do {
        if ((int *)piVar2[iVar1 + 1] == param_2) goto _08006690;
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar3);
    }
    iVar1 = -1;
_08006690:
    *piVar2 = iVar3 + -1;
    iVar3 = (iVar3 + -1) - iVar1;
    if (iVar3 != 0) {
      sub_08049138((int)(piVar2 + iVar1 + 1),(int)(piVar2 + iVar1 + 2),iVar3 * 4);
    }
    if (param_2 != (int *)0x0) {
      __call_via_r2(param_2,1,*(int *)*param_2 + *param_2);
    }
  }
  return;
}

