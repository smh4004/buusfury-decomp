/* sub_0800A9D0  (original: 0x0800A9D0-0x0800A9FE in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_0800A9D0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 0x34);
      iVar2 = *piVar1;
      __call_via_r1(piVar1,*(int *)(iVar2 + 0xc) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

