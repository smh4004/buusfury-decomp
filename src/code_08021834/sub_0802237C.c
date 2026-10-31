/* sub_0802237C  (original: 0x0802237C-0x080223B2 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


void sub_0802237C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar1;
  iVar1 = *(int *)(param_1 + 0x34) + ((uint)(iVar1 * 0x10000000) >> 0x1e) * 0xc;
  if (*(int *)(param_1 + 0x28) != iVar1) {
    *(int *)(param_1 + 0x28) = iVar1;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 8),
                 (uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2));
  }
  return;
}

