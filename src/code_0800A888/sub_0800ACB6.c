/* sub_0800ACB6  (original: 0x0800ACB6-0x0800AD10 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;


undefined4 sub_0800ACB6(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_2;
  *param_2 = puVar2 + 2;
  *puVar2 = 0x40006000;
  uVar1 = (uint)(((*(int *)(param_1 + 0x20) >> 3) - DAT_030019cc) * 0x800000) >> 7 | 0x40006000;
  *puVar2 = uVar1;
  *puVar2 = uVar1 | (*(int *)(param_1 + 0x24) >> 3) - DAT_030019d0 & 0xffU;
  puVar2[1] = (*(ushort *)(param_1 + 0xc) & 0x3ff | puVar2[1] & 0xfffff000) + 0x400;
  return 0;
}

