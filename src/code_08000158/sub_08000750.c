/* sub_08000750  (original: 0x08000750-0x08000782 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087B6EEC;


void sub_08000750(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar3 = param_1[iVar1 + -1];
  iVar2 = *(int *)(&gUnknown_087B6EEC + ((uint)(iVar2 << 0x18) >> 0x16));
  *param_1 = iVar1 + -1;
  param_1[iVar1 + -1] = iVar3 * iVar2 >> 0x10;
  return;
}

