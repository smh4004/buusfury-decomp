/* sub_08019CA6  (original: 0x08019CA6-0x08019CC4 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


void sub_08019CA6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar1;
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 8),
               (uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2));
  return;
}

