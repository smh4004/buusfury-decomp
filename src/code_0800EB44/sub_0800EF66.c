/* sub_0800EF66  (original: 0x0800EF66-0x0800EF94 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0800EF66(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(*(int *)(param_2 + 0x58) + 8);
  iVar2 = *(int *)(param_2 + 0x6c);
  param_1[1] = *(int *)(param_2 + 0x70) +
               (int)*(char *)(*(int *)(*(int *)(param_2 + 0x50) +
                                       (uint)*(byte *)(param_2 + 0x11) * 0x10 +
                                       (uint)*(byte *)(param_2 + 0x10) * 4 + 4) + 5);
  *param_1 = iVar2 + (uint)bVar1 + -8;
  return;
}

