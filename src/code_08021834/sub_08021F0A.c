/* sub_08021F0A  (original: 0x08021F0A-0x08021FDE in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int volatile DAT_03004a80;
extern int volatile DAT_03002c0c;
extern int * volatile DAT_03004a8c;


undefined4 sub_08021F0A(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_18;
  
  local_18 = DAT_03004a80;
  iVar7 = 0;
  iVar8 = DAT_03004a80;
  while( true ) {
    do {
      do {
        iVar2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x20) + *DAT_03004a8c);
        iVar1 = DAT_03004a80;
        if (iVar2 == 0) {
          if (iVar8 != DAT_03004a80) {
            __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x14) + *DAT_03004a8c);
            iVar8 = iVar1;
          }
        }
        else {
          __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x14) + *DAT_03004a8c);
        }
        uVar4 = *(uint *)(param_1 + 0x19c);
        if (local_18 != DAT_03004a80) {
          iVar7 = iVar7 + 1;
          local_18 = DAT_03004a80;
          if (iVar7 == 0x3c) {
            if (DAT_03002c0c != 0) {
              *(undefined2 *)(param_1 + 0x18c) = 0;
              return 1;
            }
            return 0;
          }
        }
      } while (((uVar4 & 3) != 1) ||
              (uVar6 = (uVar4 << 0x1c) >> 0x1e, (uVar4 << 1) >> 0x1e != uVar6));
      uVar5 = 0;
      for (uVar3 = uVar4 & 0xffffff; uVar3 != 0; uVar3 = uVar3 >> 1) {
        if ((int)(uVar3 << 0x1f) < 0) {
          uVar5 = uVar5 + 1;
        }
      }
    } while (uVar5 != (uVar4 << 3) >> 0x1b);
    if (uVar6 == *(ushort *)(param_1 + 400)) break;
    if ((*(ushort *)(param_1 + 400) + 1 & 3) == uVar6) {
      *(ushort *)(param_1 + 0x18c) = (ushort)((uVar4 << 0x12) >> 0x16);
_08021FD0:
      *(ushort *)(param_1 + 400) = *(short *)(param_1 + 400) + 1U & 3;
      return 1;
    }
  }
  *(ushort *)(param_1 + 0x18c) = (ushort)(uVar4 >> 8) >> 6;
  goto _08021FD0;
}

