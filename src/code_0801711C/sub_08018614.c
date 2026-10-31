/* sub_08018614  (original: 0x08018614-0x08018696 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;


undefined4 sub_08018614(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = *(int *)(param_1 + 0x14) - DAT_030019cc;
    uVar1 = *(int *)(param_1 + 0x18) - DAT_030019d0;
    puVar2 = (uint *)*param_2;
    *param_2 = (int)(puVar2 + 2);
    *puVar2 = (uint)(iVar3 * 0x800000) >> 7 | *(uint *)(*(int *)(param_1 + 0x10) + 0xc) & 0xfe00ff00
              | uVar1 & 0xff;
    uVar1 = puVar2[1];
    uVar4 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    puVar2[1] = uVar4 | uVar1 & 0xfffff3ff;
    puVar2[1] = *(ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 8) + 2) & 0x3ff |
                uVar4 | uVar1 & 0xfffff000;
  }
  return 0;
}

