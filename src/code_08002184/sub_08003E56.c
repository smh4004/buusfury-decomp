/* sub_08003E56  (original: 0x08003E56-0x08003E7C in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_08003E56(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  puVar1 = (undefined1 *)*param_2;
  if (param_1[iVar2] == 0) {
    *param_2 = puVar1 + CONCAT11(*puVar1,puVar1[1]);
    return;
  }
  *param_2 = puVar1 + 2;
  return;
}

