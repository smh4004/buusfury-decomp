/* sub_080066BA  (original: 0x080066BA-0x080066EC in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_080066BA(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = *(int **)(iVar2 * 4 + param_1 + 8);
      if (piVar1 != (int *)0x0) {
        __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

