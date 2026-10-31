/* sub_08026CDA  (original: 0x08026CDA-0x08026D14 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08026CDA(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((((*piVar2 < *(int *)(iVar1 + 0x8034)) && (*(int *)(iVar1 + 0x802c) < piVar2[2])) &&
      (piVar2[1] < *(int *)(iVar1 + 0x8038))) && (*(int *)(iVar1 + 0x8030) < piVar2[3])) {
    return 1;
  }
  return 0;
}

