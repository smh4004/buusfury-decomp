/* sub_08018284  (original: 0x08018284-0x0801832E in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int sub_08018614();
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;
extern undefined volatile DAT_06010000;


void sub_08018284(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x28) + 1;
  *(int *)(param_1 + 0x28) = iVar1;
  uVar3 = (uint)(iVar1 * 0x1000000) >> 0x1b;
  if (3 < uVar3) {
    uVar3 = 0;
  }
  if (*(uint *)(param_1 + 100) != uVar3) {
    *(uint *)(param_1 + 100) = uVar3;
    iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x10);
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(param_1 + 0x60) + uVar3 * iVar1 + 0x18,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x38) - DAT_030019cc;
  uVar3 = *(int *)(param_1 + 0x3c) - DAT_030019d0;
  puVar2 = (uint *)*param_2;
  *param_2 = (int)(puVar2 + 2);
  *puVar2 = uVar3 & 0xff |
            (uint)(iVar1 * 0x800000) >> 7 | *(uint *)(*(int *)(param_1 + 0x60) + 0x14) & 0xfe00ff00;
  uVar4 = puVar2[1];
  uVar3 = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
  puVar2[1] = uVar3 | uVar4 & 0xfffff3ff;
  uVar5 = *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar2[1] = uVar3 | uVar4 & 0xfffff000 | uVar5;
  sub_08018614(param_1,param_2,uVar5,0xc00,iVar1);
  return;
}

