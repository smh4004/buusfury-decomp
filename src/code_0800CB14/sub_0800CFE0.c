/* sub_0800CFE0  (original: 0x0800CFE0-0x0800D026 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 41% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080193AE();


int sub_0800CFE0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = sub_080193AE(param_1 + 0xc);
  if (iVar1 != 0) {
    return iVar1 + -1;
  }
  if (param_2 == 4) {
    if ((int)param_3 >> 1 == (uint)*(ushort *)(param_1 + 0x14)) {
      *(uint *)(param_1 + 0x1c) = param_3 & 1;
      return 1;
    }
    return 0;
  }
  if (param_2 != 8) {
    return 0;
  }
  if (*(ushort *)(param_1 + 0x14) == param_3) {
    return param_1;
  }
  return 0;
}

