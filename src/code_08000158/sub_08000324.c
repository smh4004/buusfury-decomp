/* sub_08000324  (original: 0x08000324-0x08000336 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_0300102c;


void sub_08000324(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0300102c;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

