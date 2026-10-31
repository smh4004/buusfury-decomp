/* sub_0802C36A  (original: 0x0802C36A-0x0802C3D2 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FACC();
extern int __call_via_r2();


void sub_0802C36A(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(ushort *)((int)param_2 + 0x12) + 1;
  *(short *)((int)param_2 + 0x12) = (short)iVar1;
  if (-1 < iVar1 * -0x80000000) {
    iVar1 = sub_0803FACC(3);
    iVar2 = sub_0803FACC(3);
    iVar3 = *(int *)(param_1 + 8);
    param_2[0x68] = *(int *)(param_1 + 4) + (iVar1 + -1) * 0x100;
    param_2[0x69] = iVar3 + (iVar2 + -1) * 0x100;
  }
  if (*(short *)((int)param_2 + 0x12) == 0x40) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

