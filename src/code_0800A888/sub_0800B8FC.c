/* sub_0800B8FC  (original: 0x0800B8FC-0x0800B928 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 57% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


int sub_0800B8FC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 < -0x10) {
    sub_08011944(&DAT_03001c4c,param_1,0xfffffff0,param_4,param_4);
  }
  else if (8 < iVar1) {
    *(undefined4 *)(param_1 + 0x28) = 8;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return param_1;
  return param_1;   /* ADS constructor: returns this */
}
