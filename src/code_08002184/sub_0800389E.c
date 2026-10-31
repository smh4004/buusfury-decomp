/* sub_0800389E  (original: 0x0800389E-0x080038B4 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern char volatile DAT_03002b5c;


void sub_0800389E(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03002b5c = (char)param_1[iVar1] + DAT_03002b5c;
  return;
}

