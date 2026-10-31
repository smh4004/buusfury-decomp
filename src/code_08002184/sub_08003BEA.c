/* sub_08003BEA  (original: 0x08003BEA-0x08003BFC in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile __iwram_end;


void sub_08003BEA(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __iwram_end;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

