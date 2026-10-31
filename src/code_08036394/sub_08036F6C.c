/* sub_08036F6C  (original: 0x08036F6C-0x08036FA2 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


void sub_08036F6C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 8),
               (uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2));
  iVar1 = *(int *)(param_1 + 0x3c);
  sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200,*(int *)(iVar1 + 0x14),
               (uint)*(byte *)(iVar1 + 0xf) * (uint)*(byte *)(iVar1 + 0xe));
  return;
}

