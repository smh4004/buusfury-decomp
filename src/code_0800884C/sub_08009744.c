/* sub_08009744  (original: 0x08009744-0x080097A6 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 83% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080094B8();


undefined4 sub_08009744(int param_1,int *param_2)

{
  undefined4 uVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  local_14 = *param_2;
  local_10 = param_2[1];
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (local_10 < 0) {
    local_10 = 0;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x9c) < local_14 >> 10) {
    local_14 = (uint)*(ushort *)(param_1 + 0x9c) << 10;
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x9e) < local_10 >> 10) {
    local_10 = (uint)*(ushort *)(param_1 + 0x9e) << 10;
  }
  sub_080094B8(param_1,&local_14);
  if ((local_14 == *param_2) && (local_10 == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

