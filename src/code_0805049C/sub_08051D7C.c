/* sub_08051D7C  (original: 0x08051D7C-0x08051DA8 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/4 snapshots, 72% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803D63C();
extern undefined volatile _0804E454;


void sub_08051D7C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    __call_via_r2(piVar1,1,*(int *)*piVar1 + *piVar1,param_4,param_4);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

