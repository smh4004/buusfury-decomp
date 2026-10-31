/* sub_0800B55C  (original: 0x0800B55C-0x0800B5C2 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;
extern undefined volatile gUnknown_087144D8;


undefined4 sub_0800B55C(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  uVar3 = (uint)(iVar1 * 0x8000000) >> 0x1e;
  if (*(uint *)(param_1 + 0x10) != uVar3) {
    *(uint *)(param_1 + 0x10) = uVar3;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 (int)(&gUnknown_087144D8 + uVar3 * 0x100),0x100);
  }
  puVar2 = (uint *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x405c2000;
  *puVar2 = *(uint *)(*(int *)(param_1 + 0x18) + 0x28) & 0xff | 0x405c2000;
  puVar2[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[1] & 0xfffff000) + 0x400;
  return 0;
}

