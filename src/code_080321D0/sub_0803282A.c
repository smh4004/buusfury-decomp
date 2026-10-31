/* sub_0803282A  (original: 0x0803282A-0x0803287E in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


undefined4 sub_0803282A(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  
  if (*(byte *)(param_2 + 4) == param_3) {
    return 1;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar1 == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  *(undefined4 *)(param_1 + 4) = 0x3c;
  if ((*(byte *)(param_2 + 4) ^ 1) != param_3) {
    *(char *)(param_2 + 4) = (char)param_3;
    return 1;
  }
  return 0;
}

