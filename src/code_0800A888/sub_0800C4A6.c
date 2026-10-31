/* sub_0800C4A6  (original: 0x0800C4A6-0x0800C4DA in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0800C4A6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    iVar1 = *(int *)(param_1 + 0x28) + 2;
    *(int *)(param_1 + 0x28) = iVar1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
  }
  return;
}

