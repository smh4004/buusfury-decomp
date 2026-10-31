/* sub_080272AC  (original: 0x080272AC-0x080272EC in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080272AC(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + (uint)*(byte *)(param_1 + 0x11) * 0x10 +
                   (uint)*(byte *)(param_1 + 0x10) * 4 + 4);
  *(int *)(param_1 + 0x54) = iVar1;
  *(uint *)(param_1 + 0x6c) = (0x38 - (uint)(*(byte *)(iVar1 + 6) >> 1)) - (int)*(char *)(iVar1 + 4)
  ;
  if (*(byte *)(iVar1 + 7) < 0x21) {
    *(undefined4 *)(param_1 + 0x70) = 0x40;
  }
  else {
    *(uint *)(param_1 + 0x70) =
         (0x38 - (uint)(*(byte *)(iVar1 + 7) >> 1)) - (int)*(char *)(iVar1 + 5);
  }
  return;
}

