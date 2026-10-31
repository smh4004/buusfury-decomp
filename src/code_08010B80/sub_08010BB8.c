/* sub_08010BB8  (original: 0x08010BB8-0x08010BD2 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();


void sub_08010BB8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0x224);
  iVar2 = *(int *)(iVar1 + 8);
  __call_via_r1(*(int **)(param_1 + 0x224),iVar2 + iVar1,iVar2,param_4,param_4);
  *(undefined4 *)(param_1 + 0x224) = param_2;
  return;
}

