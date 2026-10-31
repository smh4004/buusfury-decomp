/* sub_080164D0  (original: 0x080164D0-0x08016524 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 54% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_0300106a;
extern undefined1 volatile gUnknown_083BD2F8;


void sub_080164D0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 0x134);
  piVar3 = (int *)(param_1 + 0x284);
  *piVar2 = 0;
  *piVar3 = 0;
  iVar1 = 0;
  do {
    if ((&DAT_0300106a)[iVar1] != '\0') {
      if (((&gUnknown_083BD2F8)[iVar1 * 0x34] & 1) == 0) {
        iVar4 = *piVar2;
        *piVar2 = iVar4 + 1;
        piVar2[iVar4 + 1] = iVar1;
      }
      else {
        iVar4 = *piVar3;
        *piVar3 = iVar4 + 1;
        piVar3[iVar4 + 1] = iVar1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x53);
  return;
}

