/* sub_0803BC2C  (original: 0x0803BC2C-0x0803BCAA in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803FACC();


void sub_0803BC2C(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    do {
      iVar1 = sub_0803FACC(0x126);
      *(int *)(param_1 + 0x1c) = (iVar1 + 0x60) * 0x100;
      iVar1 = sub_0803FACC(0xf0);
      *(int *)(param_1 + 0x20) = (iVar1 + 0x70) * 0x100;
      iVar1 = __call_via_r2(param_2,(int *)(param_1 + 0x1c),*(int *)(*param_2 + 0x54) + *param_2);
    } while (iVar1 == 0);
    iVar1 = *(int *)(param_1 + 0x1c) - param_2[0x68];
    iVar2 = *(int *)(param_1 + 0x20) - param_2[0x69];
  } while ((iVar1 * iVar1 >> 8) + (iVar2 * iVar2 >> 8) < 0x5000);
  return;
}

