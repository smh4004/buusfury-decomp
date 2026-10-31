/* sub_0802214C  (original: 0x0802214C-0x08022186 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0802214C(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 0x75;
  iVar1 = 0;
  if (0 < *piVar2) {
    do {
      sub_08011944(&DAT_03001c4c,piVar2[iVar1 + 1]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *piVar2);
  }
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

