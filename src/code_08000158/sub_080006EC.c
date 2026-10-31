/* sub_080006EC  (original: 0x080006EC-0x080006FE in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03002a60;


void sub_080006EC(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03002a60;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  param_1[iVar2 + 1] = iVar1;
  return;
}

