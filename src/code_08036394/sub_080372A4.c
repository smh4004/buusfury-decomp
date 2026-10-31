/* sub_080372A4  (original: 0x080372A4-0x08037376 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080372A4(int param_1,int param_2,int *param_3,int param_4,int *param_5,int param_6)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x3c) + param_2 * 0xc);
  iVar4 = (*(int *)(param_1 + 0x24) - (int)*pcVar1) + *param_5;
  uVar2 = (*(int *)(param_1 + 0x28) - (int)pcVar1[1]) + param_5[1];
  if ((((iVar4 < 0xf0) && (0 < (int)(iVar4 + (uint)(byte)pcVar1[2]))) && ((int)uVar2 < 0xa0)) &&
     (0 < (int)(uVar2 + (byte)pcVar1[3]))) {
    *(undefined4 *)*param_3 = *(undefined4 *)(pcVar1 + 4);
    uVar6 = *(uint *)*param_3;
    uVar5 = (uint)(iVar4 * 0x800000) >> 7;
    *(uint *)*param_3 = uVar5 | uVar6 & 0xfe00ffff;
    uVar3 = uVar2 & 0xff | uVar5 | uVar6 & 0xfe00ff00;
    *(uint *)*param_3 = uVar3;
    if (param_6 != -1) {
      *(uint *)*param_3 = uVar3 | 0x100;
      *(uint *)*param_3 =
           uVar2 & 0xff | uVar5 | uVar6 & 0xc000ff00 | 0x100 | (uint)(param_6 << 0x1b) >> 2;
    }
    uVar3 = *(uint *)(*param_3 + 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc) + param_4 & 0x3ff;
    *(uint *)(*param_3 + 4) = uVar2 | uVar3 & 0xfffffc00;
    *(uint *)(*param_3 + 4) =
         (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar3 & 0xfffff000;
    *param_3 = *param_3 + 8;
  }
  return;
}

