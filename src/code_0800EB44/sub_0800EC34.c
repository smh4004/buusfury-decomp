/* sub_0800EC34  (original: 0x0800EC34-0x0800ECB0 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error, r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int __call_via_r2();
extern int sub_0804FE20();
extern int sub_0801142A();
extern undefined volatile DAT_03001ba8;
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804AC20;
extern undefined volatile _08049680;
extern undefined volatile _0804E454;


void sub_0800EC34(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &_0804AC20;
  if (param_1[0x17] != 0) {
    sub_0804FE20(*(undefined4 *)(param_1[0x17] + 8));
  }
  if (*(int *)(param_1[0x16] + 0x50) != 0) {
    sub_0804FE20(&DAT_03001ba8);
  }
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,param_1,*(int *)(*piVar1 + 0xc) + *piVar1);
  }
  iVar2 = *(int *)param_1[5];
  __call_via_r2((int *)param_1[5],param_1,*(int *)(iVar2 + 0xc) + iVar2);
  iVar2 = *(int *)param_1[6];
  __call_via_r2((int *)param_1[6],param_1,*(int *)(iVar2 + 0xc) + iVar2);
  sub_0803D63C(param_1[0x10]);
  *param_1 = &_08049680;
  if (*(short *)(param_1 + 3) != -1) {
    sub_0801142A(&DAT_03001c4c);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

