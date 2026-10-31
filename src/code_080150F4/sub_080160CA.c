/* sub_080160CA  (original: 0x080160CA-0x08016188 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_08015BB8();
extern int sub_08015DBE();


void sub_080160CA(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_2c (*(int *)((char *)__frame + 0x0))
#define iStack_28 (*(int *)((char *)__frame + 0x4))
#define iStack_24 (*(int *)((char *)__frame + 0x8))
#define iStack_20 (*(int *)((char *)__frame + 0xc))
#define iStack_1c (*(int *)((char *)__frame + 0x10))
#define iStack_18 (*(int *)((char *)__frame + 0x14))
  if (*(int *)(param_1 + 0x110) == 0) {
    sub_08015DBE(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar2 + 0x10) != 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
      *(uint *)(iVar2 + 8) = (uint)(*(int *)(param_1 + 0x3c) != 0);
      *(uint *)(*(int *)(param_1 + 0x20) + 8) =
           (uint)(*(int *)(param_1 + 0x4c) + -1 != *(int *)(param_1 + 0x3c));
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 8) = 0;
    }
  }
  iStack_24 = *(int *)(param_1 + 0x48);
  iStack_20 = *(int *)(param_1 + 0x28) + 3;
  iStack_18 = *(int *)(param_1 + 0x30) + -3;
  iStack_28 = *(int *)(param_1 + 0x30) + -5;
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 < *(int *)(param_1 + 0x38)) {
    do {
      iVar1 = iVar2 * 0xc + param_1;
      iStack_1c = iStack_24 + *(int *)(iVar1 + 0x58) + 6;
      iStack_2c = iStack_24 + 3;
      sub_08015BB8(param_2,&iStack_24,&iStack_2c,*(undefined4 *)(iVar1 + 0x50),
                   *(int *)(param_1 + 0x40) == iVar2);
      iVar2 = iVar2 + 1;
      iStack_24 = iStack_1c + 4;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}

