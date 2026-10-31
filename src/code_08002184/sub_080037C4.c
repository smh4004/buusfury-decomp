/* sub_080037C4  (original: 0x080037C4-0x080037E0 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern short volatile DAT_03002b6c;


void sub_080037C4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b6c = DAT_03002b6c + (short)((uint)(param_1[iVar1] * 0x445) >> 8);
  return;
}

