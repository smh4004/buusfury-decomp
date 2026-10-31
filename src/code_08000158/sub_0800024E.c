/* sub_0800024E  (original: 0x0800024E-0x08000260 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001064;


void sub_0800024E(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001064;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

