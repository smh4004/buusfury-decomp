/* sub_08045530  (original: 0x08045530-0x0804554C in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08045530(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  
  puVar2 = (undefined1 *)*param_1;
  puVar3 = (undefined1 *)*param_2;
  while (bVar4 = param_3 != 0, param_3 = param_3 + -1, bVar4) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  }
  *param_1 = puVar2;
  *param_2 = puVar3;
  return;
}

