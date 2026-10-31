/* sub_080037A6  (original: 0x080037A6-0x080037C4 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile gUIStringPtrs;


void sub_080037A6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = *(int *)(&gUIStringPtrs + param_1[iVar1] * 4);
  *param_1 = iVar1;
  param_1[iVar1] = iVar2;
  return;
}

