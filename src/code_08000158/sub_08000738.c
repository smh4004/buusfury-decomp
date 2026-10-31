/* sub_08000738  (original: 0x08000738-0x08000750 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FADE();


void sub_08000738(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_0803FADE(param_1[iVar2] * 0x28f5d >> 8);
  param_1[iVar2] = iVar1;
  return;
}

