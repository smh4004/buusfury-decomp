/* sub_0802A9A8  (original: 0x0802A9A8-0x0802A9C6 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


void sub_0802A9A8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = iVar1;
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 8),
               (uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2));
  return;
}

