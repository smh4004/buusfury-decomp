/* sub_08003818  (original: 0x08003818-0x0800382E in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03002b74;


void sub_08003818(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b74 = param_1[iVar1] + DAT_03002b74;
  return;
}

