/* sub_08009B4C  (original: 0x08009B4C-0x08009B80 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08009B4C(ushort *param_1)

{
  int iVar1;
  unsigned int __frame[1027];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_100c ((undefined1 *)((char *)__frame + 0x0))
  iVar1 = (param_1[1] - 1) * 0x10000;
  param_1[1] = (ushort)((uint)iVar1 >> 0x10);
  if (iVar1 >> 0x10 == 0) {
    iVar1 = (*param_1 + 1) * 0x10000;
    *param_1 = (ushort)((uint)iVar1 >> 0x10);
    if ((int)(uint)**(byte **)(param_1 + 2) <= iVar1 >> 0x10) {
      *param_1 = 0;
    }
    param_1[1] = (ushort)**(undefined4 **)(*(byte **)(param_1 + 2) + (short)*param_1 * 4 + 4);
    sub_08049120((int)auStack_100c,*(int *)(*(int *)(param_1 + 2) + (short)*param_1 * 4 + 4) + 4,
                 (short)*param_1 * 4,0);
    sub_08049138((uint)*(ushort *)(*(int *)(param_1 + 2) + 2) * 0x40 + 0x6000000,(int)auStack_100c,
                 (uint)*(byte *)(*(int *)(param_1 + 2) + 1) << 6);
    return;
  }
  return;
}

