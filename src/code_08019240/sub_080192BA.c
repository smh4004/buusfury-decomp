/* sub_080192BA  (original: 0x080192BA-0x080192CE in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080192BA(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  while (iVar1 != 0) {
    param_2 = (int *)(*param_2 + 4);
    iVar1 = *param_2;
  }
  *param_2 = param_1;
  return;
}

