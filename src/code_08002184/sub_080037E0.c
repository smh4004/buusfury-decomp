/* sub_080037E0  (original: 0x080037E0-0x080037FC in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern short volatile DAT_03002b64;


void sub_080037E0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b64 = DAT_03002b64 + (short)(param_1[iVar1] * 0xa4 >> 6);
  return;
}

