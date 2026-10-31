/* sub_08019888  (original: 0x08019888-0x080199F6 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 53% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08019B7C();
extern int sub_0801191A();
extern int sub_080197B4();
extern int sub_08011C70();
extern int sub_080116FC();
extern int sub_08009324();
extern int sub_0803E378();
extern int sub_08011944();
extern int sub_08019B4E();
extern int sub_0803FACC();
extern undefined volatile gUnknown_083192A8;
extern undefined volatile gUnknown_087137CC;
extern undefined4 volatile DAT_03001a50;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B80A8;
extern undefined volatile DAT_03003e5c;


void sub_08019888(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  unsigned int __frame[20];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_50 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_4c (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_48 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_44 (*(undefined4 *)((char *)__frame + 0xc))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x10))
#define uStack_3c (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_34 (*(undefined * *)((char *)__frame + 0x1c))
#define uStack_30 (*(undefined4 *)((char *)__frame + 0x20))
#define local_24 (*(int *)((char *)__frame + 0x2c))
#define local_20 (*(int *)((char *)__frame + 0x30))
#define iStack_1c (*(int *)((char *)__frame + 0x34))
#define iStack_18 (*(int *)((char *)__frame + 0x38))
  iStack_1c = param_1;
  iStack_18 = param_2;
  if (*(int *)(param_1 + 0x54) != 0) {
    if (*(int *)(param_1 + 0x58) != 0) {
      if (*(int *)(param_1 + 0x60) != 0) {
        local_24 = *(int *)(param_1 + 0x20) >> 8;
        local_20 = *(int *)(param_1 + 0x24) >> 8;
        uVar3 = *(undefined4 *)(param_1 + 0x60);
        iVar1 = sub_080116FC(&DAT_03001c4c);
        if (0xff < iVar1) {
          uVar3 = sub_080197B4(0,&local_24,uVar3,2);
          sub_0801191A(&DAT_03001c4c,uVar3);
        }
      }
      sub_08011944(&DAT_03001c4c,param_1);
      return;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0x10;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined **)(param_1 + 0x18) = &gUnknown_087137CC;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
    iVar1 = *(int *)(param_1 + 0x48) + 1;
    iVar2 = iVar1 >> 3;
    *(int *)(param_1 + 0x48) = iVar1;
    if (3 < iVar2) {
      iVar2 = 2 - ((iVar2 << 0x1f) >> 0x1f);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x50) + iVar2 * 0xc;
    sub_08019B4E(param_1);
    iVar1 = sub_08019B7C(param_1);
    if (iVar1 == 0) {
      sub_08011944(&DAT_03001c4c,param_1);
    }
    else {
      iVar1 = sub_08009324((undefined4 *)(param_1 + 0x28),DAT_03001a50);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0x10;
        *(undefined **)(param_1 + 0x18) = &gUnknown_087137CC;
      }
      else if ((iStack_18 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
        uStack_30 = *(undefined4 *)(param_1 + 0x1c);
        uStack_3c = *(undefined1 *)(param_1 + 0x10);
        puStack_34 = &gUnknown_086B80A8;
        uStack_38 = 0x400;
        uStack_4c = *(undefined4 *)(param_1 + 0x28);
        uStack_48 = *(undefined4 *)(param_1 + 0x2c);
        uStack_44 = *(undefined4 *)(param_1 + 0x30);
        uStack_40 = *(undefined4 *)(param_1 + 0x34);
        auStack_50[0] = *(undefined1 *)(param_1 + 0x11);
        if ((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x60) != 0)) {
          *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x1cc) = 0;
        }
        local_20 = param_1;
        iVar1 = sub_08011C70(&DAT_03001c4c,0,auStack_50);
        if (iVar1 != 0) {
          iVar1 = sub_0803FACC(2);
          sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar1 + 0x30) * 0xc,0x40,0);
          *(undefined4 *)(param_1 + 0x54) = 1;
        }
        if ((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x60) != 0)) {
          *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x1cc) = 1;
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) + -1;
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 == 0) {
      sub_08011944(&DAT_03001c4c,param_1);
    }
  }
  return;
}

