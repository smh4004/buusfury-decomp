/* sub_0800FFA2  (original: 0x0800FFA2-0x0800FFFE in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;


int * sub_0800FFA2(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (*(int *)(param_2 + 0x1a4) >> 8) - DAT_030019d0;
  cVar1 = *(char *)(*(int *)(*(int *)(param_2 + 0x50) + (uint)*(byte *)(param_2 + 0x11) * 0x10 +
                             (uint)*(byte *)(param_2 + 0x10) * 4 + 4) + 5);
  *param_1 = ((*(int *)(param_2 + 0x1a0) >> 8) - DAT_030019cc) +
             (uint)*(byte *)(*(int *)(param_2 + 0x58) + 8) + -8;
  param_1[1] = iVar2 + cVar1;
  return param_1 + 2;
}

