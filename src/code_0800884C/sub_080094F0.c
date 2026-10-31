/* sub_080094F0  (original: 0x080094F0-0x0800953E in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 84% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080094B8();


undefined4 sub_080094F0(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(int *)((char *)__frame + 0x0))
#define local_14 (*(int *)((char *)__frame + 0x4))
  uVar2 = *param_2;
  uVar3 = param_2[1];
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x9c) < (int)uVar2) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x9c);
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x9e) < (int)uVar3) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x9e);
  }
  local_18 = uVar2 << 10;
  local_14 = uVar3 << 10;
  sub_080094B8(param_1,&local_18);
  if ((uVar2 == *param_2) && (uVar3 == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

