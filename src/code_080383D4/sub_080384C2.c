/* sub_080384C2  (original: 0x080384C2-0x080385F2 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009324();
extern int sub_08011944();
extern int sub_08011C0C();
extern undefined4 volatile DAT_03001a50;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B8108;


void sub_080384C2(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned int __frame[20];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_50 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_4c (*(int *)((char *)__frame + 0x4))
#define iStack_48 (*(int *)((char *)__frame + 0x8))
#define iStack_44 (*(int *)((char *)__frame + 0xc))
#define iStack_40 (*(int *)((char *)__frame + 0x10))
#define uStack_3c (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_34 (*(undefined * *)((char *)__frame + 0x1c))
#define uStack_30 (*(undefined4 *)((char *)__frame + 0x20))
#define iStack_24 (*(int *)((char *)__frame + 0x2c))
#define iStack_20 (*(int *)((char *)__frame + 0x30))
#define local_1c (*(int *)((char *)__frame + 0x34))
#define local_18 (*(int *)((char *)__frame + 0x38))
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (param_2 != 0) {
      iStack_24 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x34);
      local_18 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x38);
      local_1c = iStack_24;
      uStack_30 = *(undefined4 *)(param_1 + 0x48);
      uStack_3c = (undefined1)*(undefined4 *)(param_1 + 0x40);
      piVar3 = (int *)(param_1 + 0x1c);
      puStack_34 = &gUnknown_086B8108;
      uStack_38 = 0x400;
      auStack_50[0] = 1;
      piVar2 = piVar3;
      if (iStack_24 < *(int *)(param_1 + 0x1c)) {
        piVar2 = &local_1c;
      }
      iStack_4c = *piVar2 + -2;
      piVar2 = (int *)(param_1 + 0x20);
      piVar4 = piVar2;
      if (local_18 < *(int *)(param_1 + 0x20)) {
        piVar4 = &local_18;
      }
      iStack_48 = *piVar4 + -2;
      if (*piVar3 < iStack_24) {
        piVar3 = &local_1c;
      }
      iStack_44 = *piVar3 + 2;
      if (*piVar2 < local_18) {
        piVar2 = &local_18;
      }
      iStack_40 = *piVar2 + 2;
      iStack_20 = param_1;
      iVar1 = sub_08009324(&iStack_4c,DAT_03001a50);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        iVar1 = sub_08011C0C(&DAT_03001c4c,0,auStack_50);
        if (iVar1 == 0) {
          if (*(int *)(param_1 + 0x3c) < 0x30) {
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 4;
          }
          else {
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x34) * 4;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x38) * 4;
          }
          iVar1 = *(int *)(param_1 + 0x18) + 1;
          *(int *)(param_1 + 0x18) = iVar1;
          if (0xf0 < iVar1) {
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    local_1c = *(int *)(param_1 + 0x34) * 4;
    local_18 = *(int *)(param_1 + 0x38) * 4;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_1c;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + local_18;
    iVar1 = *(int *)(param_1 + 0x3c) + -4;
    *(int *)(param_1 + 0x3c) = iVar1;
    if (iVar1 < 1) {
      sub_08011944(&DAT_03001c4c,param_1);
    }
  }
  return;
}

