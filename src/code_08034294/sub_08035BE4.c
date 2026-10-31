/* sub_08035BE4  (original: 0x08035BE4-0x08035DCA in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080116FC();
extern int sub_0802A81C();
extern int sub_0800FDFA();
extern int sub_0801191A();
extern int sub_0803FACC();
extern undefined4 volatile DAT_03001c34;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086FD9D0;


void sub_08035BE4(undefined4 param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  unsigned int __frame[13];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_34 (*(int *)((char *)__frame + 0x0))
#define iStack_30 (*(int *)((char *)__frame + 0x4))
#define iStack_2c (*(int *)((char *)__frame + 0x8))
#define iStack_28 (*(int *)((char *)__frame + 0xc))
#define iStack_24 (*(int *)((char *)__frame + 0x10))
#define iStack_20 (*(int *)((char *)__frame + 0x14))
#define iStack_1c (*(int *)((char *)__frame + 0x18))
#define iStack_18 (*(int *)((char *)__frame + 0x1c))
  cVar7 = '\0';
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar2 < 8) {
    cVar7 = (char)(uVar1 >> 2);
  }
  else if (uVar2 < 0x38) {
    cVar7 = (byte)((uVar2 + 8) * 0x10000000 >> 0x1e) + 2;
    *(short *)(param_2 + 0x176) = *(short *)(param_2 + 0x176) + -8;
  }
  else if (uVar2 < 200) {
    sub_0800FDFA(&iStack_2c,param_2);
    iStack_34 = iStack_2c + iStack_24 >> 1;
    iStack_30 = iStack_28 + iStack_20 >> 1;
    iStack_1c = iStack_34;
    iStack_18 = iStack_30;
    sub_0800FDFA(&iStack_34,DAT_03001c34);
    iVar3 = iStack_30 + iStack_28 >> 1;
    iVar6 = iStack_34 + iStack_2c >> 1;
    piVar4 = (int *)(param_2 + 0x1a0);
    if (iStack_1c < iVar6) {
      *piVar4 = *piVar4 + 0x100;
    }
    else if (iVar6 < iStack_1c) {
      *piVar4 = *piVar4 + -0x100;
    }
    piVar4 = (int *)(param_2 + 0x1a4);
    if (iStack_18 < iVar3) {
      *piVar4 = *piVar4 + 0x100;
    }
    else if (iVar3 < iStack_18) {
      *piVar4 = *piVar4 + -0x100;
    }
  }
  else if (uVar2 < 0xf8) {
    cVar7 = (byte)((uVar2 << 0x1c) >> 0x1e) + 2;
    *(short *)(param_2 + 0x176) = *(short *)(param_2 + 0x176) + 8;
  }
  else {
    sub_0800FDFA(&iStack_2c,param_2);
    iStack_34 = iStack_2c + iStack_24 >> 1;
    iStack_30 = iStack_28 + iStack_20 >> 1;
    iStack_1c = iStack_34;
    iStack_18 = iStack_30;
    iVar3 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar3) {
      iVar3 = sub_0803FACC(0x1000);
      iStack_2c = iStack_1c + 0xf;
      iStack_28 = iStack_18 + 5;
      iStack_24 = iStack_2c;
      iStack_20 = iStack_28;
      uVar5 = sub_0802A81C(0,&iStack_24,&gUnknown_086FD9D0,4,iVar3 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar5);
    }
    iVar3 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar3) {
      iVar3 = sub_0803FACC(0x1000);
      iStack_2c = iStack_1c + -0xc;
      iStack_28 = iStack_18 + 10;
      iStack_24 = iStack_2c;
      iStack_20 = iStack_28;
      uVar5 = sub_0802A81C(0,&iStack_24,&gUnknown_086FD9D0,4,iVar3 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar5);
    }
    iVar3 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar3) {
      iVar3 = sub_0803FACC(0x1000);
      iStack_2c = iStack_1c + -3;
      iStack_28 = iStack_18 + -0xf;
      iStack_24 = iStack_2c;
      iStack_20 = iStack_28;
      uVar5 = sub_0802A81C(0,&iStack_24,&gUnknown_086FD9D0,4,iVar3 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar5);
      cVar7 = '\0';
    }
  }
  *(char *)(param_2 + 0x11) = cVar7;
  return;
}

