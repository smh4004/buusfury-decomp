/* sub_08000BB2  (original: 0x08000BB2-0x08000BCC in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_0300106a;


void sub_08000BB2(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  (&DAT_0300106a)[param_1[iVar1]] = (&DAT_0300106a)[param_1[iVar1]] + -1;
  return;
}

