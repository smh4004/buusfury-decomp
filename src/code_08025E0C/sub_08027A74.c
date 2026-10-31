/* sub_08027A74  (original: 0x08027A74-0x08027B18 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001c34;
extern int volatile DAT_030019e8;
extern int volatile DAT_030019ec;
extern int volatile DAT_030019f0;
extern int volatile DAT_030019f4;


undefined4 sub_08027A74(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_03001c34;
  if (DAT_03001c34 != 0) {
    puVar3 = (uint *)*param_2;
    *param_2 = puVar3 + 2;
    iVar4 = param_2[1];
    param_2[1] = iVar4 + 0x20;
    iVar5 = param_2[2];
    param_2[2] = iVar5 + 1;
    *puVar3 = 0x2300;
    uVar2 = (uint)(((*(int *)(param_1 + 0x18) * (*(int *)(iVar1 + 0x1a0) >> 8) >> 0x16) +
                   *(int *)(param_1 + 0x10)) * 0x800000) >> 7 | 0x2300;
    *puVar3 = uVar2;
    *puVar3 = uVar2 | (*(int *)(param_1 + 0x1c) * (*(int *)(iVar1 + 0x1a4) >> 8) >> 0x16) +
                      *(int *)(param_1 + 0x14) & 0xffU | (uint)(iVar5 << 0x1b) >> 2;
    puVar3[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | puVar3[1] & 0xfffffc00;
    *(short *)(iVar4 + 6) = (short)(DAT_030019e8 >> 2);
    *(short *)(iVar4 + 0x16) = (short)(DAT_030019ec >> 2);
    *(short *)(iVar4 + 0xe) = (short)(DAT_030019f0 >> 2);
    *(short *)(iVar4 + 0x1e) = (short)(DAT_030019f4 >> 2);
  }
  return 0;
}

