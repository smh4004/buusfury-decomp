/* sub_08020610  (original: 0x08020610-0x080206A0 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_080192CE();


void sub_08020610(int param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  piVar2 = *(int **)(param_2 + 4);
  local_14 = piVar2[0x68] >> 8;
  local_10 = piVar2[0x69] >> 8;
  sub_080192CE(&local_14,param_1 + 0x14,param_1 + 0x1c,param_1 + 0xc,*(undefined4 *)(param_1 + 8),
               local_14);
  __call_via_r1(piVar2,*(int *)(*piVar2 + 0x3c) + *piVar2);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar6 = iVar5;
  if (iVar5 < 0) {
    iVar6 = -iVar5;
  }
  if (iVar6 < iVar4) {
    if (iVar3 < 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    *(undefined1 *)(piVar2 + 4) = uVar1;
  }
  else {
    *(char *)(piVar2 + 4) = '\x01' - (-1 < iVar5);
  }
  __call_via_r2(piVar2,*(undefined1 *)(param_1 + 0x24),*(int *)(*piVar2 + 0x28) + *piVar2);
  return;
}

