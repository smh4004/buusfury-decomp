/* sub_080398DC  (original: 0x080398DC-0x08039956 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080398DC(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint *puVar3;
  int iVar4;
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(uint *)((char *)__frame + 0x0))
#define local_8 (*(uint *)((char *)__frame + 0x4))
  uint *puVar2;
  
  puVar2 = &local_c;
  puVar3 = &local_c;
  local_8 = (uint)(*(ushort *)(param_2 + 0x12) >> 3);
  local_c = 2;
  if (local_8 < 2) {
    puVar2 = &local_8;
  }
  uVar1 = *puVar2;
  *(char *)(param_2 + 0x11) = (char)uVar1;
  if ((uVar1 & 0xff) != 0) {
    local_8 = (uint)*(ushort *)(param_2 + 0x12) * -3 + 0x18;
    local_c = 0xffffff38;
    if (-200 < (int)local_8) {
      puVar3 = &local_8;
    }
    *(short *)(param_2 + 0x176) = (short)*puVar3;
  }
  iVar4 = *(int *)(param_2 + 0x1f0);
  *(undefined2 *)(iVar4 + 0x176) = *(undefined2 *)(param_2 + 0x176);
  iVar4 = *(int *)(iVar4 + 0x1f8);
  *(undefined2 *)(iVar4 + 0x176) = *(undefined2 *)(param_2 + 0x176);
  *(undefined2 *)(*(int *)(iVar4 + 0x1f8) + 0x176) = *(undefined2 *)(param_2 + 0x176);
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 1;
  return;
}

