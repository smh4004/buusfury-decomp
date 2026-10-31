/* sub_0800E85E  (original: 0x0800E85E-0x0800E8E6 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 56% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08004102();
extern int sub_0803D63C();
extern int sub_0800EC34();
extern int __call_via_r2();
extern undefined volatile _0804C888;


void sub_0800E85E(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804C888;
  sub_08004102(param_1 + 0x85);
  iVar2 = param_1[0x7d];
  if ((iVar2 != 0) && (*(undefined4 **)(iVar2 + 0x1f0) == param_1)) {
    *(undefined4 *)(iVar2 + 0x1f0) = param_1[0x7e];
  }
  if (param_1[0x7f] != 0) {
    *(undefined4 *)(param_1[0x7f] + 0x1f8) = param_1[0x7e];
  }
  if (param_1[0x7e] != 0) {
    *(undefined4 *)(param_1[0x7e] + 0x1fc) = param_1[0x7f];
  }
  for (iVar2 = param_1[0x7c]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1f8)) {
    *(undefined4 *)(iVar2 + 500) = 0;
  }
  piVar1 = (int *)param_1[99];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  sub_0800EC34(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

