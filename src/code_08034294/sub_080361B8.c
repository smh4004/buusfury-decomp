/* sub_080361B8  (original: 0x080361B8-0x08036302 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FE78();
extern int sub_0800FDFA();
extern int sub_0803E378();
extern int __call_via_r3();
extern int sub_0803FACC();
extern undefined volatile gUnknown_083192A8;
extern undefined volatile gUnknown_086B8098;
extern int * volatile DAT_03001c34;
extern undefined volatile DAT_03003e5c;


undefined4 sub_080361B8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int __frame[33];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_84 (*(int *)((char *)__frame + 0x0))
#define iStack_80 (*(int *)((char *)__frame + 0x4))
#define iStack_7c (*(int *)((char *)__frame + 0x8))
#define iStack_78 (*(int *)((char *)__frame + 0xc))
#define uStack_74 (*(uint *)((char *)__frame + 0x10))
#define auStack_70 ((undefined1 *)((char *)__frame + 0x14))
#define iStack_6c (*(int *)((char *)__frame + 0x18))
#define iStack_68 (*(int *)((char *)__frame + 0x1c))
#define iStack_64 (*(int *)((char *)__frame + 0x20))
#define iStack_60 (*(int *)((char *)__frame + 0x24))
#define uStack_5c (*(undefined1 *)((char *)__frame + 0x28))
#define iStack_58 (*(int *)((char *)__frame + 0x2c))
#define puStack_54 (*(undefined * *)((char *)__frame + 0x30))
#define iStack_50 (*(int *)((char *)__frame + 0x34))
#define iStack_44 (*(int *)((char *)__frame + 0x40))
#define iStack_40 (*(int *)((char *)__frame + 0x44))
#define iStack_3c (*(int *)((char *)__frame + 0x48))
#define iStack_38 (*(int *)((char *)__frame + 0x4c))
#define iStack_34 (*(int *)((char *)__frame + 0x50))
#define iStack_30 (*(int *)((char *)__frame + 0x54))
#define iStack_2c (*(int *)((char *)__frame + 0x58))
#define iStack_28 (*(int *)((char *)__frame + 0x5c))
#define iStack_24 (*(int *)((char *)__frame + 0x60))
#define iStack_20 (*(int *)((char *)__frame + 0x64))
#define iStack_1c (*(int *)((char *)__frame + 0x68))
#define iStack_18 (*(int *)((char *)__frame + 0x6c))
  piVar1 = DAT_03001c34;
  if (DAT_03001c34 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    sub_0800FE78(&iStack_24,DAT_03001c34);
    sub_0800FE78(&iStack_34,param_2);
    iStack_68 = iStack_30 + iStack_28 >> 1;
    iStack_44 = iStack_34 + iStack_2c >> 1;
    uStack_74 = (uint)*(byte *)(param_2 + 0x10);
    iStack_78 = iStack_20 + iStack_18 >> 1;
    iStack_7c = iStack_24 + iStack_1c >> 1;
    iStack_84 = iStack_7c - iStack_44;
    iVar5 = iStack_78 - iStack_68;
    iVar3 = iStack_84;
    if (iStack_84 < 0) {
      iVar3 = -iStack_84;
    }
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = -iVar5;
    }
    iStack_80 = iVar5;
    iStack_3c = iStack_44;
    iStack_38 = iStack_68;
    if (iVar4 < iVar3) {
      iStack_60 = iStack_28 + 3;
      if (iStack_84 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 2;
        iStack_6c = iStack_34 + -4;
        iStack_64 = iStack_44;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 3;
        iStack_6c = iStack_44;
        iStack_64 = iStack_2c + 3;
      }
    }
    else {
      iStack_40 = iStack_68;
      sub_0800FDFA(&iStack_84,param_2);
      iStack_6c = iStack_84;
      iStack_64 = iStack_7c;
      if (iVar5 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 1;
        iStack_68 = iStack_30;
        iStack_60 = iStack_80;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 0;
        iStack_68 = iStack_30;
        iStack_60 = iStack_28 + -6;
      }
    }
    uStack_5c = *(undefined1 *)(param_2 + 0x10);
    puStack_54 = &gUnknown_086B8098;
    iStack_58 = *(int *)(param_1 + 0xc) << 10;
    auStack_70[0] = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      *(char *)(param_2 + 0x10) = (char)uStack_74;
    }
    iVar3 = *piVar1;
    iStack_50 = param_2;
    iStack_40 = param_2;
    iVar3 = __call_via_r3(piVar1,0,auStack_70,*(int *)(iVar3 + 0x24) + iVar3);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar3 + 0x30) * 0xc,0x40,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}

