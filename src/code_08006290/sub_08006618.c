/* sub_08006618  (original: 0x08006618-0x0800664E in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined volatile _0804920C;
extern undefined volatile _080491F0;


void sub_08006618(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = &_0804920C;
  if (0 < (int)param_1[1]) {
    do {
      piVar1 = (int *)param_1[iVar2 + 2];
      if (piVar1 != (int *)0x0) {
        __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  *param_1 = &_080491F0;
  return;
}

