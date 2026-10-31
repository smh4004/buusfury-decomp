/* sub_0801268A  (original: 0x0801268A-0x080126D4 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 74% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08049138();


void sub_0801268A(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if ((int *)param_1[iVar1 + 1] == param_2) goto _080126AA;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  iVar1 = -1;
_080126AA:
  *param_1 = iVar2 + -1;
  iVar2 = (iVar2 + -1) - iVar1;
  if (iVar2 != 0) {
    sub_08049138((int)(param_1 + iVar1 + 1),(int)(param_1 + iVar1 + 2),iVar2 * 4);
  }
  if (param_2 != (int *)0x0) {
    __call_via_r2(param_2,1,*(int *)*param_2 + *param_2);
  }
  return;
}

