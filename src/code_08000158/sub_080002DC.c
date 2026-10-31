/* sub_080002DC  (original: 0x080002DC-0x080002EE in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001020;


void sub_080002DC(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001020;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

