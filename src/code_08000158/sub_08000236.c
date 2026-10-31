/* sub_08000236  (original: 0x08000236-0x08000248 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001060;


void sub_08000236(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001060;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

