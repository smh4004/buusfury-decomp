/* sub_08036780  (original: 0x08036780-0x08036804 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;


void sub_08036780(int param_1,int *param_2,short *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_3 - DAT_030019cc;
  uVar3 = param_3[1] - DAT_030019d0;
  if ((((-9 < iVar1) && (iVar1 < 0xf0)) && (-9 < (int)uVar3)) && ((int)uVar3 < 0xa0)) {
    *(undefined4 *)*param_2 = param_4;
    uVar4 = *(uint *)*param_2;
    uVar2 = (uint)(iVar1 * 0x800000) >> 7;
    *(uint *)*param_2 = uVar2 | uVar4 & 0xfe00ffff;
    *(uint *)*param_2 = uVar2 | uVar4 & 0xfe00ff00 | uVar3 & 0xff;
    uVar2 = *(uint *)(*param_2 + 4);
    uVar3 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    *(uint *)(*param_2 + 4) = uVar3 | uVar2 & 0xfffff3ff;
    *(uint *)(*param_2 + 4) = *(ushort *)(param_1 + 0xc) & 0x3ff | uVar3 | uVar2 & 0xfffff000;
    *param_2 = *param_2 + 8;
  }
  return;
}

