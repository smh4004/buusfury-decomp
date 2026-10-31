/* sub_0800E074  (original: 0x0800E074-0x0800E0F0 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_0800E074(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_2 + 0x4c);
  *(undefined2 *)(param_1 + 0x1b2) = *(undefined2 *)(param_2 + 0x4e);
  *(undefined2 *)(param_1 + 0x1b4) = *(undefined2 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x1b6) = *(undefined2 *)(param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x1b8) = 0x80;
  *(undefined1 *)(param_1 + 0x1b9) = 0x80;
  *(uint *)(param_1 + 0x1c0) = (uint)*(ushort *)(param_2 + 0x60);
  *(int *)(param_1 + 0x1c4) = (int)*(short *)(param_2 + 0x5c);
  *(uint *)(param_1 + 0x1cc) = (uint)(*(char *)(param_2 + 0x67) == '\0');
  iVar1 = (uint)*(ushort *)(param_2 + 0x54) * 5;
  *(int *)(param_1 + 0x238) = iVar1 + 0x66;
  *(int *)(param_1 + 0x23c) = iVar1 + 0x1a6;
  *(int *)(param_1 + 0x1bc) = *(char *)(param_2 + 0x66) * 0x290;
  return;
}

