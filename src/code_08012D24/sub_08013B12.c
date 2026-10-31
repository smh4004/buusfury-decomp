/* sub_08013B12  (original: 0x08013B12-0x08013B34 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08013B12(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 0xc) != 0) {
    do {
      if (*(byte *)(param_1 + iVar1 + 0xd) == param_2) {
        *(undefined1 *)(param_1 + iVar1 + 0xd) = param_3;
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  return;
}

