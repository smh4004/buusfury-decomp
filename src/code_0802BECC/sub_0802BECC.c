/* sub_0802BECC  (original: 0x0802BECC-0x0802BFBC in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 91% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803F58C();
extern int sub_08046E40();
extern int sub_08011732();
extern int sub_0803DADA();
extern int sub_0804915C();
extern int sub_0801124C();
extern int sub_0803F540();
extern int sub_0803D5B8();
extern undefined volatile _0804B3D8;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;
extern undefined volatile _08049680;
extern undefined volatile gUnknown_087548DC;


undefined4 * sub_0802BECC(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[26];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define aiStack_68 ((int *)((char *)__frame + 0x0))
#define uStack_5c (*(undefined4 *)((char *)__frame + 0xc))
#define auStack_58 ((undefined1 *)((char *)__frame + 0x10))
#define uStack_56 (*(undefined1 *)((char *)__frame + 0x12))
#define uStack_55 (*(undefined1 *)((char *)__frame + 0x13))
#define iStack_54 (*(int *)((char *)__frame + 0x14))
#define uStack_50 (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_4c (*(undefined * *)((char *)__frame + 0x1c))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x30))
#define uStack_34 (*(undefined4 *)((char *)__frame + 0x34))
#define uStack_28 (*(undefined4 *)((char *)__frame + 0x40))
#define puStack_24 (*(undefined4 * *)((char *)__frame + 0x44))
#define iStack_20 (*(int *)((char *)__frame + 0x48))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x4c))
#define piStack_18 (*(int * *)((char *)__frame + 0x50))
  puStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  piStack_18 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1c), param_1 != (undefined4 *)0x0)) {
    iVar2 = param_2 * 0x20;
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)iVar2;
    iVar1 = sub_0801124C(&DAT_03001c4c,iVar2);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,iVar2);
      iVar1 = sub_0801124C(&DAT_03001c4c,iVar2);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804B3D8;
    param_1[4] = param_2;
    sub_0803F540(auStack_58,param_2,0x20);
    puStack_4c = &gUnknown_087548DC;
    auStack_58[0] = 1;
    uStack_55 = 2;
    uStack_56 = 1;
    uStack_38 = 0x803f70d;
    iStack_54 = (int)param_1[4] / 2;
    uStack_50 = 0x16;
    sub_08046E40(uStack_34,0,uStack_28);
    sub_0803DADA(auStack_58,uStack_1c);
    param_1[5] = *param_4 - (int)param_1[4] / 2;
    param_1[6] = param_4[1] + -0x10;
    aiStack_68[1] = 0;
    uStack_5c = 0x20;
    if (0 < (int)param_1[4]) {
      iVar1 = 0;
      do {
        iVar2 = iVar1 + 0x20;
        aiStack_68[0] = iVar1;
        aiStack_68[2] = iVar2;
        sub_0804915C((int)auStack_58,
                     (int)(&DAT_06010000 + iVar1 * 0x20 + (uint)*(ushort *)(param_1 + 3) * 0x20),
                     (int)aiStack_68);
        iVar1 = iVar2;
      } while (iVar2 < (int)param_1[4]);
    }
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    sub_0803F58C(auStack_58,0);
  }
  return param_1;
}

