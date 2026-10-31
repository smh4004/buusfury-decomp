/* sub_0800C378  (original: 0x0800C378-0x0800C3EC in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03000f94;
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;
extern undefined volatile gUnknown_087B6EEC;


undefined4 sub_0800C378(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar2 = *(int *)(&gUnknown_087B6EEC + ((uint)(DAT_03000f94 << 0x18) >> 0x16));
  puVar4 = (uint *)*param_2;
  *param_2 = puVar4 + 2;
  *puVar4 = 0x80006000;
  uVar1 = (((uint)**(ushort **)(param_1 + 0x14) - DAT_030019cc) + -0x10) * 0x800000 >> 7 |
          0x80006000;
  *puVar4 = uVar1;
  *puVar4 = uVar1 | (((uint)*(ushort *)(*(int *)(param_1 + 0x14) + 2) + (iVar2 >> 0xe)) -
                    DAT_030019d0) + 0xf8 & 0xff;
  uVar3 = puVar4[1];
  uVar1 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar4[1] = uVar1 | uVar3 & 0xfffff3ff;
  puVar4[1] = *(ushort *)(param_1 + 0xc) & 0x3ff | uVar1 | uVar3 & 0xfffff000;
  return 0;
}

