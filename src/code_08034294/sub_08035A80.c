/* sub_08035A80  (original: 0x08035A80-0x08035B34 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009324();
extern int sub_08011C70();
extern int sub_08011944();
extern int sub_08035A34();
extern int sub_08019B4E();
extern int volatile DAT_030019bc;
extern int volatile DAT_030019c4;
extern int volatile DAT_030019c0;
extern int volatile DAT_030019c8;
extern undefined4 volatile DAT_03001a50;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B8090;


void sub_08035A80(int param_1,int param_2)

{
  int iVar1;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_48 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_44 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_3c (*(undefined4 *)((char *)__frame + 0xc))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x10))
#define uStack_34 (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_30 (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_2c (*(undefined * *)((char *)__frame + 0x1c))
#define uStack_28 (*(undefined4 *)((char *)__frame + 0x20))
#define iStack_18 (*(int *)((char *)__frame + 0x30))
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
  sub_08019B4E(param_1);
  if ((((DAT_030019bc < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x28) < DAT_030019c4)) &&
      (DAT_030019c0 < *(int *)(param_1 + 0x34))) && (*(int *)(param_1 + 0x2c) < DAT_030019c8)) {
    iVar1 = sub_08009324((undefined4 *)(param_1 + 0x28),DAT_03001a50);
    if (iVar1 == 0) {
      sub_08035A34(param_1);
    }
    else if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      uStack_28 = *(undefined4 *)(param_1 + 0x1c);
      uStack_34 = *(undefined1 *)(param_1 + 0x10);
      puStack_2c = &gUnknown_086B8090;
      uStack_30 = 0x400;
      uStack_44 = *(undefined4 *)(param_1 + 0x28);
      uStack_40 = *(undefined4 *)(param_1 + 0x2c);
      uStack_3c = *(undefined4 *)(param_1 + 0x30);
      uStack_38 = *(undefined4 *)(param_1 + 0x34);
      auStack_48[0] = 0;
      iStack_18 = param_1;
      iVar1 = sub_08011C70(&DAT_03001c4c,0,auStack_48);
      if (iVar1 != 0) {
        sub_08035A34(param_1);
      }
    }
  }
  else {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}

