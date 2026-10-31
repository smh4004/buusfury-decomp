/* sub_08028A24  (original: 0x08028A24-0x08028AD2 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08028A24(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x48) + param_2 * 0xc);
  iVar3 = *(int *)(param_1 + 0x30) + (int)*pcVar1 + *param_5;
  uVar2 = *(int *)(param_1 + 0x34) + (int)pcVar1[1] + param_5[1];
  if ((((iVar3 < 0xf0) && (0 < (int)(iVar3 + (uint)(byte)pcVar1[2]))) && ((int)uVar2 < 0xa0)) &&
     (0 < (int)(uVar2 + (byte)pcVar1[3]))) {
    *(undefined4 *)*param_3 = *(undefined4 *)(pcVar1 + 4);
    uVar5 = *(uint *)*param_3;
    uVar4 = (uint)(iVar3 * 0x800000) >> 7;
    *(uint *)*param_3 = uVar4 | uVar5 & 0xfe00ffff;
    *(uint *)*param_3 = uVar2 & 0xff | uVar4 | uVar5 & 0xfe00ff00;
    uVar4 = *(uint *)(*param_3 + 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc) + param_4 & 0x3ff;
    *(uint *)(*param_3 + 4) = uVar2 | uVar4 & 0xfffffc00;
    *(uint *)(*param_3 + 4) =
         (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar4 & 0xfffff000;
    *param_3 = *param_3 + 8;
  }
  return;
}

