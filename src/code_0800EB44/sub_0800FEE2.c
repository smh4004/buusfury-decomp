/* sub_0800FEE2  (original: 0x0800FEE2-0x0800FEFC in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001a38;
extern int volatile DAT_03001a3c;


void sub_0800FEE2(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x1a0);
  iVar1 = *piVar2;
  if (*(int *)(param_1 + 0x1a0) < 0) {
    *piVar2 = iVar1 + DAT_03001a38 * 0x100;
  }
  else if (DAT_03001a38 <= iVar1 >> 8) {
    *piVar2 = iVar1 + DAT_03001a38 * -0x100;
  }
  piVar2 = (int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x1a4) < 0) {
    *piVar2 = *piVar2 + DAT_03001a3c * 0x100;
  }
  else if (DAT_03001a3c <= *piVar2 >> 8) {
    *piVar2 = *piVar2 + DAT_03001a3c * -0x100;
  }
  return;
}

