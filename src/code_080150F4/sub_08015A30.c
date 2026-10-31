/* sub_08015A30  (original: 0x08015A30-0x08015A50 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int Palette_Fade();


void sub_08015A30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (*(int *)(param_1 + 0x1c) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x14) - iVar1;
  }
  Palette_Fade(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),iVar1 * *(int *)(param_1 + 0x20),param_4);
  return;
}

