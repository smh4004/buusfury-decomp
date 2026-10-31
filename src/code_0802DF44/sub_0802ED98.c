/* sub_0802ED98  (original: 0x0802ED98-0x0802EF16 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FCF4();
extern int sub_0803FCB4();
extern int sub_08047018();
extern int sub_08054A64();
extern int sub_0803FD76();
extern int sub_0804035C();
extern int __16__rt_sdiv();
extern int sub_08052F08();
extern int sub_08046FF4();
extern undefined volatile gUnknown_087B72EC;
extern undefined volatile gUnknown_087B6EEC;


void sub_0802ED98(int *param_1)

{
  int *piVar1;
  int *a1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int __frame[62];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_f8 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_d8 (*(int *)((char *)__frame + 0x20))
#define iStack_d4 (*(int *)((char *)__frame + 0x24))
#define iStack_d0 (*(int *)((char *)__frame + 0x28))
#define iStack_cc (*(int *)((char *)__frame + 0x2c))
#define iStack_c8 (*(int *)((char *)__frame + 0x30))
#define iStack_c4 (*(int *)((char *)__frame + 0x34))
#define iStack_c0 (*(int *)((char *)__frame + 0x38))
#define iStack_bc (*(int *)((char *)__frame + 0x3c))
#define iStack_b8 (*(int *)((char *)__frame + 0x40))
#define iStack_b4 (*(int *)((char *)__frame + 0x44))
#define iStack_b0 (*(int *)((char *)__frame + 0x48))
#define iStack_ac (*(int *)((char *)__frame + 0x4c))
#define iStack_a8 (*(int *)((char *)__frame + 0x50))
#define uStack_a4 (*(undefined4 *)((char *)__frame + 0x54))
#define uStack_a0 (*(undefined4 *)((char *)__frame + 0x58))
#define uStack_9c (*(undefined4 *)((char *)__frame + 0x5c))
#define iStack_98 (*(int *)((char *)__frame + 0x60))
#define iStack_94 (*(int *)((char *)__frame + 0x64))
#define iStack_90 (*(int *)((char *)__frame + 0x68))
#define iStack_8c (*(int *)((char *)__frame + 0x6c))
#define auStack_88 ((undefined1 *)((char *)__frame + 0x70))
#define iStack_80 (*(int *)((char *)__frame + 0x78))
#define local_7c (*(uint *)((char *)__frame + 0x7c))
#define local_78 (*(int *)((char *)__frame + 0x80))
#define local_74 (*(int *)((char *)__frame + 0x84))
#define local_70 (*(undefined4 *)((char *)__frame + 0x88))
#define local_6c (*(undefined4 *)((char *)__frame + 0x8c))
#define local_68 (*(undefined4 *)((char *)__frame + 0x90))
#define local_64 (*(undefined4 *)((char *)__frame + 0x94))
#define local_60 (*(undefined4 *)((char *)__frame + 0x98))
#define local_5c (*(uint *)((char *)__frame + 0x9c))
#define local_58 ((int *)((char *)__frame + 0xa0))
#define local_48 (*(int *)((char *)__frame + 0xb0))
#define local_44 (*(int *)((char *)__frame + 0xb4))
#define local_40 (*(int *)((char *)__frame + 0xb8))
#define local_3c (*(int *)((char *)__frame + 0xbc))
#define auStack_38 ((undefined1 *)((char *)__frame + 0xc0))
#define piStack_20 (*(int * *)((char *)__frame + 0xd8))
#define piStack_1c (*(int * *)((char *)__frame + 0xdc))
#define local_18 (*(int *)((char *)__frame + 0xe0))
  sub_08046FF4(auStack_38,&piStack_20,8,0x8050761);
  sub_0803FCF4(auStack_38,param_1 + 3);
  piVar1 = param_1 + 0x11;
  sub_0803FCB4();
  param_1[0x15] = param_1[0x15] - *param_1;
  param_1[0x16] = param_1[0x16] - param_1[1];
  sub_0803FD76(local_58 + 2,piVar1,auStack_38);
  sub_08047018(piVar1,local_58 + 2,auStack_38,8,0x80502a1);
  a1 = param_1 + 0x17;
  sub_0804035C();
  local_44 = *param_1;
  local_40 = param_1[1];
  local_3c = param_1[2];
  param_1[0x20] = param_1[0x20] - local_44;
  param_1[0x21] = param_1[0x21] - local_40;
  param_1[0x22] = param_1[0x22] - local_3c;
  local_48 = param_1[3] << 5;
  local_5c = __16__rt_sdiv(2);
  local_18 = (int)local_5c >> 0xf;
  uVar2 = local_5c & 0x7fff;
  local_58[0] = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)((local_18 + 0x40) * 0x1000000) >> 0x16))
                      * (0x8000 - uVar2) +
                     uVar2 * *(int *)(&gUnknown_087B6EEC +
                                     ((uint)((local_18 + 0x41) * 0x1000000) >> 0x16))) >> 0x10;
  local_58[3] = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)(local_18 << 0x18) >> 0x16)) *
                      (0x8000 - uVar2) +
                     *(int *)(&gUnknown_087B6EEC + ((uint)((local_18 + 1) * 0x1000000) >> 0x16)) *
                     uVar2) >> 0x10;
  local_58[1] = 0;
  local_58[2] = 0;
  local_68 = sub_08054A64(0x46b504f7);
  local_60 = 0;
  local_5c = 0;
  local_48 = param_1[4] << 5;
  local_64 = local_68;
  local_7c = __16__rt_sdiv(2);
  iVar3 = (int)local_7c >> 0xf;
  uVar2 = local_7c & 0x7fff;
  local_78 = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x16)) *
                   (0x8000 - uVar2) +
                  uVar2 * *(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x41) * 0x1000000) >> 0x16)
                                  )) >> 0x10;
  local_70 = 0;
  local_6c = 0;
  local_74 = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)(iVar3 << 0x18) >> 0x16)) * (0x8000 - uVar2)
                  + *(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 1) * 0x1000000) >> 0x16)) * uVar2
                  ) >> 0x10;
  sub_08052F08(auStack_88,local_58,&local_68);
  sub_08052F08(&iStack_98,auStack_88,&local_78);
  sub_08046FF4(&iStack_c8,&iStack_98,0xc,0x8050791);
  iVar6 = iStack_94 * 2 * iStack_98 >> 0xf;
  iVar3 = iStack_90 * 2;
  iStack_cc = iVar3 * iStack_98 >> 0xf;
  iVar4 = iStack_8c * 2;
  iStack_d0 = iVar4 * iStack_98 >> 0xf;
  iVar7 = iStack_94 * 2 * iStack_94 >> 0xf;
  iStack_d4 = iVar3 * iStack_94 >> 0xf;
  iStack_d8 = iVar4 * iStack_94 >> 0xf;
  iVar3 = iVar3 * iStack_90 >> 0xf;
  iVar5 = iVar4 * iStack_8c >> 0xf;
  iStack_c8 = 0x8000 - (iVar3 + iVar5) >> 5;
  iStack_c4 = iStack_d4 - iStack_d0 >> 5;
  iVar4 = iVar4 * iStack_90 >> 0xf;
  iStack_c0 = iStack_d8 + iStack_cc >> 5;
  iStack_bc = iStack_d4 + iStack_d0 >> 5;
  iStack_b8 = 0x8000 - (iVar5 + iVar7) >> 5;
  iStack_ac = iVar4 + iVar6 >> 5;
  iStack_b4 = iVar4 - iVar6 >> 5;
  iStack_a8 = 0x8000 - (iVar7 + iVar3) >> 5;
  iStack_b0 = iStack_d8 - iStack_cc >> 5;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  sub_08049174((int)auStack_f8,(int)a1,(int)&iStack_c8);
  sub_08047018(a1,auStack_f8,&iStack_c8,0xc,0x80502ad);
  *a1 = *a1 << 1;
  param_1[0x1a] = param_1[0x1a] << 1;
  param_1[0x20] = param_1[0x20] << 1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x400;
  param_1[0x1f] = 0;
  iVar3 = (int)(param_1[4] - 0x2f80U) >> 10;
  uVar2 = param_1[4] - 0x2f80U & 0x3ff;
  param_1[5] = ((int)(*(int *)(&gUnknown_087B72EC + ((uint)(iVar3 << 0x18) >> 0x16)) *
                      (0x400 - uVar2) +
                     *(int *)(&gUnknown_087B72EC + ((uint)((iVar3 + 1) * 0x1000000) >> 0x16)) *
                     uVar2) >> 0x10) * param_1[2] >> 10;
  iVar3 = (int)(param_1[4] + 0x7ef9U) >> 10;
  uVar2 = param_1[4] + 0x7ef9U & 0x3ff;
  iVar3 = (((int)((0x400 - uVar2) * *(int *)(&gUnknown_087B72EC + ((uint)(iVar3 << 0x18) >> 0x16)) +
                 uVar2 * *(int *)(&gUnknown_087B72EC + ((uint)((iVar3 + 1) * 0x1000000) >> 0x16)))
           >> 0x10) *
           (((int)(*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x16)) *
                   (0x400 - uVar2) +
                  *(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x41) * 0x1000000) >> 0x16)) *
                  uVar2) >> 0x10) * param_1[2] >> 10) >> 10) + -0x400;
  iVar4 = *param_1 - (iVar3 * param_1[0x12] >> 10) >> 10;
  piStack_1c = param_1 + 0x13;
  param_1[6] = iVar4;
  iVar5 = param_1[1] - (iVar3 * param_1[0x14] >> 10) >> 10;
  param_1[7] = iVar5;
  param_1[8] = iVar4;
  param_1[9] = iVar5;
  iStack_80 = iVar4 - (param_1[0x12] * 0xe0 >> 10);
  local_7c = iVar5 - (param_1[0x14] * 0xe0 >> 10);
  piStack_20 = param_1 + 6;
  sub_08053294(piStack_20,&iStack_80);
  iStack_80 = iVar4 - (*piVar1 * 0x70 >> 10);
  local_7c = iVar5 - (*piStack_1c * 0x70 >> 10);
  sub_08053294(piStack_20,&iStack_80);
  iStack_80 = (*piVar1 * 0x70 >> 10) + iVar4;
  local_7c = (*piStack_1c * 0x70 >> 10) + iVar5;
  sub_08053294(piStack_20,&iStack_80);
  iVar3 = param_1[3] >> 10;
  iStack_80 = (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0xec) * 0x1000000) >> 0x16)) * 0xe0 >>
              0x10) + iVar4;
  local_7c = iVar5 - (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 300) * 0x1000000) >> 0x16)) *
                      0xe0 >> 0x10);
  sub_08053294(piStack_20,&iStack_80);
  iStack_80 = (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x14) * 0x1000000) >> 0x16)) * 0xe0 >>
              0x10) + iVar4;
  local_7c = iVar5 - (*(int *)(&gUnknown_087B6EEC + ((uint)((iVar3 + 0x54) * 0x1000000) >> 0x16)) *
                      0xe0 >> 0x10);
  sub_08053294(piStack_20,&iStack_80);
  param_1[8] = param_1[8] + 1;
  param_1[9] = param_1[9] + 1;
  return;
}

