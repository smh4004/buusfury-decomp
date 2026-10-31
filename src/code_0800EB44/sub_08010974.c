/* sub_08010974  (original: 0x08010974-0x080109AA in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int __call_via_r1();
extern undefined * volatile gUnknown_0807273C;


void sub_08010974(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x22c) + 4);
    iVar3 = *piVar1;
    uVar2 = __call_via_r1(piVar1,*(int *)(iVar3 + 0xc) + iVar3);
    sub_0800ED18(param_1,uVar2);
    return;
  }
  sub_0800ED18(param_1,(&gUnknown_0807273C)[param_2]);
  return;
}

