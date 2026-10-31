/* sub_080304E4  (original: 0x080304E4-0x08030538 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int volatile DAT_03001c34;


void sub_080304E4(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 2) = 0x38;
  *(undefined1 *)((int)param_2 + 0x11) = 0;
  *(undefined2 *)((int)param_2 + 0x176) = 0;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  piVar1 = (int *)(DAT_03001c34 + 0x1a4);
  param_2[0x68] = *(int *)(DAT_03001c34 + 0x1a0);
  piVar2 = param_2 + 0x69;
  *piVar2 = *piVar1;
  *piVar2 = *piVar2 + 0x100;
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

