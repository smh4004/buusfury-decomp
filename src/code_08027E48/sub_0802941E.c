/* sub_0802941E  (original: 0x0802941E-0x08029526 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_08019B4E();
extern int sub_08011C70();
extern int sub_08019B7C();
extern int sub_08011944();
extern int sub_08009324();
extern int sub_0803FACC();
extern undefined volatile gUnknown_083192A8;
extern undefined4 volatile DAT_03001a50;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_08750204;
extern undefined volatile gUnknown_086B80D8;


void sub_0802941E(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
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
#define iStack_20 (*(int *)((char *)__frame + 0x30))
#define iStack_1c (*(int *)((char *)__frame + 0x34))
#define iStack_18 (*(int *)((char *)__frame + 0x38))
  piVar2 = (int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *piVar2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x54) + (iVar1 * 0x10000000 >> 0x1f) * -0xc;
  iStack_1c = param_1;
  iStack_18 = param_2;
  sub_08019B4E(param_1);
  if (*(int *)(param_1 + 0x4c) == 0) {
    if (*(int *)(param_1 + 0x40) != 0 || *(int *)(param_1 + 0x44) != 0) {
      iVar1 = sub_08019B7C(param_1);
      if (iVar1 == 0) {
        sub_08011944(&DAT_03001c4c,param_1);
      }
      else {
        iVar1 = sub_08009324((undefined4 *)(param_1 + 0x28),DAT_03001a50);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x4c) = 0x10;
          *(undefined **)(param_1 + 0x54) = &gUnknown_08750204;
          *piVar2 = 0;
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        else if ((iStack_18 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
          uStack_30 = *(undefined4 *)(param_1 + 0x1c);
          uStack_3c = *(undefined1 *)(param_1 + 0x10);
          puStack_34 = &gUnknown_086B80D8;
          uStack_38 = *(undefined4 *)(param_1 + 0x50);
          uStack_4c = *(undefined4 *)(param_1 + 0x28);
          uStack_48 = *(undefined4 *)(param_1 + 0x2c);
          uStack_44 = *(undefined4 *)(param_1 + 0x30);
          uStack_40 = *(undefined4 *)(param_1 + 0x34);
          auStack_50[0] = *(undefined1 *)(param_1 + 0x11);
          iStack_20 = param_1;
          iVar1 = sub_08011C70(&DAT_03001c4c,0,auStack_50);
          if (iVar1 != 0) {
            iVar1 = sub_0803FACC(2);
            sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar1 + 0x30) * 0xc,0x40,0);
            *(undefined4 *)(param_1 + 0x4c) = 0x10;
            *(undefined **)(param_1 + 0x54) = &gUnknown_08750204;
            *piVar2 = 0;
            *(undefined4 *)(param_1 + 0x44) = 0;
          }
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

