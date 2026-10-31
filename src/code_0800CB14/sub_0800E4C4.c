/* sub_0800E4C4  (original: 0x0800E4C4-0x0800E550 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_0800E1D0();


void sub_0800E4C4(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  
  sub_0800E1D0();
  iVar1 = *(int *)param_2[5];
  iVar1 = __call_via_r1((int *)param_2[5],*(int *)(iVar1 + 0x18) + iVar1);
  if (iVar1 != 0) {
    iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    uVar2 = *(short *)(iVar1 + 0x1c) * 0x16 + *(int *)(param_1 + 0x14) + 0x3333;
    *(uint *)(param_1 + 0x14) = uVar2;
    if (uVar2 >> 0x10 != 0) {
      puVar3 = (ushort *)(iVar1 + 0x20);
      if ((int)uVar2 >> 0x10 < (int)(uint)*puVar3) {
        uVar2 = (uint)*puVar3 - ((int)uVar2 >> 0x10);
        do {
          *puVar3 = (ushort)uVar2;
        } while ((uint)*puVar3 != (uVar2 & 0xffff));
      }
      else if (*(short *)(iVar1 + 0x16) != 0) {
        do {
          *puVar3 = 0;
        } while (*puVar3 != 0);
        __call_via_r2(param_2,0x18,*(int *)(*param_2 + 0x28) + *param_2,0,param_4);
      }
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffff;
    }
  }
  return;
}

