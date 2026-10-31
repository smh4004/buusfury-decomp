/* sub_08003844  (original: 0x08003844-0x0800385A in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03002b70;


void sub_08003844(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b70 = param_1[iVar1] + DAT_03002b70;
  return;
}

