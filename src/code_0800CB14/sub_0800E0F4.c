/* sub_0800E0F4  (original: 0x0800E0F4-0x0800E15C in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 44% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08013C66();


void sub_0800E0F4(int param_1,int *param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  puVar2 = (ushort *)(iVar1 + 0x16);
  if (*puVar2 != 0) {
    uVar3 = *(int *)(param_1 + 8) + (uint)*(ushort *)(iVar1 + 100);
    *(uint *)(param_1 + 8) = uVar3;
    if (uVar3 >> 8 != 0) {
      if ((int)*(short *)(iVar1 + 0x18) < (int)(short)*puVar2 + ((int)uVar3 >> 8)) {
        *puVar2 = *(ushort *)(iVar1 + 0x18);
      }
      else {
        iVar4 = ((uint)*puVar2 + ((int)uVar3 >> 8)) * 0x10000;
        do {
          *puVar2 = (ushort)((uint)iVar4 >> 0x10);
        } while ((int)(short)*puVar2 != iVar4 >> 0x10);
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xff;
      if ((int)((uint)*(byte *)(iVar1 + 0x13) << 0x1f) < 0) {
        sub_08013C66();
      }
    }
  }
  return;
}

