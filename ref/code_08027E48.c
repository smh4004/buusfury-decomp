/* Ghidra reference decompilation of code_08027E48 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08027E48 @ 0x08027E48 */

void sub_08027E48(int param_1)

{
  int a0;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  a0 = param_1 + 0x34;
  local_1c = 0x40;
  local_18 = 0x40;
  local_24 = 0;
  local_20 = 0;
  sub_0804915C(a0,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),(int)&local_24);
  local_24 = 0x40;
  local_1c = 0x80;
  local_20 = 0;
  local_18 = 0x40;
  sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011000,(int)&local_24);
  local_20 = 0;
  local_24 = 0x80;
  local_1c = 0xa0;
  local_18 = 0x40;
  sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6012000,(int)&local_24);
  return;
}


/* sub_08027EB0 @ 0x08027EB0 */

void sub_08027EB0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    iVar1 = sub_08046C54(param_1 + 0x29,&gUnknown_0874EA60,5);
    if (iVar1 != 0) {
      iVar1 = sub_08046C54(param_1 + 0x29,param_1 + 0x24,5);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 2;
        return;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return;
}


/* sub_08027EEE @ 0x08027EEE */

void sub_08027EEE(int param_1)

{
  uint uVar1;
  int a0;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = *(int *)(param_1 + 0x18) + 1;
  *(uint *)(param_1 + 0x18) = uVar1;
  if (0x1f < (int)uVar1) {
    *(undefined4 *)(param_1 + 0x30) = 0x8027eb1;
  }
  if ((uVar1 & 7) == 0) {
    if ((int)(uVar1 * 0x10000000) < 0) {
      a0 = param_1 + 0x68;
      local_1c = 0x40;
      local_18 = 0x40;
      local_24 = 0;
      local_20 = 0;
      sub_0804915C(a0,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),(int)&local_24)
      ;
      local_24 = 0x40;
      local_1c = 0x80;
      local_20 = 0;
      local_18 = 0x40;
      sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011000,(int)&local_24);
      local_20 = 0;
      local_24 = 0x80;
      local_1c = 0xa0;
      local_18 = 0x40;
      sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6012000,(int)&local_24);
    }
    else {
      sub_08027E48(param_1);
    }
  }
  return;
}


/* sub_08027F74 @ 0x08027F74 */

void sub_08027F74(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (0xf < iVar1) {
    sub_08049138(*(int *)(param_1 + 0x58),*(int *)(param_1 + 0x8c),0x2800);
    *(undefined4 *)(param_1 + 0x38) = 0x50;
    *(undefined4 *)(param_1 + 0x3c) = 0x1c;
    sub_0803DADA(param_1 + 0x34,L"Fusion-Ha!");
    sub_08027E48(param_1);
    *(undefined4 *)(param_1 + 0x30) = 0x8027eef;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


/* sub_08027FB8 @ 0x08027FB8 */

void sub_08027FB8(int param_1)

{
  int iVar1;
  int iVar2;
  int a2;
  int a3;
  int local_120 [3];
  undefined4 local_114;
  undefined1 auStack_110 [256];
  
  if ((DAT_03003304 & 0xf3) != 0) {
    a3 = *(int *)(param_1 + 0x18) * 2;
    local_120[2] = *(int *)(param_1 + 0x18) * 0x18;
    local_120[0] = local_120[2] + 0x14;
    local_120[1] = 0x2c;
    local_120[2] = local_120[2] + 0x24;
    local_114 = 0x3c;
    iVar1 = sub_08040322(&DAT_03003300);
    if (1 < iVar1) {
      iVar1 = iVar1 + -2;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    a2 = iVar2 + 1;
    *(int *)(param_1 + 0x18) = a2;
    *(char *)(iVar2 + param_1 + 0x29) = (char)iVar1;
    sub_08049120((int)auStack_110,*(int *)((&PTR_gUnknown_086B78C4_0874ea68)[iVar1] + 4),a2,a3);
    sub_0803F922(param_1 + 0x34,auStack_110,local_120);
    sub_08027E48(param_1);
    if (*(int *)(param_1 + 0x18) == 5) {
      *(undefined4 *)(param_1 + 0x30) = 0x8027f75;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}


/* sub_08028034 @ 0x08028034 */

void sub_08028034(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int aiStack_124 [3];
  undefined4 uStack_118;
  undefined1 auStack_114 [240];
  int aiStack_24 [3];
  undefined4 uStack_18;
  
  iVar1 = *(int *)(param_1 + 0x1c) + -1;
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    iVar1 = param_1 + 0x34;
    if (*(int *)(param_1 + 0x18) < 10) {
      if (*(int *)(param_1 + 0x18) < 5) {
        sub_08049120((int)auStack_114,
                     *(int *)((&PTR_gUnknown_086B78C4_0874ea68)
                              [*(byte *)(*(int *)(param_1 + 0x18) + param_1 + 0x24)] + 4),param_3,
                     param_4);
        aiStack_124[2] = *(int *)(param_1 + 0x18) * 0x18;
        aiStack_124[0] = aiStack_124[2] + 0x14;
        aiStack_124[2] = aiStack_124[2] + 0x24;
        uStack_118 = 0x3c;
        aiStack_124[1] = 0x2c;
        sub_0803F922(iVar1,auStack_114,aiStack_124);
        sub_08027E48(param_1);
      }
      else {
        aiStack_24[2] = *(int *)(param_1 + 0x18) * 0x18;
        aiStack_24[0] = aiStack_24[2] + -100;
        aiStack_24[2] = aiStack_24[2] + -0x54;
        uStack_18 = 0x3c;
        aiStack_24[1] = 0x2c;
        sub_0803F8E2(iVar1,*(int *)(param_1 + 0x90) * 0x2c + *(int *)(param_1 + 0x8c) +
                           aiStack_24[0],aiStack_24,0xa0);
        sub_08027E48(param_1);
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      sub_08049138(*(int *)(param_1 + 0x58),*(int *)(param_1 + 0x8c),0x2800);
      *(undefined4 *)(param_1 + 0x38) = 0x50;
      *(undefined4 *)(param_1 + 0x3c) = 0x1c;
      sub_0803DADA(iVar1,L"Your Turn!");
      sub_08027E48(param_1);
      *(undefined4 *)(param_1 + 0x30) = 0x8027fb9;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}


/* sub_0802812C @ 0x0802812C */

void sub_0802812C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  if (7 < iVar1) {
    *(undefined4 *)(param_1 + 0x30) = 0x8028035;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}


/* sub_08028144 @ 0x08028144 */

undefined4 * sub_08028144(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x9c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x2800;
    iVar2 = sub_0801124C(&DAT_03001c4c,0x2800);
    if (iVar2 == -1) {
      sub_08011732(&DAT_03001c4c,0x2800);
      iVar2 = sub_0801124C(&DAT_03001c4c,0x2800);
    }
    *(short *)(param_1 + 3) = (short)iVar2;
    *param_1 = &_0804C9C8;
    puVar3 = param_1 + 0xd;
    sub_0803F540(puVar3,0xa0,0x40);
    sub_0803F540(param_1 + 0x1a,0xa0,0x40);
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    param_1[8] = (8 - param_2) * 3;
    param_1[5] = 0;
    param_1[0xc] = 0x802812d;
    Wfz_LoadContainer(&gUnknown_08071758,param_1[0x23]);
    sub_08049138(param_1[0x16],param_1[0x23],0x2800);
    sub_08027E48(param_1);
    iVar2 = 0;
    do {
      uVar1 = sub_0803FACC(6);
      iVar4 = iVar2 + 1;
      *(undefined1 *)((int)param_1 + iVar2 + 0x24) = uVar1;
      iVar2 = iVar4;
    } while (iVar4 < 5);
    *(undefined1 *)((int)param_1 + 0x37) = 2;
    *(undefined1 *)((int)param_1 + 0x36) = 1;
    param_1[0x15] = 0x803f70d;
    *(undefined1 *)puVar3 = 1;
    param_1[0x10] = &gUnknown_082B9BA0;
    param_1[0xe] = 0x50;
    param_1[0xf] = 0x1c;
    sub_0803DADA(puVar3,L"Watch This!");
  }
  return param_1;
}


/* sub_0802821A @ 0x0802821A */

void sub_0802821A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r1(param_1,*(undefined4 *)(param_1 + 0x30),param_3,param_4,param_4);
  return;
}


/* sub_08028224 @ 0x08028224 */

int sub_08028224(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    iVar2 = param_2[1];
    puVar9 = (uint *)*param_2;
    param_2[1] = iVar2 + 0x20;
    iVar3 = param_2[2];
    param_2[2] = iVar3 + 1;
    iVar4 = *(int *)(param_1 + 0x14);
    uVar1 = __16__rt_sdiv(iVar4,0x800);
    iVar4 = iVar4 + -8;
    *puVar9 = 0xc0002100;
    iVar5 = *(int *)(param_1 + 0x14) * 0x28 + iVar4 * -0x58;
    uVar6 = ((uint)(((int)(((uint)(iVar5 >> 0x1f) >> 0x1d) + iVar5) >> 3) << 0x17) >> 7 | 0xc0002100
            ) + 0x30;
    *puVar9 = uVar6;
    puVar9[1] = puVar9[1] & 0xfffffc00 | *(ushort *)(param_1 + 0xc) & 0x3ff;
    uVar8 = (uint)(iVar3 << 0x1b) >> 2;
    *puVar9 = uVar6 & 0xc1ffffff | uVar8;
    puVar9[2] = 0xc0002100;
    iVar3 = *(int *)(param_1 + 0x14) * 0x68 + iVar4 * -0x58;
    uVar6 = ((uint)(((int)(((uint)(iVar3 >> 0x1f) >> 0x1d) + iVar3) >> 3) << 0x17) >> 7 | 0xc0002100
            ) + 0x30;
    puVar9[2] = uVar6;
    puVar9[3] = *(ushort *)(param_1 + 0xc) + 0x80 & 0x3ff | puVar9[3] & 0xfffffc00;
    puVar9[2] = uVar8 | uVar6 & 0xc1ffffff;
    puVar7 = puVar9 + 4;
    *puVar7 = 0xc000a100;
    iVar3 = *(int *)(param_1 + 0x14) * 0xa8 + iVar4 * -0x68;
    uVar6 = ((uint)(((int)(((uint)(iVar3 >> 0x1f) >> 0x1d) + iVar3) >> 3) << 0x17) >> 7 | 0xc000a100
            ) + 0x30;
    *puVar7 = uVar6;
    puVar9[5] = *(ushort *)(param_1 + 0xc) + 0x100 & 0x3ff | puVar9[5] & 0xfffffc00;
    *puVar7 = uVar6 & 0xc1ffffff | uVar8;
    *(undefined2 *)(iVar2 + 6) = uVar1;
    *(undefined2 *)(iVar2 + 0xe) = 0;
    *(undefined2 *)(iVar2 + 0x16) = 0;
    *(undefined2 *)(iVar2 + 0x1e) = uVar1;
    *param_2 = puVar9 + 6;
    iVar2 = 0;
  }
  return iVar2;
}


/* sub_08028390 @ 0x08028390 */

void sub_08028390(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_03002fe4 == 0) {
    uVar1 = sub_0801713C(&gUnknown_086B82EC +
                         (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
    sub_0800EDF8(param_2,uVar1);
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  else {
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    iVar3 = DAT_03000f94;
    if ((*(ushort *)(iVar2 + 4) & 0xf0) != 0) {
      *(ushort *)(param_2 + 0x8c) = *(ushort *)(iVar2 + 4) & 0xf0;
      param_2[0x8d] = iVar3;
    }
    iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if (((uint)*(ushort *)(iVar3 + 2) << 0x18) >> 0x1c != 0) {
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar3 + 4) << 0x1a) < 0) {
        *(undefined1 *)(param_2 + 4) = 2;
      }
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar3 + 4) << 0x1b) < 0) {
        *(undefined1 *)(param_2 + 4) = 3;
      }
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar3 + 4) << 0x19) < 0) {
        *(undefined1 *)(param_2 + 4) = 1;
      }
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar3 + 4) << 0x18) < 0) {
        *(undefined1 *)(param_2 + 4) = 0;
      }
      puVar4 = (undefined4 *)sub_0803D5B8(8);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = &_0804B7AC;
      }
      sub_0800ECDA(param_2,0);
      sub_0800ED18(param_2,puVar4);
    }
    if (0 < DAT_03002fe4) {
      DAT_03002fe4 = DAT_03002fe4 + -1;
      return;
    }
  }
  return;
}


/* sub_080284AA @ 0x080284AA */

void sub_080284AA(undefined4 param_1,int param_2)

{
  *(short *)(param_2 + 0x176) =
       (short)(-*(int *)(&gUnknown_087B6EEC + (((uint)*(ushort *)(param_2 + 0x12) << 0x18) >> 0x16))
              >> 0xd);
  return;
}


/* sub_080284C0 @ 0x080284C0 */

void sub_080284C0(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  piVar5 = param_2 + 0x68;
  piVar4 = param_2 + 0x8e;
  if (*(short *)((int)param_2 + 0x12) == 0) {
    if (DAT_03002fe4 == 0) {
      uVar1 = sub_0801713C(&gUnknown_086B82EC +
                           (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
      sub_0800EDF8(param_2,uVar1);
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
    iStack_18 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if (((uint)*(ushort *)(iStack_18 + 2) << 0x18) >> 0x1c == 0) {
      puVar2 = (undefined4 *)sub_0803D5B8(4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_0804BE60;
      }
      sub_0800ECDA(param_2,0);
      sub_0800ED18(param_2,puVar2);
    }
    else {
      *(undefined4 *)(param_1 + 4) = 0;
      if ((int)((uint)*(ushort *)(iStack_18 + 2) << 0x1a) < 0) {
        iStack_1c = param_2[0x69];
        iStack_20 = *piVar5 - *piVar4;
        sub_08012960(param_2,&iStack_20,2);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
      else if ((int)((uint)*(ushort *)(iStack_18 + 2) << 0x1b) < 0) {
        iStack_1c = param_2[0x69];
        iStack_20 = *piVar5 + *piVar4;
        sub_08012960(param_2,&iStack_20,2);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
      }
      if ((int)((uint)*(ushort *)(iStack_18 + 2) << 0x19) < 0) {
        iStack_20 = *piVar5;
        iStack_1c = param_2[0x69] - *piVar4;
        sub_08012960(param_2,&iStack_20,1);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 3;
      }
      else if ((int)((uint)*(ushort *)(iStack_18 + 2) << 0x18) < 0) {
        iStack_20 = *piVar5;
        iStack_1c = param_2[0x69] + *piVar4;
        sub_08012960(param_2,&iStack_20,1);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 6;
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
    if (((iVar3 == 1) || (iVar3 == 4)) || (iVar3 == 7)) {
      iStack_18 = param_2[0x69];
      iStack_1c = *piVar5 - *piVar4;
      sub_08012960(param_2,&iStack_1c,2);
    }
    iVar3 = *(int *)(param_1 + 4);
    if (((iVar3 == 2) || (iVar3 == 5)) || (iVar3 == 8)) {
      iStack_18 = param_2[0x69];
      iStack_1c = *piVar5 + *piVar4;
      sub_08012960(param_2,&iStack_1c,2);
    }
    iVar3 = *(int *)(param_1 + 4);
    if (((iVar3 == 3) || (iVar3 == 4)) || (iVar3 == 5)) {
      iStack_1c = *piVar5;
      iStack_18 = param_2[0x69] - *piVar4;
      sub_08012960(param_2,&iStack_1c,1);
    }
    iVar3 = *(int *)(param_1 + 4);
    if (((iVar3 == 6) || (iVar3 == 7)) || (iVar3 == 8)) {
      iStack_1c = *piVar5;
      iStack_18 = param_2[0x69] + *piVar4;
      sub_08012960(param_2,&iStack_1c,1);
    }
  }
  *(ushort *)((int)param_2 + 0x12) = *(short *)((int)param_2 + 0x12) + 8U & 0x7f;
  if (0 < DAT_03002fe4) {
    DAT_03002fe4 = DAT_03002fe4 + -1;
  }
  return;
}


/* sub_080286D4 @ 0x080286D4 */

undefined4 * sub_080286D4(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x50), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0xc0;
    iVar1 = sub_0801124C(&DAT_03001c4c,0xc0);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0xc0);
      iVar1 = sub_0801124C(&DAT_03001c4c,0xc0);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804B3AC;
    uVar2 = param_2[1];
    param_1[10] = *param_2;
    param_1[0xb] = uVar2;
    param_1[7] = 0;
    *(undefined1 *)(param_1 + 2) = 0x38;
    param_1[1] = param_2[1];
    if (param_3 == 0) {
      param_1[1] = param_2[1] + 0x2c;
    }
    param_1[0x13] = param_4;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0x10] = 8;
    param_1[6] = 0xffffffff;
    param_1[0x11] = param_3;
    uVar2 = param_2[1];
    param_1[10] = *param_2;
    param_1[0xb] = uVar2;
    uVar2 = param_2[1];
    param_1[8] = *param_2;
    param_1[9] = uVar2;
    param_1[0x12] = &gUnknown_0874ED7C + param_1[0x11] * 0x3c;
    iVar1 = param_1[0x11] * 8;
    uVar2 = *(undefined4 *)(&DAT_0874ea94 + iVar1);
    param_1[0xf] = *(undefined4 *)(&DAT_0874ea98 + iVar1);
    param_1[0xe] = uVar2;
  }
  return param_1;
}


/* sub_08028782 @ 0x08028782 */

void sub_08028782(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049680;
  if (*(short *)(param_1 + 3) != -1) {
    sub_0801142A(&DAT_03001c4c);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_080287AC @ 0x080287AC */

void sub_080287AC(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_48 [4];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((param_2 == 0) || (*(int *)(param_1 + 0x4c) == 0)) {
      iStack_24 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x38);
      local_18 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x3c);
      local_1c = iStack_24 + 8;
      iStack_20 = local_18 + -8;
      iStack_24 = iStack_24 + -8;
      local_18 = local_18 + 8;
      iVar2 = sub_08009324(&iStack_24,DAT_03001a50);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        if (*(int *)(param_1 + 0x40) < 0x40) {
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 4;
        }
        else {
          puStack_2c = (undefined *)(*(int *)(param_1 + 0x38) * 4);
          iStack_28 = *(int *)(param_1 + 0x3c) * 4;
          *(undefined **)(param_1 + 0x20) = puStack_2c + *(int *)(param_1 + 0x20);
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iStack_28;
        }
        iVar2 = *(int *)(param_1 + 0x1c) + 1;
        *(int *)(param_1 + 0x1c) = iVar2;
        if (0xf0 < iVar2) {
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
      }
    }
    else {
      local_1c = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x38);
      iStack_38 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x3c);
      iStack_28 = *(int *)(param_1 + 0x4c);
      uStack_34 = (undefined1)*(undefined4 *)(param_1 + 0x44);
      puStack_2c = &gUnknown_086B8090;
      uStack_30 = 0;
      auStack_48[0] = 0;
      iStack_40 = iStack_38 + -8;
      iStack_44 = local_1c + -8;
      iStack_3c = local_1c + 8;
      iStack_38 = iStack_38 + 8;
      local_18 = param_1;
      iVar2 = sub_08009324(&iStack_44,DAT_03001a50);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        iVar2 = sub_08011C0C(&DAT_03001c4c,0,auStack_48);
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x40) < 0x40) {
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 4;
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x38) * 4;
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x3c) * 4;
          }
          iVar2 = *(int *)(param_1 + 0x1c) + 1;
          *(int *)(param_1 + 0x1c) = iVar2;
          if (0xf0 < iVar2) {
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
        }
        else {
          uVar3 = sub_08000158(0x36);
          sub_0800EDF8(DAT_03001c34,uVar3);
          iVar2 = DAT_03001c34;
          puVar4 = (undefined4 *)sub_0803D5B8(4);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = &_0804BE60;
          }
          sub_0800ECDA(iVar2,0);
          sub_0800ED18(iVar2,puVar4);
          uVar1 = sub_0803FACC(3);
          *(undefined1 *)(DAT_03001c34 + 0x11) = uVar1;
          DAT_03002fe4 = 300;
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    local_1c = *(int *)(param_1 + 0x38) * 4;
    local_18 = *(int *)(param_1 + 0x3c) * 4;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + local_1c;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + local_18;
    iVar2 = *(int *)(param_1 + 0x40) + -4;
    *(int *)(param_1 + 0x40) = iVar2;
    if (iVar2 < 1) {
      sub_08011944(&DAT_03001c4c,param_1);
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  iVar5 = iVar2 >> 2;
  *(int *)(param_1 + 0x14) = iVar2;
  if (*(int *)(param_1 + 0x18) != iVar5) {
    *(int *)(param_1 + 0x18) = iVar5;
    iVar2 = ((iVar5 << 0x1f) >> 0x1f) * -0xc;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(*(int *)(param_1 + 0x48) + iVar2 + 8),0x40);
    sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010040,
                 *(int *)(*(int *)(param_1 + 0x48) + 0x20),0x40);
    sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010080,
                 *(int *)(*(int *)(param_1 + 0x48) + iVar2 + 0x2c),0x40);
  }
  return;
}


/* sub_080289E8 @ 0x080289E8 */

void sub_080289E8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}


/* sub_080289F8 @ 0x080289F8 */

undefined4 sub_080289F8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) - DAT_030019bc;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x24) - DAT_030019c0;
  *(int *)(param_1 + 0x30) = iVar1;
  return 1;
}


/* sub_08028A24 @ 0x08028A24 */

void sub_08028A24(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x48) + param_2 * 0xc);
  iVar3 = *(int *)(param_1 + 0x30) + (int)*pcVar1 + *param_5;
  uVar2 = *(int *)(param_1 + 0x34) + (int)pcVar1[1] + param_5[1];
  if ((((iVar3 < 0xf0) && (0 < (int)(iVar3 + (uint)(byte)pcVar1[2]))) && ((int)uVar2 < 0xa0)) &&
     (0 < (int)(uVar2 + (byte)pcVar1[3]))) {
    *(undefined4 *)*param_3 = *(undefined4 *)(pcVar1 + 4);
    uVar5 = *(uint *)*param_3;
    uVar4 = (uint)(iVar3 * 0x800000) >> 7;
    *(uint *)*param_3 = uVar4 | uVar5 & 0xfe00ffff;
    *(uint *)*param_3 = uVar2 & 0xff | uVar4 | uVar5 & 0xfe00ff00;
    uVar4 = *(uint *)(*param_3 + 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc) + param_4 & 0x3ff;
    *(uint *)(*param_3 + 4) = uVar2 | uVar4 & 0xfffffc00;
    *(uint *)(*param_3 + 4) =
         (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar4 & 0xfffff000;
    *param_3 = *param_3 + 8;
  }
  return;
}


/* sub_08028AD2 @ 0x08028AD2 */

undefined4 sub_08028AD2(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  local_18 = *param_2;
  if (*(int *)(param_1 + 0x40) < 0x40) {
    sub_08028A24(param_1,0,&local_18,0,&DAT_0874ea8c);
  }
  local_28 = *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x38);
  local_24 = *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x3c);
  local_20 = local_28;
  local_1c = local_24;
  sub_08028A24(param_1,3,&local_18,4,&local_20);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x40) + -1) {
    do {
      local_28 = iVar1 * *(int *)(param_1 + 0x38);
      local_24 = iVar1 * *(int *)(param_1 + 0x3c);
      sub_08028A24(param_1,2,&local_18,2,&local_28,local_24);
      iVar1 = iVar1 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x40) + -1);
  }
  *param_2 = local_18;
  return 0;
}


/* sub_08028B5A @ 0x08028B5A */

undefined4 sub_08028B5A(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    if (*(int **)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 0x14) == (param_1[0x11] ^ 1U)) {
      iVar3 = param_1[8] + param_1[0x10] * param_1[0xe];
      iVar2 = param_1[9] + param_1[0x10] * param_1[0xf];
      if ((((*(int *)(param_3 + 4) < iVar3 + 0xc) && (iVar3 + -0xc < *(int *)(param_3 + 0xc))) &&
          (*(int *)(param_3 + 8) < iVar2 + 0xc)) && (iVar2 + -0xc < *(int *)(param_3 + 0x10))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 0xb) {
    uVar1 = 0;
  }
  else if (param_2 == 0xc) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08028BEE @ 0x08028BEE */

undefined4 sub_08028BEE(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_08028C04 @ 0x08028C04 */

undefined4 * sub_08028C04(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x44), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0xc0;
    iVar1 = sub_0801124C(&DAT_03001c4c,0xc0);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0xc0);
      iVar1 = sub_0801124C(&DAT_03001c4c,0xc0);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804CDD4;
    uVar3 = param_2[1];
    param_1[7] = *param_2;
    param_1[8] = uVar3;
    *(undefined1 *)(param_1 + 2) = 0x38;
    param_1[1] = param_2[1];
    if (param_3 == 0) {
      param_1[1] = param_2[1] + 0x2c;
    }
    param_1[0x10] = param_4;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0xd] = 8;
    param_1[6] = 0xffffffff;
    param_1[0xe] = param_3;
    uVar3 = param_2[1];
    param_1[7] = *param_2;
    param_1[8] = uVar3;
    iVar2 = param_1[0xe] * 0x18;
    iVar1 = param_1[0xe] * 8;
    param_1[0xf] = &gUnknown_0874EFEC + iVar2;
    uVar3 = *(undefined4 *)(&DAT_0874eacc + iVar1);
    param_1[0xc] = *(undefined4 *)(&DAT_0874ead0 + iVar1);
    param_1[0xb] = uVar3;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),
                 *(int *)(&DAT_0874eff4 + iVar2),0x40);
    sub_08049138((uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010040,*(int *)(param_1[0xf] + 0x14),
                 0x80);
  }
  return param_1;
}


/* sub_08028CCA @ 0x08028CCA */

void sub_08028CCA(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049680;
  if (*(short *)(param_1 + 3) != -1) {
    sub_0801142A(&DAT_03001c4c);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_08028CF4 @ 0x08028CF4 */

void sub_08028CF4(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_44 [4];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  int iStack_18;
  int iStack_14;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (param_2 != 0) {
      iStack_18 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
      iStack_34 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
      uStack_24 = *(undefined4 *)(param_1 + 0x40);
      uStack_30 = (undefined1)*(undefined4 *)(param_1 + 0x38);
      puStack_28 = &gUnknown_086B8088;
      uStack_2c = 0x400;
      auStack_44[0] = 0;
      iStack_40 = iStack_18 + -8;
      iStack_38 = iStack_18 + 8;
      iStack_3c = iStack_34 + -8;
      iStack_34 = iStack_34 + 8;
      iStack_14 = param_1;
      iVar1 = sub_08009324(&iStack_40,DAT_03001a50);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        iVar1 = sub_08011C0C(&DAT_03001c4c,0,auStack_44);
        if (iVar1 == 0) {
          if (*(int *)(param_1 + 0x34) < 0x50) {
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
          }
          else {
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
      }
    }
  }
  else if ((*(char *)(param_1 + 0x10) == '\x01') &&
          (iVar1 = *(int *)(param_1 + 0x34) + -4, *(int *)(param_1 + 0x34) = iVar1, iVar1 < 1)) {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}


/* sub_08028DAE @ 0x08028DAE */

void sub_08028DAE(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}


/* sub_08028DBE @ 0x08028DBE */

undefined4 sub_08028DBE(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - DAT_030019bc;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x20) - DAT_030019c0;
  *(int *)(param_1 + 0x24) = iVar1;
  return 1;
}


/* sub_08028DEA @ 0x08028DEA */

void sub_08028DEA(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x3c) + param_2 * 0xc);
  iVar3 = *(int *)(param_1 + 0x24) + (int)*pcVar1 + *param_5;
  uVar2 = *(int *)(param_1 + 0x28) + (int)pcVar1[1] + param_5[1];
  if ((((iVar3 < 0xf0) && (0 < (int)(iVar3 + (uint)(byte)pcVar1[2]))) && ((int)uVar2 < 0xa0)) &&
     (0 < (int)(uVar2 + (byte)pcVar1[3]))) {
    *(undefined4 *)*param_3 = *(undefined4 *)(pcVar1 + 4);
    uVar5 = *(uint *)*param_3;
    uVar4 = (uint)(iVar3 * 0x800000) >> 7;
    *(uint *)*param_3 = uVar4 | uVar5 & 0xfe00ffff;
    *(uint *)*param_3 = uVar2 & 0xff | uVar4 | uVar5 & 0xfe00ff00;
    uVar4 = *(uint *)(*param_3 + 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc) + param_4 & 0x3ff;
    *(uint *)(*param_3 + 4) = uVar2 | uVar4 & 0xfffffc00;
    *(uint *)(*param_3 + 4) =
         (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar4 & 0xfffff000;
    *param_3 = *param_3 + 8;
  }
  return;
}


/* sub_08028EBC @ 0x08028EBC */

undefined4 sub_08028EBC(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  local_18 = *param_2;
  local_28 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
  local_24 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
  local_20 = local_28;
  local_1c = local_24;
  sub_08028DEA(param_1,1,&local_18,2,&local_20);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x34) + -1) {
    do {
      local_28 = iVar1 * *(int *)(param_1 + 0x2c);
      local_24 = iVar1 * *(int *)(param_1 + 0x30);
      sub_08028DEA(param_1,0,&local_18,0,&local_28,local_24);
      iVar1 = iVar1 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x34) + -1);
  }
  *param_2 = local_18;
  return 0;
}


/* sub_08028F2C @ 0x08028F2C */

undefined4 sub_08028F2C(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    if ((int *)param_3[0xc] == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 5) == (param_1[0xe] ^ 1U)) {
      iVar2 = param_1[7] + param_1[0xd] * param_1[0xb];
      iVar3 = param_1[8] + param_1[0xd] * param_1[0xc];
      if ((((param_3[1] < iVar2 + 0xc) && (iVar2 + -0xc < param_3[3])) && (param_3[2] < iVar3 + 0xc)
          ) && (iVar3 + -0xc < param_3[4])) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 0xb) {
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),
                 *(int *)(param_1[0xf] + 8),0x40);
    sub_08049138((uint)*(ushort *)(param_1 + 3) * 0x20 + 0x6010040,*(int *)(param_1[0xf] + 0x14),
                 0x80);
    uVar1 = 0;
  }
  else if (param_2 == 0xc) {
    __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
    uVar1 = 0;
  }
  else if (param_2 == 0x26) {
    if (param_1 == param_3) {
      sub_08011944(&DAT_03001c4c,param_1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08028FFE @ 0x08028FFE */

undefined4 sub_08028FFE(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_08029014 @ 0x08029014 */

void sub_08029014(int param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  wchar16 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  
  local_14 = (undefined4 *)0x0;
  local_20 = (wchar16 *)0x4c;
  local_1c = 1;
  local_18 = 1;
  uVar1 = sub_08013E64(0,param_1,1,0xc);
  sub_0800664E(param_1,uVar1);
  local_18 = 0;
  local_14 = &gUnknown_0807012C;
  local_1c = 5;
  local_20 = L"Cancel";
  uVar1 = sub_08014124(0,param_1,0x1c,0x58);
  sub_0800664E(param_1,uVar1);
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0x5480);
  local_20 = (wchar16 *)0x2;
  local_1c = 5;
  local_18 = 0x1c;
  local_14 = (undefined4 *)0x12;
  sub_0803DA10(&local_20,&DAT_0600f800,0x259);
  uVar3 = sub_080135A2(&DAT_03001560 + *(int *)(param_1 + 0x114) * 0x68,
                       *(undefined4 *)(param_1 + 0x118));
  uVar4 = CONCAT24((short)((uint6)uVar3 >> 0x20),(uint)*(byte *)uVar3);
  if (*(byte *)uVar3 != 0xff) {
    local_14 = (undefined4 *)0x0;
    local_18 = 1;
    local_20 = (wchar16 *)0x4d;
    local_1c = 4;
    uVar1 = sub_08013E64(0,param_1,4,0x8c);
    *(undefined4 *)(param_1 + 0x11c) = uVar1;
    local_14 = (undefined4 *)0x0;
    local_18 = 1;
    local_20 = (wchar16 *)0x4d;
    local_1c = 5;
    uVar1 = sub_08013E64(0,param_1,5,0xb4);
    *(undefined4 *)(param_1 + 0x120) = uVar1;
    sub_0800664E(param_1,*(undefined4 *)(param_1 + 0x11c));
    uVar4 = sub_0800664E(param_1,*(undefined4 *)(param_1 + 0x120));
  }
  puVar2 = (ushort *)((int)uVar4 * 0x4000000);
  puVar2[4] = (ushort)((uint6)uVar4 >> 0x20);
  *puVar2 = *puVar2 | (ushort)((uint)puVar2 >> 0x12);
  return;
}


/* sub_08029118 @ 0x08029118 */

void sub_08029118(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,0x4000000,param_4);
  }
  return;
}


/* sub_08029138 @ 0x08029138 */

void sub_08029138(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  Wfz_LoadContainer(&DAT_0874f058,param_1,param_3,param_4,param_4);
  iVar2 = 0;
  do {
    iVar3 = 0x100;
    if (iVar2 + 3 < 8) {
      iVar3 = 0;
    }
    iVar1 = 0;
    do {
      uVar4 = iVar1 + 3;
      iVar5 = iVar2 * 0x18 + iVar1;
      iVar1 = iVar1 + 1;
      *(undefined1 *)(iVar5 + param_1 + 0x34) =
           *(undefined1 *)
            (*(int *)(param_2 + 4) +
            (uVar4 & 7) + ((int)uVar4 >> 3) * 0x40 +
            ((uint)((iVar2 + 3) * 0x20000000) >> 0x1a) + iVar3);
    } while (iVar1 < 0x10);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return;
}


/* sub_08029192 @ 0x08029192 */

void sub_08029192(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 auStack_164 [264];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 uStack_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_2c;
  int local_18;
  
  local_18 = param_1;
  sub_0803F540(&uStack_4c,0xd0,0x68);
  sub_08005096(&uStack_4c);
  iVar1 = local_18;
  puVar3 = &DAT_03001560 + *(int *)(local_18 + 0x114) * 0x68;
  pcVar2 = (char *)sub_080135A2(puVar3,*(undefined4 *)(local_18 + 0x118));
  local_40 = &gUnknown_0807012C;
  local_4a = 1;
  local_2c = 0x803f5a5;
  local_4b = 0xc;
  local_5c = 0xe;
  local_58 = 6;
  local_54 = 0x26;
  local_50 = 0x11;
  sub_08029138(auStack_164,pcVar2);
  sub_0803F922(&uStack_4c,auStack_164,&local_5c);
  local_49 = 5;
  local_48 = 0x28;
  local_44 = 0xf;
  sub_0803DADA(&uStack_4c,*(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(pcVar2 + 0xc) * 4));
  local_49 = 0x75;
  local_48 = 0xe;
  local_44 = 0x1b;
  sub_0803DD66(&uStack_4c,0xb4,*(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(pcVar2 + 0xe) * 4)
              );
  if (*pcVar2 != -1) {
    *(uint *)(*(int *)(iVar1 + 0x11c) + 8) =
         (uint)(puVar3[*(int *)(iVar1 + 0x118) * 2 + 0x2e] != '\0');
    *(uint *)(*(int *)(iVar1 + 0x120) + 8) =
         (uint)(puVar3[*(int *)(iVar1 + 0x118) * 2 + 0x2e] !=
               puVar3[*(int *)(iVar1 + 0x118) * 2 + 0x2f]);
    local_49 = 3;
    local_48 = 0xa9;
    local_44 = 0x58;
    uStack_4c = 1;
    sub_0803DC96(&uStack_4c,sub_080292D8,(byte)puVar3[*(int *)(iVar1 + 0x118) * 2 + 0x2e] + 1);
  }
  sub_080066EC(local_18,&uStack_4c);
  sub_08049150((int)&uStack_4c,0x6009640);
  sub_0803F58C(&uStack_4c,0);
  return;
}


/* sub_080292D8 @ 0x080292D8 */

undefined4 sub_080292D8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int unaff_r4;
  
  if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,unaff_r4 << 1);
    sub_0803D876(1);
    return 1;
  }
  if (param_3 != 4) {
    if (param_3 == 5) {
      pcVar2 = (char *)(*(int *)(param_1 + 0x118) * 2 + *(int *)(param_1 + 0x114) * 0x68 + 0x300158e
                       );
      cVar1 = *pcVar2;
      do {
        *pcVar2 = cVar1 + '\x01';
      } while (*pcVar2 != (char)(cVar1 + '\x01'));
      *(undefined4 *)(param_1 + 0x110) = 0;
      return 0;
    }
    return 0;
  }
  pcVar2 = (char *)(*(int *)(param_1 + 0x118) * 2 + *(int *)(param_1 + 0x114) * 0x68 + 0x300158e);
  cVar1 = *pcVar2;
  do {
    *pcVar2 = cVar1 + -1;
  } while (*pcVar2 != (char)(cVar1 + -1));
  *(undefined4 *)(param_1 + 0x110) = 0;
  return 0;
}


/* sub_080292E0 @ 0x080292E0 */

undefined4 sub_080292E0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_3 == 1) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    sub_0803D876(1);
    return 1;
  }
  if (param_3 != 4) {
    if (param_3 == 5) {
      pcVar2 = (char *)(*(int *)(param_1 + 0x118) * 2 + *(int *)(param_1 + 0x114) * 0x68 + 0x300158e
                       );
      cVar1 = *pcVar2;
      do {
        *pcVar2 = cVar1 + '\x01';
      } while (*pcVar2 != (char)(cVar1 + '\x01'));
      *(undefined4 *)(param_1 + 0x110) = 0;
      return 0;
    }
    return 0;
  }
  pcVar2 = (char *)(*(int *)(param_1 + 0x118) * 2 + *(int *)(param_1 + 0x114) * 0x68 + 0x300158e);
  cVar1 = *pcVar2;
  do {
    *pcVar2 = cVar1 + -1;
  } while (*pcVar2 != (char)(cVar1 + -1));
  *(undefined4 *)(param_1 + 0x110) = 0;
  return 0;
}


/* sub_08029372 @ 0x08029372 */

undefined4 sub_08029372(void)

{
  return 0;
}


/* sub_08029384 @ 0x08029384 */

undefined4 *
sub_08029384(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x58), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x400,param_3);
    *param_1 = &_0804BFA0;
    param_1[0x14] = param_4;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    param_1[0x12] = 0;
    param_1[0x15] = &gUnknown_087501EC;
    param_1[0x13] = 0;
    param_1[6] = &gUnknown_087501EC;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(undefined1 *)(param_1 + 2) = param_5;
    sub_08019B4E(param_1);
  }
  return param_1;
}


/* sub_080293E4 @ 0x080293E4 */

void sub_080293E4(int param_1)

{
  int iVar1;
  
  iVar1 = (uint)*(byte *)(param_1 + 0x10) * 8;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(&gUnknown_0874F08C + iVar1);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(&DAT_0874f090 + iVar1);
  sub_0803E378(&DAT_03003e5c,&gUnknown_08319440,0x40,0);
  return;
}


/* sub_0802940C @ 0x0802940C */

void sub_0802940C(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0x10;
  *(undefined **)(param_1 + 0x54) = &gUnknown_08750204;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


/* sub_0802941E @ 0x0802941E */

void sub_0802941E(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
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


/* sub_08029526 @ 0x08029526 */

undefined4 sub_08029526(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = sub_08019CC4();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      return 0;
    }
    if ((((**(char **)(param_3 + 0x1c) == '\x01') &&
         (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))) &&
        (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
       ((*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34) &&
        (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))) {
      *(undefined4 *)(param_1 + 0x4c) = 0x10;
      *(undefined **)(param_1 + 0x54) = &gUnknown_08750204;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      return 1;
    }
  }
  return 0;
}


/* sub_08029584 @ 0x08029584 */

void sub_08029584(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_4;
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    uVar2 = sub_08029384(0,param_1,param_2,param_3,param_4,param_1,uVar2,uVar3,uVar4);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}


/* sub_080295DC @ 0x080295DC */

undefined4 sub_080295DC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar1 = 0;
  if (DAT_03001b94 != 0) {
    sub_0800FDFA(&local_48);
    local_34 = local_44 + local_3c >> 1;
    local_38 = local_48 + local_40 >> 1;
    sub_0800FDFA(&local_30,param_2,local_3c,param_4,local_38,local_34);
    local_38 = local_38 - (local_30 + local_28 >> 1);
    local_34 = local_34 - (local_2c + local_24 >> 1);
    if (*(int *)(param_1 + 0xc) < local_38 * local_38 + local_34 * local_34) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* sub_08029660 @ 0x08029660 */

void sub_08029660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804A6E8;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}


/* sub_0802968C @ 0x0802968C */

undefined4 * sub_0802968C(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804BDD0;
    puVar1[1] = uVar2;
  }
  return puVar1;
}


/* sub_080296A2 @ 0x080296A2 */

undefined4 sub_080296A2(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(param_1 + 0xc);
  return 0;
}


/* sub_080296B4 @ 0x080296B4 */

void sub_080296B4(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}


/* sub_080296C0 @ 0x080296C0 */

void sub_080296C0(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iStack_18;
  int iStack_14;
  
  uVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(ushort *)((int)param_2 + 0x12) = uVar1;
  if (uVar1 < 0x18) {
    uVar2 = (uint)uVar1 << 0x15;
    *(char *)((int)param_2 + 0x11) = (char)(uVar2 >> 0x18);
    if (uVar2 >> 0x18 != 0) {
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
      iStack_18 = param_2[0x68] + *(int *)(&gUnknown_0875021C + *(int *)(param_1 + 4) * 8) * 0x100;
      iStack_14 = param_2[0x69] + *(int *)(&DAT_08750220 + *(int *)(param_1 + 4) * 8) * 0x100;
      iVar3 = __call_via_r2(param_2,&iStack_18,*(int *)(*param_2 + 0x54) + *param_2);
      if (iVar3 == 0) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
      else {
        param_2[0x68] = iStack_18;
        param_2[0x69] = iStack_14;
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    }
  }
  else {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}


/* sub_08029778 @ 0x08029778 */

void sub_08029778(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_r5;
  undefined *local_20;
  int *local_1c;
  int local_18;
  
  iVar3 = 0;
  local_1c = (int *)0x0;
  local_18 = DAT_03001c34;
  local_20 = &_0804AE70;
  if (param_2 != 0) {
    iVar3 = param_2 + 0x18c;
  }
  sub_0801599C(&local_20,iVar3);
  cVar1 = *(char *)(DAT_03001c34 + 0x10);
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    if (*(int *)(param_2 + 0x1a0) < *(int *)(DAT_03001c34 + 0x1a0)) {
      unaff_r5 = 2;
    }
    else {
      unaff_r5 = 3;
    }
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    if (*(int *)(param_2 + 0x1a4) < *(int *)(DAT_03001c34 + 0x1a4)) {
      unaff_r5 = 1;
    }
    else {
      unaff_r5 = 0;
    }
  }
  puVar2 = (undefined4 *)sub_0803D5B8(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804A758;
    puVar2[1] = unaff_r5;
  }
  *(undefined4 **)(param_1 + 4) = puVar2;
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  local_20 = &_08049ACC;
  if (local_1c != (int *)0x0) {
    __call_via_r2(local_1c,1,*(int *)*local_1c + *local_1c);
  }
  return;
}


/* sub_08029824 @ 0x08029824 */

bool sub_08029824(int param_1,int param_2)

{
  return *(int *)(param_2 + 0x14) != *(int *)(param_1 + 4);
}


/* sub_08029836 @ 0x08029836 */

void sub_08029836(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080497B4;
  }
  return;
}


/* sub_08029860 @ 0x08029860 */

void sub_08029860(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x1a4) - *(int *)(DAT_03001c34 + 0x1a4);
  iVar2 = *(int *)(param_2 + 0x1a0) - *(int *)(DAT_03001c34 + 0x1a0);
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = iVar1;
  sub_0800DE60(param_1,param_2,iVar1,iVar1,iVar2,iVar1,iVar2);
  *(undefined1 *)(param_2 + 8) = 0x37;
  return;
}


/* sub_080298A2 @ 0x080298A2 */

void sub_080298A2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_03001c34 + 0x1a4);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_2 + 0x1a0) = *(int *)(DAT_03001c34 + 0x1a0) + *(int *)(param_1 + 8);
  *(int *)(param_2 + 0x1a4) = iVar2 + iVar1;
  return;
}


/* sub_080298D8 @ 0x080298D8 */

void sub_080298D8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 3;
    *puVar1 = &_0804C314;
  }
  sub_0800ECDA(param_2,1);
  sub_0800ED18(param_2,puVar1);
  return;
}


/* sub_08029902 @ 0x08029902 */

undefined4 sub_08029902(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_10;
  
  piVar1 = DAT_03001b94;
  if ((DAT_03001b94 == (int *)0x0) || (DAT_03001b94[0x73] == 0)) {
    uVar2 = 1;
  }
  else {
    iVar3 = __call_via_r1(DAT_03001b94,*(int *)(*DAT_03001b94 + 0x80) + *DAT_03001b94);
    if (*(short *)(iVar3 + 0x16) < 1) {
      uVar2 = 1;
    }
    else {
      if ((DAT_03000f94 & 0x3f) == 0) {
        uStack_10 = 0x400;
        uStack_18 = 0;
        iVar3 = *piVar1;
        __call_via_r2(piVar1,auStack_28,*(int *)(iVar3 + 0x5c) + iVar3);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* sub_0802995E @ 0x0802995E */

undefined4 * sub_0802995E(void)

{
  return &DAT_03002fe8;
}


/* sub_08029978 @ 0x08029978 */

undefined4 sub_08029978(undefined4 param_1,int param_2)

{
  sub_0800A95A(param_2 + 0x22c);
  return 0;
}


/* sub_08029988 @ 0x08029988 */

void sub_08029988(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_2 + 0x22c);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(*piVar1 + 0xc);
    __call_via_r2(piVar1,param_2,iVar2 + *piVar1,iVar2,param_4);
  }
  return;
}


/* sub_080299A2 @ 0x080299A2 */

undefined4 * sub_080299A2(void)

{
  return &DAT_03002fec;
}


/* sub_080299AC @ 0x080299AC */

void sub_080299AC(undefined4 param_1,undefined4 param_2)

{
  sub_0800ED18(param_2,&DAT_03002ff0);
  sub_0800EDA6(param_2);
  return;
}


/* sub_080299C0 @ 0x080299C0 */

undefined4 sub_080299C0(void)

{
  return 1;
}


/* sub_080299C4 @ 0x080299C4 */

undefined4 * sub_080299C4(void)

{
  return &DAT_03002ff4;
}


/* sub_080299CA @ 0x080299CA */

undefined4 sub_080299CA(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800ED18(param_2,&DAT_03002ff0,param_3,param_4,param_4);
  return 1;
}


/* sub_080299DC @ 0x080299DC */

void sub_080299DC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804AABC;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}


/* sub_080299FE @ 0x080299FE */

undefined4 sub_080299FE(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(*param_2 + 0x80);
  iVar2 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
  iVar2 = iVar2 * iVar3 >> 0x10;
  if (param_2[0xa3] + iVar2 * -0x400 < 0 == SBORROW4(param_2[0xa3],iVar2 * 0x400)) {
    uVar1 = 0;
  }
  else {
    uVar1 = __call_via_r3(*(int *)(param_1 + 0x10),param_2,param_3,
                          *(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  }
  return uVar1;
}


/* sub_08029A40 @ 0x08029A40 */

undefined4 sub_08029A40(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0xc) == (*(char **)(param_3 + 8))[1]) ||
     (*(char *)(param_1 + 0xc) == **(char **)(param_3 + 8))) {
    uVar1 = __call_via_r3();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08029A60 @ 0x08029A60 */

undefined4 sub_08029A60(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar2 = DAT_03001b94;
  if (DAT_03001b94 == 0) {
    uVar3 = 0;
  }
  else if (*(byte *)(param_2 + 0x10) == (*(byte *)(DAT_03001b94 + 0x10) ^ 1)) {
    iVar4 = **(int **)(DAT_03001b94 + 0x14);
    iVar4 = __call_via_r2(*(int **)(DAT_03001b94 + 0x14),DAT_03001b94,*(int *)(iVar4 + 0x1c) + iVar4
                         );
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      sub_0800FE78(&iStack_1c,iVar2);
      sub_0800FE78(&iStack_2c,param_2);
      cVar1 = *(char *)(iVar2 + 0x10);
      if (cVar1 == '\0') {
        iStack_1c = iStack_1c + -4;
        iStack_14 = iStack_14 + 4;
        iStack_10 = iStack_10 + 0xf0;
      }
      else if (cVar1 == '\x01') {
        iStack_1c = iStack_1c + -4;
        iStack_14 = iStack_14 + 4;
        iStack_18 = iStack_18 + -0xf0;
      }
      else if (cVar1 == '\x02') {
        iStack_18 = iStack_18 + -4;
        iStack_10 = iStack_10 + 4;
        iStack_1c = iStack_1c + -0xf0;
      }
      else if (cVar1 == '\x03') {
        iStack_18 = iStack_18 + -4;
        iStack_10 = iStack_10 + 4;
        iStack_14 = iStack_14 + 0xf0;
      }
      if ((((iStack_2c < iStack_14) && (iStack_1c < iStack_24)) && (iStack_28 < iStack_10)) &&
         (iStack_18 < iStack_20)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* sub_08029B30 @ 0x08029B30 */

undefined4 * sub_08029B30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804B6B8;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08029B58 @ 0x08029B58 */

undefined4 sub_08029B58(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if (DAT_03001b94 == 0) {
    uVar1 = 0;
  }
  else if (*(undefined4 **)(DAT_03001b94 + 0x14) == &DAT_03001b50) {
    sub_0800FE78(&iStack_18);
    sub_0800FE78(&iStack_28,param_2);
    if ((((iStack_28 + -8 < iStack_10) && (iStack_18 < iStack_20 + 8)) &&
        (iStack_24 + -8 < iStack_c)) && (iStack_14 < iStack_1c + 8)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* sub_08029BB6 @ 0x08029BB6 */

undefined4 * sub_08029BB6(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804B120;
    puVar2[1] = uVar1;
  }
  return puVar2;
}


/* sub_08029BE0 @ 0x08029BE0 */

undefined4 sub_08029BE0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar1 = 0;
  if (DAT_03001b94 != 0) {
    sub_0800FDFA(&local_48);
    local_34 = local_44 + local_3c >> 1;
    local_38 = local_48 + local_40 >> 1;
    sub_0800FDFA(&local_30,param_2,local_3c,param_4,local_38,local_34);
    local_38 = local_38 - (local_30 + local_28 >> 1);
    local_34 = local_34 - (local_2c + local_24 >> 1);
    if (local_38 * local_38 + local_34 * local_34 <= *(int *)(param_1 + 0xc)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* sub_08029C64 @ 0x08029C64 */

void sub_08029C64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08049C28;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}


/* sub_08029C90 @ 0x08029C90 */

undefined4 sub_08029C90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar1 = 0;
  if (DAT_03001b94 != 0) {
    sub_0800FDFA(&local_48);
    local_34 = local_44 + local_3c >> 1;
    local_38 = local_48 + local_40 >> 1;
    sub_0800FDFA(&local_30,param_2,local_3c,param_4,local_38,local_34);
    local_38 = local_38 - (local_30 + local_28 >> 1);
    local_34 = local_34 - (local_2c + local_24 >> 1);
    if (local_38 * local_38 + local_34 * local_34 <= *(int *)(param_1 + 0xc)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* sub_08029D14 @ 0x08029D14 */

void sub_08029D14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_08049C40;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}


/* sub_08029D40 @ 0x08029D40 */

void sub_08029D40(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(byte *)(param_2 + 0xa4) ^ 1;
  iVar1 = sub_0803FACC(0x40);
  uVar3 = (uint)(*(int *)(param_1 + 0xc) * (iVar1 + 0x60)) >> 7;
  *(uint *)(((int)uVar2 >> 1 ^ 1U) * 4 + param_1 + 4) =
       uVar3 * *(int *)(&gUnknown_0875026C + uVar2 * 4);
  iVar1 = sub_0803FACC(0x8000);
  *(int *)(((int)uVar2 >> 1) * 4 + param_1 + 4) = (int)(uVar3 * (iVar1 + -0x4000)) >> 0xc;
  *(char *)(param_2 + 4) = (char)uVar2;
  __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2);
  return;
}


/* sub_08029DAE @ 0x08029DAE */

undefined4 sub_08029DAE(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  int *piStack_1c;
  int *piStack_18;
  
  iVar1 = __call_via_r2(param_2,9,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    sub_0800FDFA(auStack_2c,param_2);
    piStack_18 = param_2 + 0x68;
    piStack_1c = (int *)(param_1 + 4);
    *piStack_18 = *piStack_18 + *(int *)(param_1 + 4);
    param_2[0x69] = param_2[0x69] + *(int *)(param_1 + 8);
    sub_0800FDFA(auStack_3c,param_2);
    __call_via_r3(param_2,auStack_2c,1,*(int *)(*param_2 + 0x4c) + *param_2);
    iVar1 = __call_via_r2(param_2,auStack_3c,*(int *)(*param_2 + 0x50) + *param_2);
    if (iVar1 == 0) {
      *piStack_18 = *piStack_18 - *piStack_1c;
      piStack_18[1] = piStack_18[1] - *(int *)(param_1 + 8);
      __call_via_r3(param_2,auStack_2c,0,*(int *)(*param_2 + 0x4c) + *param_2);
    }
    else {
      __call_via_r3(param_2,auStack_3c,0,*(int *)(*param_2 + 0x4c) + *param_2);
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_08029E5C @ 0x08029E5C */

void sub_08029E5C(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C640;
    puVar1[3] = uVar2;
  }
  return;
}


