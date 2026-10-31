/* sub_080037FC  (original: 0x080037FC-0x08003818 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03002b7c;
extern int volatile DAT_03002b78;


void sub_080037FC(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b7c = DAT_03002b7c + param_1[iVar1];
  DAT_03002b78 = DAT_03002b78 + param_1[iVar1];
  return;
}

