/* sub_0801774C  (original: 0x0801774C-0x080177D2 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049144();


void sub_0801774C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  unsigned int __frame[261];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_414 ((ushort *)((char *)__frame + 0x0))
#define auStack_214 ((undefined1 *)((char *)__frame + 0x200))
  iVar2 = 0x100;
  if ((param_2 < 0x101) && (iVar2 = param_2, param_2 < 0)) {
    iVar2 = 0;
  }
  iVar1 = iVar2 * 0x1f;
  iVar2 = 0x100 - iVar2;
  iVar3 = 0;
  do {
    uVar5 = (uint)*(ushort *)(iVar3 * 2 + param_1 + 4);
    iVar4 = iVar3 + 1;
    auStack_414[iVar3] =
         (ushort)(iVar2 * (uVar5 & 0x1f) + iVar1 >> 8) |
         (ushort)(((int)(iVar2 * ((uVar5 << 0x16) >> 0x1b) + iVar1) >> 8) << 5) |
         (ushort)(((int)(iVar2 * ((uVar5 << 0x11) >> 0x1b) + iVar1) >> 8) << 10);
    iVar3 = iVar4;
  } while (iVar4 < 0x200);
  sub_08049144(0x5000000,(int)auStack_414,0x200);
  sub_08049144(0x5000200,(int)auStack_214,0x200);
  return;
}

