/* sub_0802133A  (original: 0x0802133A-0x08021452 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_08019B4E();
extern int sub_08011C0C();
extern int sub_0803FACC();
extern int sub_08011944();
extern undefined volatile gUnknown_083192A8;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_086B80C0;


void sub_0802133A(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_48 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_44 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_3c (*(undefined4 *)((char *)__frame + 0xc))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x10))
#define uStack_34 (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_30 (*(uint *)((char *)__frame + 0x18))
#define puStack_2c (*(undefined * *)((char *)__frame + 0x1c))
#define uStack_28 (*(undefined4 *)((char *)__frame + 0x20))
#define iStack_18 (*(int *)((char *)__frame + 0x30))
  iVar2 = *(int *)(param_1 + 0x40) + 1;
  iVar1 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x44) == 0) {
    *(int *)(param_1 + 0x40) = iVar2;
    uVar3 = (uint)(iVar2 * 0x8000000) >> 0x1e;
    if (uVar3 == 3) {
      *(int *)(param_1 + 0x18) = *(int *)(iVar1 + 4) + 0xc;
    }
    else {
      *(uint *)(param_1 + 0x18) = *(int *)(iVar1 + 4) + uVar3 * 0xc;
    }
    sub_08019B4E(param_1);
  }
  else if (*(int *)(param_1 + 0x48) == 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x40) = iVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x20;
    *(int *)(param_1 + 0x18) = *(int *)(iVar1 + 4) + (iVar2 * 0x10000000 >> 0x1f) * -0xc + 0xc;
    sub_08019B4E(param_1);
    iVar1 = *(int *)(param_1 + 0x58) + -0x20;
    *(int *)(param_1 + 0x58) = iVar1;
    iVar1 = *(int *)(param_1 + 0x54) + iVar1;
    *(int *)(param_1 + 0x54) = iVar1;
    if (iVar1 < 0) {
      if (param_2 != 0) {
        uStack_28 = *(undefined4 *)(param_1 + 0x1c);
        uStack_34 = *(undefined1 *)(param_1 + 0x10);
        puStack_2c = &gUnknown_086B80C0;
        uStack_30 = (uint)**(ushort **)(param_1 + 0x5c);
        uStack_44 = *(undefined4 *)(param_1 + 0x28);
        uStack_40 = *(undefined4 *)(param_1 + 0x2c);
        uStack_3c = *(undefined4 *)(param_1 + 0x30);
        uStack_38 = *(undefined4 *)(param_1 + 0x34);
        auStack_48[0] = (undefined1)*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1d0);
        iStack_18 = param_1;
        iVar1 = sub_08011C0C(&DAT_03001c4c,0,auStack_48);
        if (iVar1 != 0) {
          iVar1 = sub_0803FACC(3);
          sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar1 + 0x30) * 0xc,0x40,0);
        }
      }
      *(undefined4 *)(param_1 + 0x48) = 1;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x40) = iVar2;
    if (iVar2 >> 2 < (int)(uint)*(byte *)(iVar1 + 2)) {
      *(int *)(param_1 + 0x18) = *(int *)(iVar1 + 8) + (iVar2 >> 2) * 0xc;
      sub_08019B4E(param_1);
    }
    else {
      sub_08011944(&DAT_03001c4c,param_1);
    }
  }
  return;
}

