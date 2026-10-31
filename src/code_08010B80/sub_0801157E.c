/* sub_0801157E  (original: 0x0801157E-0x080115B0 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803DA62();
extern int __call_via_r1();
extern undefined volatile DAT_03003498;


void sub_0801157E(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  sub_0803DA62(&DAT_03003498);
  piVar3 = (int *)(param_1 + 0x208);
  iVar1 = *piVar3;
  while (-1 < iVar1 + -1) {
    iVar2 = *(int *)piVar3[iVar1];
    __call_via_r1((int *)piVar3[iVar1],*(int *)(iVar2 + 0x14) + iVar2);
    iVar1 = iVar1 + -1;
  }
  *piVar3 = 0;
  return;
}

