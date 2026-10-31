/* sub_0800E3E6  (original: 0x0800E3E6-0x0800E470 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_0800E1D0();


void sub_0800E3E6(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  
  sub_0800E1D0();
  iVar3 = *(int *)param_2[5];
  iVar3 = __call_via_r1((int *)param_2[5],*(int *)(iVar3 + 0x18) + iVar3);
  if (((iVar3 != 0) &&
      (iVar3 = __call_via_r2(param_2,10,*(int *)(*param_2 + 0x34) + *param_2), iVar3 == 0)) &&
     (uVar2 = *(int *)(param_1 + 0x14) + 0xccd, *(uint *)(param_1 + 0x14) = uVar2,
     uVar2 >> 0x10 != 0)) {
    iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    psVar4 = (short *)(iVar3 + 0x1e);
    if (*psVar4 == 0) {
      if (*(short *)(iVar3 + 0x16) != 0) {
        __call_via_r2(param_2,0x18,*(int *)(*param_2 + 0x28) + *param_2,0,param_4);
      }
    }
    else {
      sVar1 = *psVar4;
      do {
        *psVar4 = sVar1 + -1;
      } while (*psVar4 != (short)(sVar1 + -1));
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffff;
  }
  return;
}

