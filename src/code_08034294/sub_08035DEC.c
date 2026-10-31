/* sub_08035DEC  (original: 0x08035DEC-0x08035E34 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EE78();


void sub_08035DEC(undefined4 param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar1 = uVar1 >> 3;
  uVar2 = (uint)uVar1;
  if (((**(int **)(param_2 + 0x50) - 1U == uVar2) || (**(int **)(param_2 + 0x50) - 2U == uVar2)) &&
     (*(byte *)(param_2 + 0x11) != uVar2)) {
    *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + 0x800;
  }
  if (**(int **)(param_2 + 0x50) <= (int)uVar2) {
    sub_0800EE78();
    return;
  }
  *(char *)(param_2 + 0x11) = (char)uVar1;
  return;
}

