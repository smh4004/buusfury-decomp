/* sub_08004C8C  (original: 0x08004C8C-0x08004CE0 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08004C8C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar2 = param_1 + 0xc;
    do {
      if (*(int *)(iVar1 * 0xc + iVar2 + 0xc) == *(int *)(param_1 + 0x7c)) {
        do {
          iVar1 = iVar1 + -1;
          if (iVar1 < 0) {
            return 0;
          }
        } while (*(int *)(iVar1 * 0xc + iVar2 + 8) == 0);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 * 0xc + iVar2 + 0xc);
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  return 0;
}

