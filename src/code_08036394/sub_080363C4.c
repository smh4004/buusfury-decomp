/* sub_080363C4  (original: 0x080363C4-0x080363FA in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03000f94;
extern ushort volatile DAT_03003304;


undefined4 sub_080363C4(int param_1)

{
  int iVar1;
  
  if ((DAT_03003304 & 0xf3) == 0) {
    if (*(int *)(param_1 + 0x18) < DAT_03000f94 - *(int *)(param_1 + 0xc)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0xc) = DAT_03000f94;
    iVar1 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar1;
    if (*(int *)(param_1 + 0x14) < iVar1) {
      return 1;
    }
  }
  return 0;
}

