/* sub_0800382E  (original: 0x0800382E-0x08003844 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03002b80;


void sub_0800382E(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b80 = param_1[iVar1] + DAT_03002b80;
  return;
}

