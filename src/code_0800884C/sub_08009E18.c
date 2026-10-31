/* sub_08009E18  (original: 0x08009E18-0x08009E54 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


bool sub_08009E18(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  
  piVar2 = (int *)(param_2 + 0x1a0);
  *piVar2 = *piVar2 + *(int *)(param_1 + 4);
  *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *(int *)(param_1 + 8);
  sVar3 = *(short *)(param_1 + 0x10) + -1;
  *(short *)(param_1 + 0x10) = sVar3;
  if (sVar3 == 0) {
    sVar1 = *(short *)(param_1 + 0xe);
    *piVar2 = (int)*(short *)(param_1 + 0xc) << 8;
    *(int *)(param_2 + 0x1a4) = (int)sVar1 << 8;
  }
  return sVar3 == 0;
}

