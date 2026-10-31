/* sub_0803DCC4  (original: 0x0803DCC4-0x0803DD38 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 27% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803DADA();
extern int sub_0803FFE8();


void sub_0803DCC4(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  unsigned int __frame[69];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_114 ((ushort *)((char *)__frame + 0x0))
  iVar2 = sub_0803FFE8(*(undefined4 *)(param_1 + 0xc),param_3);
  if (param_2 < iVar2) {
    puVar3 = auStack_114;
    iVar2 = (*(ushort *)
              (**(int **)(param_1 + 0xc) + (uint)*(ushort *)(**(int **)(param_1 + 0xc) + 0x5c) * 2)
            + 1) * 2;
    while( true ) {
      uVar1 = *param_3;
      if (uVar1 < 0xff) {
        iVar5 = **(int **)(param_1 + 0xc);
        uVar4 = (uint)*(ushort *)(iVar5 + (uint)*(ushort *)(iVar5 + (uint)uVar1 * 2) * 2);
      }
      else {
        uVar4 = (*(int **)(param_1 + 0xc))[1];
      }
      iVar2 = iVar2 + uVar4 + 1;
      if (param_2 < iVar2) break;
      param_3 = param_3 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    }
    *puVar3 = 0x2e;
    puVar3[1] = 0x2e;
    puVar3[2] = 0;
    sub_0803DADA(param_1,auStack_114);
  }
  else {
    sub_0803DADA(param_1,param_3);
  }
  return;
}

