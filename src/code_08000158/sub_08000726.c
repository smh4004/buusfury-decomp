/* sub_08000726  (original: 0x08000726-0x08000738 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FACC();


void sub_08000726(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = sub_0803FACC(param_1[iVar2]);
  param_1[iVar2] = iVar1;
  return;
}

