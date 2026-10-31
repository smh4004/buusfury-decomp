/* sub_0800021E  (original: 0x0800021E-0x08000230 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_0300105c;


void sub_0800021E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0300105c;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

