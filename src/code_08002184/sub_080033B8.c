/* sub_080033B8  (original: 0x080033B8-0x080033D2 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001540;


void sub_080033B8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03001540;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

