/* sub_080176D6  (original: 0x080176D6-0x0801774C in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 94% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049144();


void sub_080176D6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  unsigned int __frame[261];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_414 ((ushort *)((char *)__frame + 0x0))
#define auStack_214 ((undefined1 *)((char *)__frame + 0x200))
  iVar1 = 0x100;
  if ((param_2 < 0x101) && (iVar1 = param_2, param_2 < 0)) {
    iVar1 = 0;
  }
  iVar2 = 0;
  do {
    uVar4 = (uint)*(ushort *)(iVar2 * 2 + param_1 + 4);
    iVar3 = iVar2 + 1;
    auStack_414[iVar2] =
         (ushort)(iVar1 * (uVar4 & 0x1f) >> 8) |
         (ushort)(((int)(iVar1 * ((uVar4 << 0x16) >> 0x1b)) >> 8) << 5) |
         (ushort)(((int)(iVar1 * ((uVar4 << 0x11) >> 0x1b)) >> 8) << 10);
    iVar2 = iVar3;
  } while (iVar3 < 0x200);
  sub_08049144(0x5000000,(int)auStack_414,0x200);
  sub_08049144(0x5000200,(int)auStack_214,0x200);
  return;
}

