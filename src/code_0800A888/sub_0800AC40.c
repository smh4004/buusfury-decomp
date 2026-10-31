/* sub_0800AC40  (original: 0x0800AC40-0x0800AC64 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0800AC40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24) + -4;
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 4) = (iVar1 >> 3) + 8;
  }
  return;
}

