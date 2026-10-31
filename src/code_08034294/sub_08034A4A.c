/* sub_08034A4A  (original: 0x08034A4A-0x08034AA4 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800ECDA();


void sub_08034A4A(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  
  if (*(short *)((int)param_2 + 0x12) != 0) {
    *(short *)((int)param_2 + 0x12) = *(short *)((int)param_2 + 0x12) + -1;
  }
  if (*(short *)((int)param_2 + 0x12) == 0x23) {
    sub_0800ECDA(param_2,0x12);
    param_2[0x68] = param_2[0x82];
    param_2[0x69] = param_2[0x83];
  }
  else if (*(short *)((int)param_2 + 0x12) == 0) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    return;
  }
  uVar1 = *(ushort *)((int)param_2 + 0x12);
  if (uVar1 < 0x24) {
    *(char *)((int)param_2 + 0x11) = (char)(uVar1 >> 2);
    return;
  }
  *(char *)((int)param_2 + 0x11) = (char)((int)(uVar1 - 0x24) >> 2);
  return;
}

