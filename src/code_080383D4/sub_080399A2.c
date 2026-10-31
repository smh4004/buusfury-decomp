/* sub_080399A2  (original: 0x080399A2-0x080399F8 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int __call_via_r2();
extern int sub_0800ED18();
extern undefined4 volatile DAT_030032bc;


undefined4 sub_080399A2(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x34) == 0) && (iVar1 = *(int *)(param_1 + 0x30), iVar1 != 0)) {
    sub_0800ECDA(iVar1,9);
    sub_0800ED18(iVar1,&DAT_030032bc);
    piVar2 = *(int **)(iVar1 + 0x1f8);
    if (piVar2 != (int *)0x0) {
      __call_via_r2(piVar2,9,*(int *)(*piVar2 + 0x28) + *piVar2);
      piVar2 = (int *)piVar2[0x7e];
      if (piVar2 != (int *)0x0) {
        __call_via_r2(piVar2,9,*(int *)(*piVar2 + 0x28) + *piVar2);
      }
    }
  }
  return 0;
}

