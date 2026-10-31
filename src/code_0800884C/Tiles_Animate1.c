/* Tiles_Animate1  (original: 0x08009B12-0x08009B4C in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int sub_08049120();


void Tiles_Animate1(short *param_1,undefined4 param_2,int param_3)

{
  unsigned int __frame[1027];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_100c ((undefined1 *)((char *)__frame + 0x0))
  sub_08049120((int)auStack_100c,*(int *)(*(int *)(param_1 + 2) + *param_1 * 4 + 4) + 4,param_3,0);
  sub_08049138((uint)*(ushort *)(*(int *)(param_1 + 2) + 2) * 0x40 + 0x6000000,(int)auStack_100c,
               (uint)*(byte *)(*(int *)(param_1 + 2) + 1) << 6);
  return;
}

