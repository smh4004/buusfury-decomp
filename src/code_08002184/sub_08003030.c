/* sub_08003030  (original: 0x08003030-0x08003070 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0802BFBC();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_08003030(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(int *)((char *)__frame + 0x0))
#define local_8 (*(int *)((char *)__frame + 0x4))
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_8 = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  local_c = param_1[iVar2];
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = sub_0802BFBC(param_1[iVar2],&local_c);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}

