/* sub_08002FE4  (original: 0x08002FE4-0x0800300C in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03001069;
extern int volatile DAT_0300153c;


void sub_08002FE4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03001069 = DAT_03001069 | 4;
  DAT_0300153c = param_1[iVar1] * 0x3c;
  return;
}

