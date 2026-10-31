/* sub_08006718  (original: 0x08006718-0x080067A0 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803DADA();
extern int sub_08004F1C();
extern int __call_via_r2();
extern int sub_08004F50();
extern undefined volatile gUnknown_082B9BA0;
extern undefined volatile gUIStringPtrs;


void sub_08006718(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(undefined4 *)((char *)__frame + 0x0))
#define local_20 (*(undefined4 *)((char *)__frame + 0x4))
#define local_1c (*(undefined4 *)((char *)__frame + 0x8))
#define local_18 (*(undefined4 *)((char *)__frame + 0xc))
  sub_08004F1C(param_2,0,0,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  local_24 = 8;
  local_20 = 0x18;
  local_1c = 0xe8;
  local_18 = 0x98;
  sub_08004F50(param_2,&local_24);
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0x78;
  *(undefined4 *)(param_2 + 8) = 0x10;
  *(undefined **)(param_2 + 0xc) = &gUnknown_082B9BA0;
  param_2[3] = 5;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  sub_0803DADA(param_2,*(undefined4 *)(&gUIStringPtrs + param_3 * 4));
  if ((param_4 != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 4))) {
    do {
      piVar1 = *(int **)(iVar3 * 4 + param_1 + 8);
      iVar2 = *piVar1;
      __call_via_r2(piVar1,param_2,*(int *)(iVar2 + 8) + iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return;
}

