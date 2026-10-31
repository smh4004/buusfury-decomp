/* sub_08040048  (original: 0x08040048-0x08040096 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern undefined4 volatile DAT_03004a80;
extern int * volatile DAT_03004a8c;
extern undefined4 volatile _03000FFC;


void sub_08040048(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_03004a8c;
  piVar2 = param_1;
  if (DAT_03004a8c != (int *)0x0) {
    __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x10) + *DAT_03004a8c);
    piVar2 = (int *)*piVar1;
    DAT_03004a8c = param_1;
    __call_via_r2(piVar1,1,*piVar2 + (int)piVar2);
    piVar2 = DAT_03004a8c;
  }
  DAT_03004a8c = piVar2;
  __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0xc) + *DAT_03004a8c);
  DAT_03004a80 = 0;
  _03000FFC = 0;
  return;
}

