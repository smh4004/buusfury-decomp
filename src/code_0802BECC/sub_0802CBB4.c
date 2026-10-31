/* sub_0802CBB4  (original: 0x0802CBB4-0x0802CBD2 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECB0();


void sub_0802CBB4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  sub_0800ECB0(iVar2,param_1 + 8,param_3,param_4,param_4);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x178) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x17c) = uVar1;
  return;
}

