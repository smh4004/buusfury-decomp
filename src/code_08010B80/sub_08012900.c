/* sub_08012900  (original: 0x08012900-0x08012960 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_08049138();


void sub_08012900(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *param_1;
  while (iVar2 = iVar1, iVar1 = iVar2 + -1, -1 < iVar1) {
    piVar3 = (int *)param_1[iVar2];
    iVar4 = __call_via_r1(piVar3,*(int *)(*piVar3 + 0xc) + *piVar3);
    if (iVar4 == 0) {
      iVar4 = *param_1;
      *param_1 = iVar4 + -1;
      iVar4 = (iVar4 + -1) - iVar1;
      if (iVar4 != 0) {
        sub_08049138((int)(param_1 + iVar2),(int)(param_1 + iVar2 + 1),iVar4 * 4);
      }
      if (piVar3 != (int *)0x0) {
        __call_via_r2(piVar3,1,*(int *)*piVar3 + *piVar3);
      }
    }
  }
  param_1[0x31] = 1;
  param_1[0x33] = 0;
  param_1[0x32] = param_1[0x32] + 1;
  return;
}

