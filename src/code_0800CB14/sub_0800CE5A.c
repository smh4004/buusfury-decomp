/* sub_0800CE5A  (original: 0x0800CE5A-0x0800CE96 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_0801142A();
extern int __call_via_r2();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804E2FC;
extern undefined volatile _0804E454;


void sub_0800CE5A(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &_0804E2FC;
  if (*(short *)((int)param_1 + 0x16) != -1) {
    sub_0801142A(&DAT_03001c4c);
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

