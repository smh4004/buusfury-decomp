/* Ghidra reference decompilation of code_0801F7D8 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0801F7D8 @ 0x0801F7D8 */

undefined4 sub_0801F7D8(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x114) == '\0') {
    param_2[1] = *(int *)(param_1 + 0x124) * 0xe + 0x2e;
    *param_2 = 0x12;
  }
  else if (*(char *)(param_1 + 0x114) == '\x01') {
    param_2[1] = *(int *)(param_1 + 0x128) * 0xe + 0x3c;
    *param_2 = 0x88;
  }
  return 1;
}


/* sub_0801F7F8 @ 0x0801F7F8 */

undefined4 sub_0801F7F8(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  return 1;
}


/* sub_0801F810 @ 0x0801F810 */

void sub_0801F810(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = (char)param_1[1];
  if (cVar1 == '\0') {
    sub_0803DCC4(param_2,0x54,
                 *(undefined4 *)
                  (&gUIStringPtrs +
                  (uint)*(ushort *)(&gEquipmentTable + (uint)*(byte *)((int)param_1 + 5) * 0x2c) * 4
                  ),&gEquipmentTable,param_4);
  }
  else if (cVar1 == '\x01') {
    if (*param_1 == 1) {
      sub_0803DADA(param_2,*(undefined4 *)
                            (&gUIStringPtrs +
                            (uint)*(ushort *)
                                   (&DAT_083bd2fa + (uint)*(byte *)((int)param_1 + 5) * 0x34) * 4));
    }
    else {
      sub_0803DC96(param_2,L"%s (%d)",
                   *(undefined4 *)
                    (&gUIStringPtrs +
                    (uint)*(ushort *)(&DAT_083bd2fa + (uint)*(byte *)((int)param_1 + 5) * 0x34) * 4)
                   ,*param_1);
    }
  }
  else if (cVar1 == '\x02') {
    sub_0803DC96(param_2,L"%s (%d)",L"Zenie",*param_1);
  }
  return;
}


/* sub_0801F882 @ 0x0801F882 */

void sub_0801F882(int param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x10) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x10) = 1;
  piVar2 = (int *)(param_1 + 300);
  piVar3 = (int *)(param_1 + 0xba0);
  if (*(char *)(param_1 + 0x114) == '\0') {
    *(uint *)(*(int *)(param_1 + 0x118) + 8) =
         (uint)(*(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x124) != 0);
    *(uint *)(*(int *)(param_1 + 0x11c) + 8) =
         (uint)(*(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x124) < *piVar2 + -1);
  }
  else if (*(char *)(param_1 + 0x114) == '\x01') {
    *(uint *)(*(int *)(param_1 + 0x118) + 8) = (uint)(*(int *)(param_1 + 0x128) != 0);
    *(uint *)(*(int *)(param_1 + 0x11c) + 8) = (uint)(*(int *)(param_1 + 0x128) < *piVar3 + -1);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x118) + 8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x11c) + 8) = 0;
  }
  sub_080051B0(param_2,0x75,0x37,0x70);
  param_2[3] = 2;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  *param_2 = 0;
  param_2[1] = 0xe;
  iVar4 = 0;
  *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
  do {
    iVar1 = *(int *)(param_1 + 0x120) + iVar4;
    if (*piVar2 <= iVar1) break;
    *(int *)(param_2 + 8) = iVar4 * 0xe + 0x31;
    *(undefined4 *)(param_2 + 4) = 0x16;
    sub_0801F810(piVar2 + iVar1 * 2 + 1,param_2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  *(undefined4 *)(param_2 + 8) = 0x31;
  *(undefined4 *)(param_2 + 4) = 0x8c;
  sub_0803DADA(param_2,&gUnknown_08058034);
  iVar4 = 0;
  do {
    if (*piVar3 <= iVar4) {
      return;
    }
    *(int *)(param_2 + 8) = iVar4 * 0xe + 0x3f;
    *(undefined4 *)(param_2 + 4) = 0x8c;
    sub_0801F810(piVar3 + iVar4 * 2 + 1,param_2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return;
}


/* sub_0801F99E @ 0x0801F99E */

void sub_0801F99E(undefined4 param_1)

{
  undefined1 auStack_40 [52];
  
  sub_0803F540(auStack_40,0xf0,0xa0);
  sub_08006718(param_1,auStack_40,0x4f,1);
  sub_0801F882(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_0801F9D8 @ 0x0801F9D8 */

undefined4 sub_0801F9D8(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_2[param_3 * 2 + 1];
  param_2[param_3 * 2 + 1] = iVar1 - param_4;
  if (iVar1 - param_4 == 0) {
    iVar1 = *param_2;
    *param_2 = iVar1 + -1;
    iVar1 = (iVar1 + -1) - param_3;
    if (iVar1 != 0) {
      sub_08049138((int)(param_2 + param_3 * 2 + 1),(int)(param_2 + param_3 * 2 + 3),iVar1 * 8);
    }
  }
  return 1;
}


/* sub_0801F9F2 @ 0x0801F9F2 */

undefined4 sub_0801F9F2(int param_1,int param_2)

{
  int unaff_r4;
  
  sub_08049138(param_1,unaff_r4 + 0xc,param_2 << 3);
  return 1;
}


/* sub_0801FA00 @ 0x0801FA00 */

void sub_0801FA00(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int *a0;
  
  a0 = param_3 + param_4 * 2 + 1;
  iVar1 = sub_0801F3DC(param_1,param_2,a0,param_5);
  if ((iVar1 != 0) && (iVar1 = *a0, *a0 = iVar1 - param_5, iVar1 - param_5 == 0)) {
    iVar1 = *param_3;
    *param_3 = iVar1 + -1;
    iVar1 = (iVar1 + -1) - param_4;
    if (iVar1 != 0) {
      sub_08049138((int)a0,(int)(param_3 + param_4 * 2 + 3),iVar1 * 8);
    }
  }
  return;
}


/* sub_0801FA3C @ 0x0801FA3C */

undefined4 sub_0801FA3C(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xba0);
  if (param_3 == 0) {
    iVar1 = *(int *)(param_1 + 0x128);
    if (piVar3[iVar1 * 2 + 1] == 1) {
      iVar1 = 1;
    }
    else {
      puVar2 = (undefined4 *)sub_0803D5B8(0x138);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_0804920C;
        puVar2[1] = 0;
        puVar2[0x43] = 0;
        puVar2[0x42] = 0;
        puVar2[0x44] = 0;
        *puVar2 = &_0804BC04;
        *(short *)(puVar2 + 0x45) = (short)piVar3[iVar1 * 2 + 1];
        *(undefined2 *)((int)puVar2 + 0x116) = *(undefined2 *)((int)piVar3 + iVar1 * 8 + 6);
        *(short *)(puVar2 + 0x46) = (short)piVar3[iVar1 * 2 + 2];
      }
      iVar1 = sub_0803D8A0();
    }
    if (0 < iVar1) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
      sub_0801FA00(param_1,param_1 + 300,piVar3,*(undefined4 *)(param_1 + 0x128),iVar1);
      iVar1 = *(int *)(param_1 + 0x128);
      if (*piVar3 <= iVar1) {
        if (iVar1 == 0) {
          *(undefined1 *)(param_1 + 0x114) = 0;
        }
        else {
          *(int *)(param_1 + 0x128) = iVar1 + -1;
        }
      }
    }
  }
  else if (param_3 == 2) {
    if (*(int *)(param_1 + 0x128) != 0) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else if (param_3 == 3) {
    if (*(int *)(param_1 + 0x128) < *piVar3 + -1) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}


/* sub_0801FAF0 @ 0x0801FAF0 */

undefined4 sub_0801FAF0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  undefined4 uStack00000000;
  
  uStack00000000 = param_3;
  sub_0801FA00(unaff_r5,param_2 + 300,unaff_r6,*(undefined4 *)(unaff_r4 + 0x28));
  iVar1 = *(int *)(unaff_r4 + 0x28);
  if (*unaff_r6 <= iVar1) {
    if (iVar1 == 0) {
      *(undefined1 *)(unaff_r5 + 0x114) = 0;
    }
    else {
      *(int *)(unaff_r4 + 0x28) = iVar1 + -1;
    }
  }
  return 0;
}


/* sub_0801FB70 @ 0x0801FB70 */

undefined4 sub_0801FB70(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_2[param_3 * 2 + 1];
  param_2[param_3 * 2 + 1] = iVar1 - param_4;
  if (iVar1 - param_4 == 0) {
    iVar1 = *param_2;
    *param_2 = iVar1 + -1;
    iVar1 = (iVar1 + -1) - param_3;
    if (iVar1 != 0) {
      sub_08049138((int)(param_2 + param_3 * 2 + 1),(int)(param_2 + param_3 * 2 + 3),iVar1 * 8);
    }
  }
  return 1;
}


/* sub_0801FB98 @ 0x0801FB98 */

int sub_0801FB98(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_3 + 4) != '\0') {
    iVar1 = 0;
    if (0 < *param_2) {
      do {
        if (((char)param_2[iVar1 * 2 + 2] == *(char *)(param_3 + 4)) &&
           (*(char *)((int)param_2 + iVar1 * 8 + 9) == *(char *)(param_3 + 5))) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *param_2);
    }
  }
  return -1;
}


/* sub_0801FBD0 @ 0x0801FBD0 */

undefined4 sub_0801FBD0(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_3 + 4) == '\0') {
      iVar2 = -1;
    }
    else {
      iVar2 = 0;
      if (0 < *param_2) {
        do {
          if (((char)param_2[iVar2 * 2 + 2] == *(char *)(param_3 + 4)) &&
             (*(char *)((int)param_2 + iVar2 * 8 + 9) == *(char *)(param_3 + 5))) goto _0801FC0C;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *param_2);
      }
      iVar2 = -1;
    }
_0801FC0C:
    if (iVar2 < 0) {
      iVar2 = *param_2;
      if (iVar2 == 5) {
        uVar1 = 0;
      }
      else {
        *param_2 = iVar2 + 1;
        param_2[iVar2 * 2 + 2] = *(int *)(param_3 + 4);
        param_2[iVar2 * 2 + 1] = param_4;
        uVar1 = 1;
      }
    }
    else {
      param_2[iVar2 * 2 + 1] = param_2[iVar2 * 2 + 1] + param_4;
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* sub_0801FBF6 @ 0x0801FBF6 */

undefined4 sub_0801FBF6(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  
  while( true ) {
    if ((unaff_r5 == unaff_r7) && (*(char *)((int)unaff_r4 + 5) == *(char *)(param_3 + 5)))
    goto _0801FC0C;
    param_1 = param_1 + 1;
    if (unaff_r6 <= param_1) break;
    unaff_r4 = param_2 + param_1 * 2 + 1;
    unaff_r5 = (uint)*(byte *)(param_2 + param_1 * 2 + 2);
  }
  param_1 = -1;
_0801FC0C:
  if (param_1 < 0) {
    iVar2 = *param_2;
    if (iVar2 == 5) {
      uVar1 = 0;
    }
    else {
      *param_2 = iVar2 + 1;
      param_2[iVar2 * 2 + 2] = *(int *)(param_3 + 4);
      param_2[iVar2 * 2 + 1] = param_4;
      uVar1 = 1;
    }
  }
  else {
    param_2[param_1 * 2 + 1] = param_2[param_1 * 2 + 1] + param_4;
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_0801FC3E @ 0x0801FC3E */

void sub_0801FC3E(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int *a0;
  
  a0 = param_3 + param_4 * 2 + 1;
  iVar1 = sub_0801FBD0(param_1,param_2,a0,param_5);
  if ((iVar1 != 0) && (iVar1 = *a0, *a0 = iVar1 - param_5, iVar1 - param_5 == 0)) {
    iVar1 = *param_3;
    *param_3 = iVar1 + -1;
    iVar1 = (iVar1 + -1) - param_4;
    if (iVar1 != 0) {
      sub_08049138((int)a0,(int)(param_3 + param_4 * 2 + 3),iVar1 * 8);
    }
  }
  return;
}


/* sub_0801FC7A @ 0x0801FC7A */

undefined4 sub_0801FC7A(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_3 == 0) {
    piVar4 = (int *)(param_1 + 300);
    piVar5 = piVar4 + (*(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x124)) * 2 + 1;
    if (*piVar5 == 1) {
      iVar1 = 1;
    }
    else {
      puVar2 = (undefined4 *)sub_0803D5B8(0x138);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_0804920C;
        puVar2[1] = 0;
        puVar2[0x43] = 0;
        puVar2[0x42] = 0;
        puVar2[0x44] = 0;
        *puVar2 = &_0804BC04;
        *(short *)(puVar2 + 0x45) = (short)*piVar5;
        *(undefined2 *)((int)puVar2 + 0x116) = *(undefined2 *)((int)piVar5 + 2);
        *(short *)(puVar2 + 0x46) = (short)piVar5[1];
      }
      iVar1 = sub_0803D8A0();
    }
    if (0 < iVar1) {
      sub_0801FC3E(param_1,param_1 + 0xba0,piVar4,
                   *(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x124),iVar1);
      iVar1 = *(int *)(param_1 + 0x120);
      iVar3 = *(int *)(param_1 + 0x124);
      if (*piVar4 <= iVar1 + iVar3) {
        if (iVar3 == 0) {
          if (iVar1 == 0) {
            *(undefined1 *)(param_1 + 0x114) = 1;
          }
          else {
            *(int *)(param_1 + 0x120) = iVar1 + -1;
          }
        }
        else {
          *(int *)(param_1 + 0x124) = iVar3 + -1;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else if (param_3 == 2) {
    if (*(int *)(param_1 + 0x124) == 0) {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
    }
    else {
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + -1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else if (param_3 == 3) {
    if (*(int *)(param_1 + 0x124) < 5) {
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    }
    else {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}


/* sub_0801FD00 @ 0x0801FD00 */

undefined4 sub_0801FD00(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  undefined4 unaff_r7;
  
  sub_0801FC3E(unaff_r5,unaff_r5 + 0xba0,unaff_r6,param_1 + *(int *)(unaff_r4 + 0x24));
  iVar1 = *(int *)(unaff_r4 + 0x20);
  iVar2 = *(int *)(unaff_r4 + 0x24);
  if (*unaff_r6 <= iVar1 + iVar2) {
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        *(undefined1 *)(unaff_r5 + 0x114) = 1;
      }
      else {
        *(int *)(unaff_r4 + 0x20) = iVar1 + -1;
      }
    }
    else {
      *(int *)(unaff_r4 + 0x24) = iVar2 + -1;
    }
  }
  *(undefined4 *)(unaff_r4 + 0x10) = unaff_r7;
  return 0;
}


/* sub_0801FD60 @ 0x0801FD60 */

undefined4 sub_0801FD60(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 1) {
    puVar1 = (undefined4 *)sub_0803D5B8(0x2fc);
    if (puVar1 != (undefined4 *)0x0) {
      sub_08005460(puVar1,0x5e,0xd,1);
      *puVar1 = &_08049B2C;
      puVar1[0xbe] = 0;
    }
    sub_0803D850(puVar1);
    uVar3 = 1;
  }
  else {
    if (param_3 == 7) {
      puVar1 = (undefined4 *)sub_0803D5B8(0x11c);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0;
        *puVar1 = &_0804920C;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        *(undefined1 *)(puVar1 + 0x45) = 0;
        *puVar1 = &_0804CAD4;
        puVar1[0x46] = param_1;
      }
      iVar2 = sub_0803D8A0();
      if (iVar2 == 2) {
        puVar1 = (undefined4 *)sub_0803D5B8(0x120);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = 0;
          *puVar1 = &_0804920C;
          puVar1[0x43] = 0;
          puVar1[0x42] = 0;
          puVar1[0x44] = 0;
          *puVar1 = &_0804B604;
          puVar1[0x45] = param_1;
        }
        iVar2 = sub_0803D8A0();
        if (iVar2 == 2) {
          sub_0801F556(param_1);
          sub_080502FC(0,7);
          sub_08040160();
          puVar1 = (undefined4 *)sub_0803D5B8(0x118);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = &_0804920C;
            puVar1[0x43] = 0;
            puVar1[0x42] = 0;
            puVar1[0x44] = 0;
            *puVar1 = &_08049B5C;
            puVar1[0x45] = 0;
          }
          sub_0803D8A0();
          puVar1 = (undefined4 *)sub_0803D5B8(0x114);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = &_0804920C;
            puVar1[0x43] = 0;
            puVar1[0x42] = 0;
            puVar1[0x44] = 0;
            *puVar1 = &_0804B5AC;
          }
          sub_0803D850();
          return 1;
        }
      }
      sub_08050414(0);
      sub_08040160();
    }
    if (*(char *)(param_1 + 0x114) == '\0') {
      uVar3 = sub_0801FC7A(param_1,0,param_3);
    }
    else if (*(char *)(param_1 + 0x114) == '\x01') {
      uVar3 = sub_0801FA3C(param_1,0,param_3);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* sub_0801FDF6 @ 0x0801FDF6 */

undefined4 sub_0801FDF6(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  
  *(undefined4 *)(param_2 + 8) = unaff_r6;
  *(undefined4 *)(param_2 + 0x10) = unaff_r6;
  *param_1 = &_08049B5C;
  *(undefined4 *)(param_2 + 0x14) = unaff_r6;
  sub_0803D8A0();
  puVar1 = (undefined4 *)sub_0803D5B8(0x114);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = unaff_r6;
    *puVar1 = unaff_r7;
    puVar1[0x43] = unaff_r6;
    puVar1[0x42] = unaff_r6;
    puVar1[0x44] = unaff_r6;
    *puVar1 = &_0804B5AC;
  }
  sub_0803D850();
  return 1;
}


/* sub_0801FDFE @ 0x0801FDFE */

undefined4 sub_0801FDFE(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  
  *(undefined4 *)(param_2 + 0x14) = unaff_r6;
  sub_0803D8A0();
  puVar1 = (undefined4 *)sub_0803D5B8(0x114);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = unaff_r6;
    *puVar1 = unaff_r7;
    puVar1[0x43] = unaff_r6;
    puVar1[0x42] = unaff_r6;
    puVar1[0x44] = unaff_r6;
    *puVar1 = &_0804B5AC;
  }
  sub_0803D850();
  return 1;
}


/* sub_0801FE00 @ 0x0801FE00 */

undefined4 sub_0801FE00(void)

{
  undefined4 *puVar1;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  
  sub_0803D8A0();
  puVar1 = (undefined4 *)sub_0803D5B8(0x114);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = unaff_r6;
    *puVar1 = unaff_r7;
    puVar1[0x43] = unaff_r6;
    puVar1[0x42] = unaff_r6;
    puVar1[0x44] = unaff_r6;
    *puVar1 = &_0804B5AC;
  }
  sub_0803D850();
  return 1;
}


/* sub_0801FE0C @ 0x0801FE0C */

undefined4 sub_0801FE0C(undefined4 *param_1)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = unaff_r6;
    *param_1 = unaff_r7;
    param_1[0x43] = unaff_r6;
    param_1[0x42] = unaff_r6;
    param_1[0x44] = unaff_r6;
    *param_1 = &_0804B5AC;
  }
  sub_0803D850();
  return 1;
}


/* sub_0801FE92 @ 0x0801FE92 */

undefined4 sub_0801FE92(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x114) == '\0') {
    if ((0 < *(int *)(param_1 + 0xba0)) && ((int)((uint)DAT_03003304 << 0x1b) < 0)) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
      *(undefined1 *)(param_1 + 0x114) = 1;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  else if (((*(char *)(param_1 + 0x114) == '\x01') && (0 < *(int *)(param_1 + 300))) &&
          ((int)((uint)DAT_03003304 << 0x1a) < 0)) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
    *(undefined1 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}


/* sub_0801FEF6 @ 0x0801FEF6 */

undefined4 sub_0801FEF6(void)

{
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  
  sub_0803E378();
  *(undefined1 *)(unaff_r4 + 4) = 1;
  *(undefined4 *)(unaff_r5 + 0x10) = unaff_r6;
  return 0;
}


/* sub_0801FEFC @ 0x0801FEFC */

undefined4 sub_0801FEFC(undefined1 param_1)

{
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  
  *(undefined1 *)(unaff_r4 + 4) = param_1;
  *(undefined4 *)(unaff_r5 + 0x10) = unaff_r6;
  return 0;
}


/* sub_0801FF02 @ 0x0801FF02 */

undefined4 sub_0801FF02(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_03002f50 != 0) {
    DAT_03002f50 = 0;
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    return 0;
  }
  uVar2 = sub_080067F4();
  return uVar2;
}


/* sub_0801FF6C @ 0x0801FF6C */

void sub_0801FF6C(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (((param_3 != 0) && (param_3 != 1)) && (param_3 != 2)) {
    *(undefined4 *)(param_1 + 300) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 300) + 1;
  *(int *)(param_1 + 300) = iVar1;
  if (0x14 < iVar1) {
    DAT_03002f50 = 1;
  }
  return;
}


/* sub_0801FF98 @ 0x0801FF98 */

void sub_0801FF98(int param_1)

{
  ushort uVar1;
  
  sub_08005740();
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x1040;
  if (*(int *)(param_1 + 0x2f8) != 0) {
    sub_080504B4(0);
    sub_08040160();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2b4) + 8) =
       *(undefined4 *)(param_1 + 300 + *(int *)(param_1 + 0x10c) * 0x80);
  return;
}


/* sub_0801FFE0 @ 0x0801FFE0 */

void sub_0801FFE0(void)

{
  ushort uVar1;
  
  sub_08005864();
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xefbf;
  return;
}


/* sub_0801FFF6 @ 0x0801FFF6 */

undefined4 sub_0801FFF6(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    if (param_1[param_1[0x43] * 0x20 + 0x4b] != 0) {
      __call_via_r1(param_1,*(int *)(*param_1 + 0x24) + *param_1);
      sub_08009680(&DAT_030019a4);
      DAT_03001910 = param_1[0x43];
      sub_080048A0(&DAT_03001068);
      if (param_1[0xbe] == 0) {
        sub_0801F506();
        sub_0803D850();
      }
      else {
        iVar1 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)sub_0803D5B8(0x13c);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = &_0804920C;
            puVar2[1] = 0;
            puVar2[0x43] = 0;
            puVar2[0x42] = 0;
            puVar2[0x44] = 0;
            *puVar2 = &_0804A3BC;
          }
          sub_0803D850();
          return 1;
        }
        puVar2 = (undefined4 *)sub_0803D5B8(0x11c);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = &_0804920C;
          puVar2[1] = 0;
          puVar2[0x43] = 0;
          puVar2[0x42] = 0;
          puVar2[0x44] = 0;
          *(undefined1 *)(puVar2 + 0x45) = 0;
          *puVar2 = &_0804B550;
          puVar2[0x46] = 0;
        }
        iVar1 = sub_0803D8A0();
        if (iVar1 == 2) {
          puVar2 = (undefined4 *)sub_0803D5B8(0xf6c);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = &_0804920C;
            puVar2[1] = 0;
            puVar2[0x43] = 0;
            puVar2[0x42] = 0;
            puVar2[0x44] = 0;
            *puVar2 = &_0804CAA8;
            puVar2[0x65] = 0;
            puVar2[0x161] = 0;
            sub_08004838(puVar2 + 0x17d);
            sub_08046FF4((int)puVar2 + 0xeca,(int)puVar2 + 0xed6,2,0x8050869);
            sub_08046FF4(puVar2 + 0x3b6,puVar2 + 0x3ba,4,0x8050535);
            sub_08046FF4((int)puVar2 + 0xf32,(int)puVar2 + 0xf3e,2,0x8050869);
            sub_08046FF4(puVar2 + 0x3d0,puVar2 + 0x3d4,4,0x8050535);
          }
          sub_0803D850(puVar2);
          return 1;
        }
        sub_080504B4(0);
        sub_08040160();
      }
    }
  }
  else {
    if (param_3 == 1) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
      puVar2 = (undefined4 *)sub_0803D5B8(0x114);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_0804920C;
        puVar2[1] = 0;
        puVar2[0x43] = 0;
        puVar2[0x42] = 0;
        puVar2[0x44] = 0;
        *puVar2 = &_0804B5AC;
      }
      sub_0803D850();
      return 1;
    }
    if (param_3 == 2) {
      if (param_1[0x43] != 0) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
        iVar1 = param_1[0x43];
        param_1[0x43] = iVar1 + -1;
        *(int *)(param_1[0xad] + 8) = param_1[(iVar1 + -1) * 0x20 + 0x4b];
      }
      param_1[0x47] = -1;
      param_1[0x44] = 0;
    }
    else if (param_3 == 3) {
      if (param_1[0x43] < 2) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
        iVar1 = param_1[0x43];
        param_1[0x43] = iVar1 + 1;
        *(int *)(param_1[0xad] + 8) = param_1[(iVar1 + 1) * 0x20 + 0x4b];
      }
      param_1[0x47] = -1;
      param_1[0x44] = 0;
    }
  }
  return 0;
}


/* sub_0801FFFA @ 0x0801FFFA */

undefined4 sub_0801FFFA(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *unaff_r5;
  
  param_1 = param_1 + 300;
  if (param_3 == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    if (*(int *)(param_1 + unaff_r5[0x43] * 0x80) != 0) {
      __call_via_r1(unaff_r5,*(int *)(*unaff_r5 + 0x24) + *unaff_r5);
      sub_08009680(&DAT_030019a4);
      DAT_03001910 = unaff_r5[0x43];
      sub_080048A0(&DAT_03001068);
      if (unaff_r5[0xbe] == 0) {
        sub_0801F506();
        sub_0803D850();
      }
      else {
        iVar1 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)sub_0803D5B8(0x13c);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = &_0804920C;
            puVar2[1] = 0;
            puVar2[0x43] = 0;
            puVar2[0x42] = 0;
            puVar2[0x44] = 0;
            *puVar2 = &_0804A3BC;
          }
          sub_0803D850();
          return 1;
        }
        puVar2 = (undefined4 *)sub_0803D5B8(0x11c);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = &_0804920C;
          puVar2[1] = 0;
          puVar2[0x43] = 0;
          puVar2[0x42] = 0;
          puVar2[0x44] = 0;
          *(undefined1 *)(puVar2 + 0x45) = 0;
          *puVar2 = &_0804B550;
          puVar2[0x46] = 0;
        }
        iVar1 = sub_0803D8A0();
        if (iVar1 == 2) {
          puVar2 = (undefined4 *)sub_0803D5B8(0xf6c);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = &_0804920C;
            puVar2[1] = 0;
            puVar2[0x43] = 0;
            puVar2[0x42] = 0;
            puVar2[0x44] = 0;
            *puVar2 = &_0804CAA8;
            puVar2[0x65] = 0;
            puVar2[0x161] = 0;
            sub_08004838(puVar2 + 0x17d);
            sub_08046FF4((int)puVar2 + 0xeca,(int)puVar2 + 0xed6,2,0x8050869);
            sub_08046FF4(puVar2 + 0x3b6,puVar2 + 0x3ba,4,0x8050535);
            sub_08046FF4((int)puVar2 + 0xf32,(int)puVar2 + 0xf3e,2,0x8050869);
            sub_08046FF4(puVar2 + 0x3d0,puVar2 + 0x3d4,4,0x8050535);
          }
          sub_0803D850(puVar2);
          return 1;
        }
        sub_080504B4(0);
        sub_08040160();
      }
    }
  }
  else {
    if (param_3 == 1) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
      puVar2 = (undefined4 *)sub_0803D5B8(0x114);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_0804920C;
        puVar2[1] = 0;
        puVar2[0x43] = 0;
        puVar2[0x42] = 0;
        puVar2[0x44] = 0;
        *puVar2 = &_0804B5AC;
      }
      sub_0803D850();
      return 1;
    }
    if (param_3 == 2) {
      if (unaff_r5[0x43] != 0) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
        iVar1 = unaff_r5[0x43];
        unaff_r5[0x43] = iVar1 + -1;
        *(undefined4 *)(unaff_r5[0xad] + 8) = *(undefined4 *)(param_1 + (iVar1 + -1) * 0x80);
      }
      unaff_r5[0x47] = -1;
      unaff_r5[0x44] = 0;
    }
    else if (param_3 == 3) {
      if (unaff_r5[0x43] < 2) {
        sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
        iVar1 = unaff_r5[0x43];
        unaff_r5[0x43] = iVar1 + 1;
        *(undefined4 *)(unaff_r5[0xad] + 8) = *(undefined4 *)(param_1 + (iVar1 + 1) * 0x80);
      }
      unaff_r5[0x47] = -1;
      unaff_r5[0x44] = 0;
    }
  }
  return 0;
}


/* sub_08020002 @ 0x08020002 */

undefined4 sub_08020002(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *unaff_r5;
  int unaff_r6;
  int iVar3;
  
  param_2 = param_2 + param_1;
  iVar3 = unaff_r6 + 300;
  if (param_3 == 0) {
    sub_0803E378(param_2,&gUnknown_08319488,0x40,0);
    if (*(int *)(iVar3 + unaff_r5[0x43] * 0x80) != 0) {
      __call_via_r1(unaff_r5,*(int *)(*unaff_r5 + 0x24) + *unaff_r5);
      sub_08009680(&DAT_030019a4);
      DAT_03001910 = unaff_r5[0x43];
      sub_080048A0(&DAT_03001068);
      if (unaff_r5[0xbe] == 0) {
        sub_0801F506();
        sub_0803D850();
      }
      else {
        iVar3 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x24) + *DAT_03004a8c);
        if (iVar3 != 0) {
          puVar2 = (undefined4 *)sub_0803D5B8(0x13c);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = &_0804920C;
            puVar2[1] = 0;
            puVar2[0x43] = 0;
            puVar2[0x42] = 0;
            puVar2[0x44] = 0;
            *puVar2 = &_0804A3BC;
          }
          sub_0803D850();
          return 1;
        }
        puVar2 = (undefined4 *)sub_0803D5B8(0x11c);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = &_0804920C;
          puVar2[1] = 0;
          puVar2[0x43] = 0;
          puVar2[0x42] = 0;
          puVar2[0x44] = 0;
          *(undefined1 *)(puVar2 + 0x45) = 0;
          *puVar2 = &_0804B550;
          puVar2[0x46] = 0;
        }
        iVar3 = sub_0803D8A0();
        if (iVar3 == 2) {
          puVar2 = (undefined4 *)sub_0803D5B8(0xf6c);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = &_0804920C;
            puVar2[1] = 0;
            puVar2[0x43] = 0;
            puVar2[0x42] = 0;
            puVar2[0x44] = 0;
            *puVar2 = &_0804CAA8;
            puVar2[0x65] = 0;
            puVar2[0x161] = 0;
            sub_08004838(puVar2 + 0x17d);
            sub_08046FF4((int)puVar2 + 0xeca,(int)puVar2 + 0xed6,2,0x8050869);
            sub_08046FF4(puVar2 + 0x3b6,puVar2 + 0x3ba,4,0x8050535);
            sub_08046FF4((int)puVar2 + 0xf32,(int)puVar2 + 0xf3e,2,0x8050869);
            sub_08046FF4(puVar2 + 0x3d0,puVar2 + 0x3d4,4,0x8050535);
          }
          sub_0803D850(puVar2);
          return 1;
        }
        sub_080504B4(0);
        sub_08040160();
      }
    }
  }
  else {
    if (param_3 == 1) {
      sub_0803E378(param_2,&gUnknown_08319488,0x40,0);
      puVar2 = (undefined4 *)sub_0803D5B8(0x114);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_0804920C;
        puVar2[1] = 0;
        puVar2[0x43] = 0;
        puVar2[0x42] = 0;
        puVar2[0x44] = 0;
        *puVar2 = &_0804B5AC;
      }
      sub_0803D850();
      return 1;
    }
    if (param_3 == 2) {
      if (unaff_r5[0x43] != 0) {
        sub_0803E378(param_2,&gUnknown_0831947C,0x40,0);
        iVar1 = unaff_r5[0x43];
        unaff_r5[0x43] = iVar1 + -1;
        *(undefined4 *)(unaff_r5[0xad] + 8) = *(undefined4 *)(iVar3 + (iVar1 + -1) * 0x80);
      }
      unaff_r5[0x47] = -1;
      unaff_r5[0x44] = 0;
    }
    else if (param_3 == 3) {
      if (unaff_r5[0x43] < 2) {
        sub_0803E378(param_2,&gUnknown_0831947C,0x40,0);
        iVar1 = unaff_r5[0x43];
        unaff_r5[0x43] = iVar1 + 1;
        *(undefined4 *)(unaff_r5[0xad] + 8) = *(undefined4 *)(iVar3 + (iVar1 + 1) * 0x80);
      }
      unaff_r5[0x47] = -1;
      unaff_r5[0x44] = 0;
    }
  }
  return 0;
}


/* sub_080200F8 @ 0x080200F8 */

undefined4 sub_080200F8(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 unaff_r7;
  
  *(char *)(param_3 + 0x15 + (int)param_1) = (char)unaff_r7;
  *param_1 = &_0804B550;
  *(undefined4 *)(param_2 + 0x18) = unaff_r7;
  iVar1 = sub_0803D8A0();
  if (iVar1 == 2) {
    puVar2 = (undefined4 *)sub_0803D5B8(0xf6c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804920C;
      puVar2[1] = unaff_r7;
      puVar2[0x43] = unaff_r7;
      puVar2[0x42] = unaff_r7;
      puVar2[0x44] = unaff_r7;
      *puVar2 = &_0804CAA8;
      puVar2[0x65] = unaff_r7;
      puVar2[0x161] = unaff_r7;
      sub_08004838(puVar2 + 0x17d);
      sub_08046FF4((int)puVar2 + 0xeca,(int)puVar2 + 0xed6,2,0x8050869);
      sub_08046FF4(puVar2 + 0x3b6,puVar2 + 0x3ba,4,0x8050535);
      sub_08046FF4((int)puVar2 + 0xf32,(int)puVar2 + 0xf3e,2,0x8050869);
      sub_08046FF4(puVar2 + 0x3d0,puVar2 + 0x3d4,4,0x8050535);
    }
    sub_0803D850(puVar2);
    uVar3 = 1;
  }
  else {
    sub_080504B4(0);
    sub_08040160();
    uVar3 = 0;
  }
  return uVar3;
}


/* sub_08020102 @ 0x08020102 */

undefined4 sub_08020102(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 unaff_r7;
  
  *param_1 = &_0804B550;
  *(undefined4 *)(param_2 + 0x18) = unaff_r7;
  iVar1 = sub_0803D8A0();
  if (iVar1 == 2) {
    puVar2 = (undefined4 *)sub_0803D5B8(0xf6c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804920C;
      puVar2[1] = unaff_r7;
      puVar2[0x43] = unaff_r7;
      puVar2[0x42] = unaff_r7;
      puVar2[0x44] = unaff_r7;
      *puVar2 = &_0804CAA8;
      puVar2[0x65] = unaff_r7;
      puVar2[0x161] = unaff_r7;
      sub_08004838(puVar2 + 0x17d);
      sub_08046FF4((int)puVar2 + 0xeca,(int)puVar2 + 0xed6,2,0x8050869);
      sub_08046FF4(puVar2 + 0x3b6,puVar2 + 0x3ba,4,0x8050535);
      sub_08046FF4((int)puVar2 + 0xf32,(int)puVar2 + 0xf3e,2,0x8050869);
      sub_08046FF4(puVar2 + 0x3d0,puVar2 + 0x3d4,4,0x8050535);
    }
    sub_0803D850(puVar2);
    uVar3 = 1;
  }
  else {
    sub_080504B4(0);
    sub_08040160();
    uVar3 = 0;
  }
  return uVar3;
}


/* sub_080201FE @ 0x080201FE */

undefined4 sub_080201FE(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
    if ((*(int *)(*(int *)(param_1 + 0x10c) * 0x80 + param_1 + 300) != 0) &&
       (iVar1 = sub_08004C8C(), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0,param_4);
    if ((*(int *)(*(int *)(param_1 + 0x10c) * 0x80 + param_1 + 300) != 0) &&
       (iVar1 = sub_08004CE0(), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  return 0;
}


/* sub_08020206 @ 0x08020206 */

undefined4 sub_08020206(undefined4 param_1,int param_2)

{
  int iVar1;
  int unaff_r5;
  
  if ((int)((uint)*(ushort *)(param_2 + 4) << 0x1a) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    if ((*(int *)(*(int *)(unaff_r5 + 0x10c) * 0x80 + unaff_r5 + 300) != 0) &&
       (iVar1 = sub_08004C8C(), iVar1 != 0)) {
      *(undefined4 *)(unaff_r5 + 0x11c) = 0xffffffff;
      *(undefined4 *)(unaff_r5 + 0x110) = 0;
    }
  }
  if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    if ((*(int *)(*(int *)(unaff_r5 + 0x10c) * 0x80 + unaff_r5 + 300) != 0) &&
       (iVar1 = sub_08004CE0(), iVar1 != 0)) {
      *(undefined4 *)(unaff_r5 + 0x11c) = 0xffffffff;
      *(undefined4 *)(unaff_r5 + 0x110) = 0;
    }
  }
  return 0;
}


/* sub_080202C8 @ 0x080202C8 */

void sub_080202C8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2f8) != 0) {
    iVar2 = *(int *)(param_1 + 0x10c) * 0x80;
    if (*(int *)(param_1 + 300 + iVar2) != 0) {
      iVar2 = iVar2 + param_1 + 300;
      iVar3 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        do {
          iVar4 = *(int *)(iVar3 * 0xc + iVar2 + 0x18);
          if (iVar4 == *(int *)(iVar2 + 0x7c)) {
            piVar1 = *(int **)((*(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x128)) * 0x20 +
                               param_1 + iVar3 * 4 + 0x2b8);
            iVar2 = *piVar1;
            __call_via_r2(piVar1,1,*(int *)(iVar2 + 0x28) + iVar2,iVar4,param_4);
            return;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar2 + 0xc));
      }
    }
  }
  return;
}


/* sub_080202FC @ 0x080202FC */

void sub_080202FC(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  while( true ) {
    if (*(int *)((param_4 + param_2) * 4 + param_3 + 0xc) == unaff_r5) {
      piVar1 = *(int **)((unaff_r6 - *(int *)(unaff_r7 + 0x28)) * 0x20 + param_1 + param_2 * 4 +
                        0x2b8);
      iVar2 = *piVar1;
      __call_via_r2(piVar1,1,*(int *)(iVar2 + 0x28) + iVar2);
      return;
    }
    param_2 = param_2 + 1;
    if (unaff_r4 <= param_2) break;
    param_4 = param_2 * 2;
  }
  return;
}


/* sub_080202FE @ 0x080202FE */

void sub_080202FE(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  while( true ) {
    if (*(int *)(param_4 * 4 + param_3 + 0xc) == unaff_r5) {
      piVar1 = *(int **)((unaff_r6 - *(int *)(unaff_r7 + 0x28)) * 0x20 + param_1 + param_2 * 4 +
                        0x2b8);
      iVar2 = *piVar1;
      __call_via_r2(piVar1,1,*(int *)(iVar2 + 0x28) + iVar2);
      return;
    }
    param_2 = param_2 + 1;
    if (unaff_r4 <= param_2) break;
    param_4 = param_2 * 3;
  }
  return;
}


/* sub_08020300 @ 0x08020300 */

void sub_08020300(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  while( true ) {
    if (*(int *)(param_4 + param_3 + 0xc) == unaff_r5) {
      piVar1 = *(int **)((unaff_r6 - *(int *)(unaff_r7 + 0x28)) * 0x20 + param_1 + param_2 * 4 +
                        0x2b8);
      iVar2 = *piVar1;
      __call_via_r2(piVar1,1,*(int *)(iVar2 + 0x28) + iVar2);
      return;
    }
    param_2 = param_2 + 1;
    if (unaff_r4 <= param_2) break;
    param_4 = param_2 * 0xc;
  }
  return;
}


/* sub_08020308 @ 0x08020308 */

void sub_08020308(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r7;
  
  piVar1 = *(int **)((unaff_r6 - *(int *)(unaff_r7 + 0x28)) * 0x20 + param_1 + param_2 * 4 + 0x2b8);
  iVar2 = *piVar1;
  __call_via_r2(piVar1,1,*(int *)(iVar2 + 0x28) + iVar2);
  return;
}


/* sub_08020314 @ 0x08020314 */

void sub_08020314(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x2b8);
  __call_via_r2(*(int **)(param_1 + 0x2b8),1,*(int *)(iVar1 + 0x28) + iVar1);
  return;
}


/* sub_08020332 @ 0x08020332 */

undefined4 sub_08020332(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_03002f50 == 0) {
    iVar3 = sub_08004DC0(param_1 + 300);
    if (iVar3 == 0) {
      sub_080058AC(param_1);
      puVar1 = (undefined4 *)sub_0803D5B8(0x118);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804920C;
        puVar1[1] = 0;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        *puVar1 = &_0804BB48;
        *(undefined1 *)(puVar1 + 0x45) = 2;
      }
      sub_0803D8A0();
      puVar1 = (undefined4 *)sub_0803D5B8(0x114);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804920C;
        puVar1[1] = 0;
        puVar1[0x43] = 0;
        puVar1[0x42] = 0;
        puVar1[0x44] = 0;
        *puVar1 = &_0804B5AC;
      }
      sub_0803D850();
      uVar2 = 0;
    }
    else {
      uVar2 = sub_080058AC(param_1);
    }
  }
  else {
    DAT_03002f50 = 0;
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_080203DE @ 0x080203DE */

void sub_080203DE(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (((param_3 != 0) && (param_3 != 1)) && (param_3 != 2)) {
    *(undefined4 *)(param_1 + 300) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 300) + 1;
  *(int *)(param_1 + 300) = iVar1;
  if (0x14 < iVar1) {
    DAT_03002f50 = 1;
  }
  return;
}


/* sub_08020406 @ 0x08020406 */

void sub_08020406(int *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  wchar16 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  
  local_18 = 1;
  local_20 = L"TRADE";
  local_14 = &gUnknown_0807012C;
  local_1c = 5;
  uVar2 = sub_08014124(0,param_1,0x3c,0x14);
  sub_0800664E(param_1,uVar2);
  local_18 = 1;
  local_14 = &gUnknown_0807012C;
  local_1c = 5;
  local_20 = L"COMPLETE!";
  uVar2 = sub_08014124(0,param_1,0x3c,0x22);
  sub_0800664E(param_1,uVar2);
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0x1c00);
  local_20 = (wchar16 *)0x7;
  local_1c = 8;
  local_18 = 0x17;
  local_14 = (undefined4 *)0xf;
  sub_0803DA10(&local_20,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f83;
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x100;
  __call_via_r1(param_1,*(int *)(*param_1 + 0x24) + *param_1);
  return;
}


/* sub_080204B0 @ 0x080204B0 */

void sub_080204B0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,0x4000000,param_4);
  }
  return;
}


/* sub_080204D0 @ 0x080204D0 */

void sub_080204D0(undefined4 param_1)

{
  undefined1 auStack_40 [52];
  
  sub_0803F540(auStack_40,0x80,0x38);
  sub_08005096(auStack_40);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6009640);
  sub_0803F58C(auStack_40,0);
  return;
}


/* sub_08020504 @ 0x08020504 */

undefined4 sub_08020504(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x114) == 0) {
    sub_0800491A(&DAT_03001068,DAT_03001910);
  }
  iVar1 = *(int *)(param_1 + 0x114) + 1;
  *(int *)(param_1 + 0x114) = iVar1;
  if (0x3c < iVar1) {
    return 1;
  }
  return 0;
}


/* sub_0802055C @ 0x0802055C */

void sub_0802055C(int param_1,int param_2)

{
  int *piVar1;
  int local_14;
  int local_10;
  
  piVar1 = *(int **)(param_2 + 4);
  local_14 = piVar1[0x68] >> 8;
  local_10 = piVar1[0x69] >> 8;
  sub_080192CE(&local_14,param_1 + 0x14,param_1 + 0x1c,param_1 + 0xc,*(undefined4 *)(param_1 + 8),
               local_14);
  __call_via_r1(piVar1,*(int *)(*piVar1 + 0x3c) + *piVar1);
  return;
}


/* sub_080205A4 @ 0x080205A4 */

void sub_080205A4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)(iVar1 + 0x1a0);
  *piVar2 = *piVar2 + param_1[3];
  *(int *)(iVar1 + 0x1a4) = *(int *)(iVar1 + 0x1a4) + param_1[4];
  iVar3 = param_1[7];
  param_1[7] = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    iVar3 = param_1[6];
    *piVar2 = param_1[5] << 8;
    *(int *)(iVar1 + 0x1a4) = iVar3 << 8;
    param_1[8] = 1;
    iVar1 = *(int *)(*param_1 + 0x14);
    __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  }
  return;
}


/* sub_080205E0 @ 0x080205E0 */

void sub_080205E0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_2 + 4);
  iVar2 = *(int *)(iVar1 + 0x40);
  __call_via_r1(*(int **)(param_2 + 4),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_080205F0 @ 0x080205F0 */

void sub_080205F0(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  __call_via_r1(piVar1,*(int *)(*piVar1 + 0x40) + *piVar1);
  __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
  return;
}


/* sub_08020610 @ 0x08020610 */

void sub_08020610(int param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_10;
  
  piVar2 = *(int **)(param_2 + 4);
  local_14 = piVar2[0x68] >> 8;
  local_10 = piVar2[0x69] >> 8;
  sub_080192CE(&local_14,param_1 + 0x14,param_1 + 0x1c,param_1 + 0xc,*(undefined4 *)(param_1 + 8),
               local_14);
  __call_via_r1(piVar2,*(int *)(*piVar2 + 0x3c) + *piVar2);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar6 = iVar5;
  if (iVar5 < 0) {
    iVar6 = -iVar5;
  }
  if (iVar6 < iVar4) {
    if (iVar3 < 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    *(undefined1 *)(piVar2 + 4) = uVar1;
  }
  else {
    *(char *)(piVar2 + 4) = '\x01' - (-1 < iVar5);
  }
  __call_via_r2(piVar2,*(undefined1 *)(param_1 + 0x24),*(int *)(*piVar2 + 0x28) + *piVar2);
  return;
}


/* sub_080206A0 @ 0x080206A0 */

void sub_080206A0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_2 + 4);
  __call_via_r3(*(int **)(param_2 + 4),*(undefined1 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                *(int *)(iVar1 + 0x30) + iVar1);
  return;
}


/* sub_080206B6 @ 0x080206B6 */

undefined4 *
sub_080206B6(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x54), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x300;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x300);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x300);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x300);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804AEF8;
    uVar2 = param_2[1];
    param_1[8] = *param_2;
    param_1[9] = uVar2;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[1] = param_2[1];
    param_1[0x14] = param_4;
    param_1[6] = 0;
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0xe] = 8;
    param_1[0x10] = param_5;
    *(undefined1 *)((int)param_1 + 0x12) =
         *(undefined1 *)(param_5 + (uint)(*(byte *)(param_4 + 0x10) >> 1));
    iVar1 = *(int *)(param_5 + 8);
    param_1[0x13] = iVar1;
    param_1[0x12] = iVar1;
    param_1[0x11] = iVar1;
    param_1[5] = DAT_03000f94;
    param_1[7] = 0xffffffff;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),*(int *)(iVar1 + 8),
                 0x40);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40,0);
  }
  return param_1;
}


/* sub_080206B8 @ 0x080206B8 */

undefined4 *
sub_080206B8(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x54), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x300;
    iVar1 = sub_0801124C(&DAT_03001c4c,0x300);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,0x300);
      iVar1 = sub_0801124C(&DAT_03001c4c,0x300);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804AEF8;
    uVar2 = param_2[1];
    param_1[8] = *param_2;
    param_1[9] = uVar2;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[1] = param_2[1];
    param_1[0x14] = param_4;
    param_1[6] = 0;
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0xe] = 8;
    param_1[0x10] = param_5;
    *(undefined1 *)((int)param_1 + 0x12) =
         *(undefined1 *)(param_5 + (uint)(*(byte *)(param_4 + 0x10) >> 1));
    iVar1 = *(int *)(param_5 + 8);
    param_1[0x13] = iVar1;
    param_1[0x12] = iVar1;
    param_1[0x11] = iVar1;
    param_1[5] = DAT_03000f94;
    param_1[7] = 0xffffffff;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),*(int *)(iVar1 + 8),
                 0x40);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40,0);
  }
  return param_1;
}


/* sub_08020768 @ 0x08020768 */

void sub_08020768(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804AEF8;
  if (*(char *)(param_1 + 4) == '\0') {
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  }
  else {
    sub_0803E302(&DAT_03003e5c,&gUnknown_08319428);
    sub_0803E378(&DAT_03003e5c,&DAT_08319434,0x40,0);
  }
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


/* sub_080207D2 @ 0x080207D2 */

void sub_080207D2(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  uVar2 = *param_3;
  *(undefined4 *)(param_1 + 0x24) = param_3[1];
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  iVar3 = *(int *)(param_1 + 0x3c) * 0xc0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0xc) + iVar3;
  *(int *)(param_1 + 0x4c) = iVar1;
  *(int *)(param_1 + 0x48) = iVar1;
  iVar1 = *(int *)(param_1 + 0x3c) * 8;
  uVar2 = *(undefined4 *)(&gUnknown_0807268C + iVar1);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(&DAT_08072690 + iVar1);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined1 *)(param_1 + 0x10) = 1;
  sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC,0x5c4,iVar3,param_4);
  sub_0803E378(&DAT_03003e5c,&gUnknown_08319428,0x40,0);
  return;
}


/* sub_08020800 @ 0x08020800 */

void sub_08020800(int param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r5;
  
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined1 *)(param_1 + 0x10) = 1;
  sub_0803E302(&DAT_03003e5c,unaff_r5 + 0x24);
  sub_0803E378(&DAT_03003e5c,unaff_r5 + 0x180,0x40,0);
  return;
}


/* sub_08020802 @ 0x08020802 */

void sub_08020802(int param_1)

{
  int unaff_r5;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  sub_0803E302(&DAT_03003e5c,unaff_r5 + 0x24);
  sub_0803E378(&DAT_03003e5c,unaff_r5 + 0x180,0x40,0);
  return;
}


/* sub_0802082A @ 0x0802082A */

void sub_0802082A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 2;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  return;
}


/* sub_0802084C @ 0x0802084C */

void sub_0802084C(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iStack_5c;
  int iStack_58;
  undefined1 auStack_54 [4];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 uStack_40;
  uint uStack_3c;
  undefined *puStack_38;
  undefined4 uStack_34;
  int iStack_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar2;
    if (3 < iVar2) {
      iVar2 = *(int *)(param_1 + 0x4c) + (iVar2 * 0x20000000 >> 0x1f) * -0xc;
      iVar9 = iVar2 + 0xc;
      *(int *)(param_1 + 0x48) = iVar9;
      if (iVar9 != *(int *)(param_1 + 0x44)) {
        *(int *)(param_1 + 0x44) = iVar9;
        sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                     *(int *)(iVar2 + 0x14),
                     (uint)*(byte *)(iVar2 + 0xf) * (uint)*(byte *)(iVar2 + 0xe));
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      iVar2 = *(int *)(param_1 + 0x38);
      if (param_2 == 0) {
        local_20 = *(int *)(param_1 + 0x20) + iVar2 * *(int *)(param_1 + 0x30);
        local_1c = *(int *)(param_1 + 0x24) + iVar2 * *(int *)(param_1 + 0x34);
        iStack_24 = local_1c + -8;
        local_1c = local_1c + 8;
        iStack_28 = local_20 + -8;
        local_20 = local_20 + 8;
        iVar2 = sub_08009324(&iStack_28,DAT_03001a50);
        if (iVar2 == 0) {
          if (*(char *)(param_1 + 0x11) == '\0') {
            *(undefined1 *)(param_1 + 0x11) = 1;
            *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
          }
        }
        else if ((DAT_03002c04 != 0) || (iVar2 = sub_080532C0(&DAT_030019bc,&iStack_28), iVar2 != 0)
                ) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 3;
        }
      }
      else {
        iStack_28 = *(int *)(param_1 + 0x20) + iVar2 * *(int *)(param_1 + 0x30);
        local_1c = *(int *)(param_1 + 0x24) + iVar2 * *(int *)(param_1 + 0x34);
        uStack_34 = *(undefined4 *)(param_1 + 0x50);
        uStack_40 = (undefined1)*(undefined4 *)(param_1 + 0x3c);
        puStack_38 = &gUnknown_086B8088 + (uint)*(byte *)(*(int *)(param_1 + 0x40) + 6) * 8;
        uStack_3c = (uint)*(ushort *)(*(int *)(param_1 + 0x40) + 2);
        auStack_54[0] = (undefined1)*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x1d0);
        iStack_50 = iStack_28 + -8;
        iStack_4c = local_1c + -8;
        iStack_48 = iStack_28 + 8;
        iStack_44 = local_1c + 8;
        iStack_24 = param_1;
        local_20 = iStack_28;
        iVar2 = sub_08009324(&iStack_50,DAT_03001a50);
        if (iVar2 == 0) {
          if (*(char *)(param_1 + 0x11) == '\0') {
            *(undefined1 *)(param_1 + 0x11) = 1;
            *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
          }
        }
        else {
          iVar2 = sub_08011C0C(&DAT_03001c4c,0,auStack_54);
          if (iVar2 == 0) {
            if ((DAT_03002c04 != 0) || (iVar2 = sub_080532C0(&DAT_030019bc,&iStack_50), iVar2 != 0))
            {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 3;
            }
          }
          else {
            iStack_5c = local_20 + *(int *)(param_1 + 0x30) * 4;
            iStack_58 = local_1c + *(int *)(param_1 + 0x34) * 4;
            if (*(char *)(param_1 + 0x11) == '\0') {
              sub_080116FC(&DAT_03001c4c);
            }
            iVar2 = DAT_03000f94;
            if (0 < DAT_03000f94 - *(int *)(param_1 + 0x14)) {
              iVar9 = sub_0803FACC(5);
              *(int *)(param_1 + 0x14) = iVar2 + iVar9 + 3;
              iVar2 = sub_0803FACC(2);
              sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
              iVar2 = sub_080116FC(&DAT_03001c4c);
              if (0x400 < iVar2) {
                iVar2 = sub_0803FACC(0x20);
                iStack_5c = iVar2 + iStack_5c + -0x10;
                iVar2 = sub_0803FACC(0x20);
                iStack_58 = iVar2 + iStack_58 + -0x10;
                iVar2 = sub_0803FACC(0x4000);
                uVar3 = sub_0802A81C(0,&iStack_5c,&gUnknown_08712FDC,4,iVar2 + 0x1000,0x400,0x38);
                sub_0801191A(&DAT_03001c4c,uVar3);
              }
            }
            if (*(char *)(param_1 + 0x11) == '\0') {
              *(undefined1 *)(param_1 + 0x11) = 1;
              *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
            }
          }
        }
        piVar5 = (int *)(param_1 + 0x20);
        piVar4 = piVar5;
        if (local_20 < *(int *)(param_1 + 0x20)) {
          piVar4 = &local_20;
        }
        iStack_50 = *piVar4 + -6;
        piVar4 = (int *)(param_1 + 0x24);
        piVar6 = piVar4;
        if (local_1c < *(int *)(param_1 + 0x24)) {
          piVar6 = &local_1c;
        }
        iStack_4c = *piVar6 + -6;
        if (*piVar5 < local_20) {
          piVar5 = &local_20;
        }
        iStack_48 = *piVar5 + 6;
        if (*piVar4 < local_1c) {
          piVar4 = &local_1c;
        }
        iStack_44 = *piVar4 + 6;
        sub_08011C0C(&DAT_03001c4c,0,auStack_54);
      }
    }
    else if (cVar1 == '\x02') {
      local_20 = *(int *)(param_1 + 0x30) * 3;
      local_1c = *(int *)(param_1 + 0x34) * 3;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + local_20;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + local_1c;
      iVar2 = *(int *)(param_1 + 0x38) + -3;
      *(int *)(param_1 + 0x38) = iVar2;
      if (iVar2 < 0) {
        sub_08011944(&DAT_03001c4c,param_1);
        return;
      }
    }
    iVar2 = *(int *)(param_1 + 0x18) + 1;
    uVar7 = iVar2 >> 2;
    *(int *)(param_1 + 0x18) = iVar2;
    if (*(uint *)(param_1 + 0x1c) != uVar7) {
      *(uint *)(param_1 + 0x1c) = uVar7;
      cVar1 = *(char *)(*(int *)(param_1 + 0x40) + 5);
      if ((cVar1 == '\0') || (cVar1 == '\x01')) {
        iVar9 = -((int)(uVar7 << 0x1f) >> 0x1f);
        iVar2 = 0;
        if (*(char *)(param_1 + 0x10) != '\x01') {
          iVar2 = 0xd;
        }
        iVar2 = (iVar9 + iVar2) * 0xc + *(int *)(param_1 + 0x4c);
        sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                     *(int *)(iVar2 + 8),(uint)*(byte *)(iVar2 + 3) * (uint)*(byte *)(iVar2 + 2));
        iVar2 = 10;
        if (*(char *)(param_1 + 0x11) == '\0') {
          iVar2 = 7;
        }
        sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200,
                     *(int *)((iVar9 + iVar2) * 0xc + *(int *)(param_1 + 0x4c) + 8),0x100);
      }
      else if (cVar1 == '\x02') {
        uVar8 = uVar7 & 3;
        if (uVar8 == 3) {
          uVar8 = 1;
        }
        iStack_18 = uVar8 * 0x40;
        sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                     *(int *)(*(int *)(param_1 + 0x4c) + 8) + iStack_18,0x40);
        if (*(char *)(param_1 + 0x11) == '\0') {
          sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200,
                       *(int *)(*(int *)(param_1 + 0x4c) + 0x5c) + iStack_18,0x40);
        }
        else {
          sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200,
                       *(int *)(*(int *)(param_1 + 0x4c) + ((int)(uVar8 << 0x1f) >> 0x1f) * -0xc +
                               0x80),0x80);
        }
      }
      cVar1 = *(char *)(*(int *)(param_1 + 0x40) + 5);
      if (cVar1 == '\0') {
        sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010100,
                     *(int *)(*(int *)(param_1 + 0x4c) + ((int)(uVar7 << 0x1f) >> 0x1f) * -0xc +
                             0x44),0x100);
      }
      else if (cVar1 == '\x01') {
        sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010100,
                     *(int *)(*(int *)(param_1 + 0x4c) + 0x44) + ((uVar7 << 0x1e) >> 0x18),0x100);
      }
      else if (cVar1 == '\x02') {
        uVar7 = uVar7 & 3;
        if (uVar7 == 3) {
          uVar7 = 1;
        }
        sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010100,
                     *(int *)(*(int *)(param_1 + 0x4c) + 0x44) + uVar7 * 0x100,0x100);
      }
    }
  }
  return;
}


/* sub_08020B02 @ 0x08020B02 */

void sub_08020B02(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iStack00000040;
  int iStack00000044;
  int iStack00000048;
  int iStack0000004c;
  int in_stack_00000050;
  
  param_3 = *(int *)(unaff_r4 + 0x20) + param_3;
  param_4 = *(int *)(unaff_r4 + 0x24) + param_4;
  iStack00000044 = param_4 + -8;
  iStack0000004c = param_4 + 8;
  iStack00000040 = param_3 + -8;
  iStack00000048 = param_3 + 8;
  iVar2 = sub_08009324(&stack0x00000040,*(undefined4 *)(param_2 + 0x2c));
  if (iVar2 == 0) {
    if (*(char *)(unaff_r4 + 0x11) == '\0') {
      *(undefined1 *)(unaff_r4 + 0x11) = 1;
      *(undefined4 *)(unaff_r4 + 0x1c) = 0xffffffff;
    }
  }
  else if ((DAT_03002c04 != 0) || (iVar2 = sub_080532C0(unaff_r6,&stack0x00000040), iVar2 != 0)) {
    *(int *)(unaff_r4 + 0x38) = *(int *)(unaff_r4 + 0x38) + 3;
  }
  iVar2 = *(int *)(unaff_r4 + 0x18) + 1;
  uVar3 = iVar2 >> 2;
  *(int *)(unaff_r4 + 0x18) = iVar2;
  if (*(uint *)(unaff_r4 + 0x1c) != uVar3) {
    *(uint *)(unaff_r4 + 0x1c) = uVar3;
    cVar1 = *(char *)(*(int *)(unaff_r4 + 0x40) + 5);
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      iVar5 = -((int)(uVar3 << 0x1f) >> 0x1f);
      iVar2 = 0;
      if (*(char *)(unaff_r4 + 0x10) != '\x01') {
        iVar2 = 0xd;
      }
      iVar2 = (iVar5 + iVar2) * 0xc + *(int *)(unaff_r4 + 0x4c);
      sub_08049138((uint)*(ushort *)(unaff_r4 + 0xc) * 0x20 + unaff_r5,*(int *)(iVar2 + 8),
                   (uint)*(byte *)(iVar2 + 3) * (uint)*(byte *)(iVar2 + 2));
      iVar2 = 10;
      if (*(char *)(unaff_r4 + 0x11) == '\0') {
        iVar2 = 7;
      }
      sub_08049138((uint)*(ushort *)(unaff_r4 + 0xc) * 0x20 + unaff_r5 + 0x200,
                   *(int *)((iVar5 + iVar2) * 0xc + *(int *)(unaff_r4 + 0x4c) + 8),0x100);
    }
    else if (cVar1 == '\x02') {
      uVar4 = uVar3 & 3;
      if (uVar4 == 3) {
        uVar4 = 1;
      }
      in_stack_00000050 = uVar4 * 0x40;
      sub_08049138((uint)*(ushort *)(unaff_r4 + 0xc) * 0x20 + unaff_r5,
                   *(int *)(*(int *)(unaff_r4 + 0x4c) + 8) + in_stack_00000050,0x40);
      if (*(char *)(unaff_r4 + 0x11) == '\0') {
        sub_08049138((uint)*(ushort *)(unaff_r4 + 0xc) * 0x20 + unaff_r5 + 0x200,
                     *(int *)(*(int *)(unaff_r4 + 0x4c) + 0x5c) + in_stack_00000050,0x40);
      }
      else {
        sub_08049138((uint)*(ushort *)(unaff_r4 + 0xc) * 0x20 + unaff_r5 + 0x200,
                     *(int *)(*(int *)(unaff_r4 + 0x4c) + ((int)(uVar4 << 0x1f) >> 0x1f) * -0xc +
                             0x80),0x80);
      }
    }
    cVar1 = *(char *)(*(int *)(unaff_r4 + 0x40) + 5);
    if (cVar1 == '\0') {
      sub_08049138((uint)*(ushort *)(unaff_r4 + 0xc) * 0x20 + unaff_r5 + 0x100,
                   *(int *)(*(int *)(unaff_r4 + 0x4c) + ((int)(uVar3 << 0x1f) >> 0x1f) * -0xc + 0x44
                           ),0x100);
    }
    else if (cVar1 == '\x01') {
      sub_08049138((uint)*(ushort *)(unaff_r4 + 0xc) * 0x20 + unaff_r5 + 0x100,
                   *(int *)(*(int *)(unaff_r4 + 0x4c) + 0x44) + ((uVar3 << 0x1e) >> 0x18),0x100);
    }
    else if (cVar1 == '\x02') {
      uVar3 = uVar3 & 3;
      if (uVar3 == 3) {
        uVar3 = 1;
      }
      sub_08049138((uint)*(ushort *)(unaff_r4 + 0xc) * 0x20 + unaff_r5 + 0x100,
                   *(int *)(*(int *)(unaff_r4 + 0x4c) + 0x44) + uVar3 * 0x100,0x100);
    }
  }
  return;
}


/* sub_08020CB8 @ 0x08020CB8 */

void sub_08020CB8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_1,1,*(int *)(*param_1 + 0x28) + *param_1,param_4,param_4);
  return;
}


/* sub_08020CC8 @ 0x08020CC8 */

undefined4 sub_08020CC8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) - DAT_030019bc;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x24) - DAT_030019c0;
  *(int *)(param_1 + 0x28) = iVar1;
  return 1;
}


/* sub_08020CF4 @ 0x08020CF4 */

void sub_08020CF4(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  
  pcVar4 = (char *)(*(int *)(param_1 + 0x4c) + param_2 * 0xc);
  local_24 = *(int *)(param_1 + 0x28) + (int)*pcVar4 + *param_5;
  local_20 = *(int *)(param_1 + 0x2c) + (int)pcVar4[1] + param_5[1];
  local_1c = local_24 + (uint)(byte)pcVar4[2];
  local_18 = local_20 + (byte)pcVar4[3];
  iVar1 = sub_080532C0(&local_24,&DAT_0872505c);
  if (iVar1 != 0) {
    *(undefined4 *)*param_3 = *(undefined4 *)(pcVar4 + 4);
    uVar2 = *(uint *)*param_3;
    uVar3 = (uint)(local_24 << 0x17) >> 7;
    *(uint *)*param_3 = uVar2 & 0xfe00ffff | uVar3;
    *(uint *)*param_3 = uVar2 & 0xfe00ff00 | uVar3 | local_20 & 0xff;
    uVar3 = *(uint *)(*param_3 + 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc) + param_4 & 0x3ff;
    *(uint *)(*param_3 + 4) = uVar2 | uVar3 & 0xfffffc00;
    *(uint *)(*param_3 + 4) =
         (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar3 & 0xfffff000;
    *param_3 = *param_3 + 8;
  }
  return;
}


/* sub_08020DAC @ 0x08020DAC */

undefined4 sub_08020DAC(int param_1,int *param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    iStack_28 = *(int *)(param_1 + 0x28) - (int)**(char **)(param_1 + 0x48);
    uStack_24 = *(int *)(param_1 + 0x2c) - (int)*(char *)(*(int *)(param_1 + 0x48) + 1);
    iStack_20 = iStack_28 + (uint)*(byte *)(*(int *)(param_1 + 0x48) + 2);
    iStack_1c = uStack_24 + *(byte *)(*(int *)(param_1 + 0x48) + 3);
    iVar5 = sub_080532C0(&iStack_28,&DAT_0872506c);
    if (iVar5 != 0) {
      puVar2 = (uint *)*param_2;
      *param_2 = (int)(puVar2 + 2);
      *puVar2 = *(uint *)(*(int *)(param_1 + 0x48) + 4);
      uVar3 = *puVar2;
      uVar4 = (uint)(iStack_28 << 0x17) >> 7;
      *puVar2 = uVar3 & 0xfe00ffff | uVar4;
      *puVar2 = uVar3 & 0xfe00ff00 | uVar4 | uStack_24 & 0xff;
      uVar4 = puVar2[1];
      uVar3 = *(ushort *)(param_1 + 0xc) & 0x3ff;
      puVar2[1] = uVar3 | uVar4 & 0xfffffc00;
      puVar2[1] = uVar3 | uVar4 & 0xfffff000 |
                  (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10;
    }
  }
  else {
    if (cVar1 == '\x01') {
      local_18 = *param_2;
      sub_08020CF4(param_1,0,&local_18,0,&gUnknown_08725054);
      if ((int)((uint)*(byte *)(*(int *)(param_1 + 0x40) + 4) << 0x1f) < 0) {
        sub_08020CF4(param_1,2,&local_18,0,&gUnknown_08725054);
      }
    }
    else {
      if (cVar1 != '\x02') {
        return 0;
      }
      local_18 = *param_2;
      sub_08020CF4(param_1,0xd,&local_18,0,&gUnknown_08725054);
      if ((int)((uint)*(byte *)(*(int *)(param_1 + 0x40) + 4) << 0x1e) < 0) {
        sub_08020CF4(param_1,0xf,&local_18,0,&gUnknown_08725054);
      }
    }
    iStack_38 = *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x30);
    iStack_34 = *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x34);
    iStack_30 = iStack_38;
    iStack_2c = iStack_34;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08020CF4(param_1,7,&local_18,0x10,&iStack_30);
      if ((int)((uint)*(byte *)(*(int *)(param_1 + 0x40) + 4) << 0x1d) < 0) {
        sub_08020CF4(param_1,9,&local_18,0x10,&iStack_30);
      }
    }
    else {
      sub_08020CF4(param_1,10,&local_18,0x10,&iStack_30);
      if ((int)((uint)*(byte *)(*(int *)(param_1 + 0x40) + 4) << 0x1c) < 0) {
        sub_08020CF4(param_1,0xc,&local_18,0x10,&iStack_30);
      }
    }
    iVar5 = 0;
    if (0 < (int)((*(int *)(param_1 + 0x38) + 7) - (uint)*(byte *)(param_1 + 0x12))) {
      do {
        iStack_38 = iVar5 * *(int *)(param_1 + 0x30);
        iStack_34 = iVar5 * *(int *)(param_1 + 0x34);
        sub_08020CF4(param_1,5,&local_18,8,&iStack_38,iStack_34);
        iVar5 = (uint)*(byte *)(param_1 + 0x12) + iVar5;
      } while (iVar5 < (int)((*(int *)(param_1 + 0x38) + 7) - (uint)*(byte *)(param_1 + 0x12)));
    }
    if (iVar5 < *(int *)(param_1 + 0x38) + -9) {
      iStack_38 = iVar5 * *(int *)(param_1 + 0x30);
      iStack_34 = iVar5 * *(int *)(param_1 + 0x34);
      sub_08020CF4(param_1,4,&local_18,
                   (*(int *)(*(int *)(param_1 + 0x4c) + 0x38) -
                    *(int *)(*(int *)(param_1 + 0x4c) + 0x44) >> 5) + 8,&iStack_38,iStack_34);
      iVar5 = iVar5 + 0x10;
    }
    if (iVar5 < *(int *)(param_1 + 0x38) + -1) {
      iStack_38 = iVar5 * *(int *)(param_1 + 0x30);
      iStack_34 = iVar5 * *(int *)(param_1 + 0x34);
      sub_08020CF4(param_1,3,&local_18,
                   (*(int *)(*(int *)(param_1 + 0x4c) + 0x2c) -
                    *(int *)(*(int *)(param_1 + 0x4c) + 0x44) >> 5) + 8,&iStack_38,iStack_34);
    }
    *param_2 = local_18;
  }
  return 0;
}


/* sub_08020DFC @ 0x08020DFC */

undefined4 sub_08020DFC(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r4;
  int *unaff_r6;
  int iStack00000018;
  uint uStack0000001c;
  int iStack00000020;
  int iStack00000024;
  undefined4 in_stack_00000028;
  
  iStack00000018 = param_1 - *(char *)(param_2 + param_4);
  uStack0000001c = *(int *)(unaff_r4 + 0x2c) - (int)*(char *)(*(int *)(unaff_r4 + 0x48) + 1);
  iStack00000020 = iStack00000018 + (uint)*(byte *)(*(int *)(unaff_r4 + 0x48) + 2);
  iStack00000024 = uStack0000001c + *(byte *)(*(int *)(unaff_r4 + 0x48) + 3);
  iVar1 = sub_080532C0(&stack0x00000018,&DAT_0872506c);
  if (iVar1 != 0) {
    puVar2 = (uint *)*unaff_r6;
    *unaff_r6 = (int)(puVar2 + 2);
    *puVar2 = *(uint *)(*(int *)(unaff_r4 + 0x48) + 4);
    uVar3 = *puVar2;
    uVar4 = (uint)(iStack00000018 << 0x17) >> 7;
    *puVar2 = uVar3 & 0xfe00ffff | uVar4;
    *puVar2 = uVar3 & 0xfe00ff00 | uVar4 | uStack0000001c & 0xff;
    uVar4 = puVar2[1];
    uVar3 = *(ushort *)(unaff_r4 + 0xc) & 0x3ff;
    puVar2[1] = uVar3 | uVar4 & 0xfffffc00;
    puVar2[1] = uVar3 | uVar4 & 0xfffff000 | (((uint)*(byte *)(unaff_r4 + 8) << 0x1a) >> 0x1e) << 10
    ;
  }
  return 0;
}


/* sub_08020E10 @ 0x08020E10 */

undefined4 sub_08020E10(undefined4 param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r4;
  int *unaff_r6;
  int in_stack_00000018;
  uint in_stack_0000001c;
  int iStack00000020;
  int iStack00000024;
  undefined4 in_stack_00000028;
  
  iStack00000020 = in_stack_00000018 + (uint)*(byte *)(param_2 + 2);
  iStack00000024 = in_stack_0000001c + *(byte *)(param_2 + 3);
  iVar1 = sub_080532C0(&stack0x00000018,&DAT_0872506c);
  if (iVar1 != 0) {
    puVar2 = (uint *)*unaff_r6;
    *unaff_r6 = (int)(puVar2 + 2);
    *puVar2 = *(uint *)(*(int *)(unaff_r4 + 0x48) + 4);
    uVar3 = *puVar2;
    uVar4 = (uint)(in_stack_00000018 << 0x17) >> 7;
    *puVar2 = uVar3 & 0xfe00ffff | uVar4;
    *puVar2 = uVar3 & 0xfe00ff00 | uVar4 | in_stack_0000001c & 0xff;
    uVar4 = puVar2[1];
    uVar3 = *(ushort *)(unaff_r4 + 0xc) & 0x3ff;
    puVar2[1] = uVar3 | uVar4 & 0xfffffc00;
    puVar2[1] = uVar3 | uVar4 & 0xfffff000 | (((uint)*(byte *)(unaff_r4 + 8) << 0x1a) >> 0x1e) << 10
    ;
  }
  return 0;
}


/* sub_08020F02 @ 0x08020F02 */

undefined4 sub_08020F02(int param_1)

{
  int unaff_r4;
  int iVar1;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_stack_00000028;
  
  if (param_1 << 0x1d < 0) {
    sub_08020CF4(unaff_r4,9,unaff_r7,0x10);
  }
  iVar1 = 0;
  if (0 < (int)((*(int *)(unaff_r4 + 0x38) + 7) - (uint)*(byte *)(unaff_r4 + 0x12))) {
    do {
      sub_08020CF4(unaff_r4,5,unaff_r7,8);
      iVar1 = (uint)*(byte *)(unaff_r4 + 0x12) + iVar1;
    } while (iVar1 < (int)((*(int *)(unaff_r4 + 0x38) + 7) - (uint)*(byte *)(unaff_r4 + 0x12)));
  }
  if (iVar1 < *(int *)(unaff_r4 + 0x38) + -9) {
    sub_08020CF4(unaff_r4,4,unaff_r7,
                 (*(int *)(*(int *)(unaff_r4 + 0x4c) + 0x38) -
                  *(int *)(*(int *)(unaff_r4 + 0x4c) + 0x44) >> 5) + 8);
    iVar1 = iVar1 + 0x10;
  }
  if (iVar1 < *(int *)(unaff_r4 + 0x38) + -1) {
    sub_08020CF4(unaff_r4,3,unaff_r7,
                 (*(int *)(*(int *)(unaff_r4 + 0x4c) + 0x2c) -
                  *(int *)(*(int *)(unaff_r4 + 0x4c) + 0x44) >> 5) + 8);
  }
  *unaff_r6 = in_stack_00000028;
  return 0;
}


/* sub_08020FC4 @ 0x08020FC4 */

undefined4 sub_08020FC4(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if (param_2 == 0) {
    if (*(int **)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((uint)*(byte *)(param_3 + 0x14) == (param_1[0xf] ^ 1U)) {
      iStack_10 = param_1[8] + param_1[0xe] * param_1[0xc];
      iStack_14 = param_1[9] + param_1[0xe] * param_1[0xd];
      iStack_c = iStack_14 + 0xc;
      iStack_14 = iStack_14 + -0xc;
      iStack_18 = iStack_10 + -0xc;
      iStack_10 = iStack_10 + 0xc;
      iVar2 = sub_080532C0(param_3 + 4,&iStack_18);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
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


/* sub_0802105C @ 0x0802105C */

undefined4 sub_0802105C(undefined4 param_1,int param_2)

{
  if (2 < param_2) {
    return 1;
  }
  return 0;
}


/* sub_08021068 @ 0x08021068 */

void sub_08021068(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x24), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = &DAT_03001964;
  }
  return;
}


/* sub_08021084 @ 0x08021084 */

bool sub_08021084(int param_1)

{
  return *(undefined4 **)(param_1 + 8) != &DAT_03001964;
}


/* sub_08021094 @ 0x08021094 */

void sub_08021094(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 8);
  __call_via_r1(*(int **)(param_1 + 8),iVar2 + iVar1,iVar2,param_4,param_4);
  *(int **)(param_1 + 8) = param_2;
  __call_via_r1(param_2,*(int *)(*param_2 + 4) + *param_2);
  return;
}


/* sub_080210B6 @ 0x080210B6 */

void sub_080210B6(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  __call_via_r1(*(int **)(param_1 + 8),*(int *)(iVar1 + 8) + iVar1);
  *(int **)(param_1 + 8) = &DAT_03001964;
  __call_via_r1(&DAT_03001964,*(int *)(DAT_03001964 + 4) + DAT_03001964);
  return;
}


/* sub_080210D6 @ 0x080210D6 */

void sub_080210D6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  *(undefined4 *)(iVar1 * 4 + param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = &DAT_03001964;
  return;
}


/* sub_080210F2 @ 0x080210F2 */

void sub_080210F2(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  __call_via_r1(*(int **)(param_1 + 8),*(int *)(iVar1 + 8) + iVar1);
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 * 4 + param_1 + 0x10);
  return;
}


/* sub_0802111C @ 0x0802111C */

void sub_0802111C(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (DAT_03001a34 == 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D300;
      puVar1[1] = uVar2;
    }
    sub_08021094(&DAT_03002bd8,puVar1);
  }
  else {
    puVar1 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804E324;
      puVar1[1] = uVar2;
      puVar1[2] = 0xffffffff;
    }
    sub_08021094(&DAT_03002bd8,puVar1);
  }
  return;
}


/* sub_08021174 @ 0x08021174 */

void sub_08021174(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804AB7C;
    param_1[1] = 0;
    param_1[2] = &_0804A7E4;
    *param_1 = &_0804B894;
    param_1[2] = &DAT_0804b8c0;
    uVar1 = param_2[1];
    param_1[3] = *param_2;
    param_1[4] = uVar1;
    param_1[5] = param_3;
    param_1[0xb] = 0;
  }
  return;
}


/* sub_080211A8 @ 0x080211A8 */

void sub_080211A8(int param_1)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar1 = DAT_030019c0;
  local_14 = DAT_030019bc;
  local_10 = DAT_030019c0;
  *(int *)(param_1 + 0x20) = DAT_030019bc << 10;
  *(int *)(param_1 + 0x24) = iVar1 << 10;
  sub_080192CE(&local_14,param_1 + 0xc,param_1 + 0x28,&local_1c,*(undefined4 *)(param_1 + 0x14));
  iVar1 = 0;
  *(int *)(param_1 + 0x18) = local_1c << 2;
  *(int *)(param_1 + 0x1c) = local_18 << 2;
  if (param_1 != 0) {
    iVar1 = param_1 + 8;
  }
  sub_08021094(&DAT_03002bd8,iVar1);
  return;
}


/* sub_080211FA @ 0x080211FA */

void sub_080211FA(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x18);
  piVar2 = (int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x28) + -1;
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    sub_080210B6(&DAT_03002bd8);
    *piVar2 = *(int *)(param_1 + 0xc) << 10;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x10) << 10;
  }
  if (DAT_03001a34 == 0) {
    sub_08009744(&DAT_030019a4,piVar2);
  }
  else {
    DAT_030019a4 = *piVar2;
    DAT_030019a8 = *(int *)(param_1 + 0x24);
    sub_0802ED98(&DAT_030019a4);
  }
  return;
}


/* sub_08021270 @ 0x08021270 */

void sub_08021270(void)

{
  sub_080210B6(&DAT_03002bd8);
  return;
}


/* sub_08021280 @ 0x08021280 */

undefined4 *
sub_08021280(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x60), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x1000,param_4);
    *param_1 = &_0804A33C;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    param_1[0x17] = param_5;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[6] = *(undefined4 *)(param_5 + 4);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0x2000;
    param_1[0x16] = 0x200;
    sub_08019B4E(param_1);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40,0);
  }
  return param_1;
}


/* sub_080212FA @ 0x080212FA */

void sub_080212FA(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804A33C;
  if (param_1[0x11] == 0) {
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  }
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


/* sub_0802133A @ 0x0802133A */

void sub_0802133A(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  uint uStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  int iStack_18;
  
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


/* sub_08021452 @ 0x08021452 */

void sub_08021452(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x44) = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
  *(int *)(param_1 + 0x18) = iVar1 + 0x18;
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 0x20)
               ,(uint)*(byte *)(iVar1 + 0x1b) * (uint)*(byte *)(iVar1 + 0x1a));
  sub_08019B4E(param_1);
  *(undefined1 *)(param_1 + 8) = 0x37;
  if (param_2 == 1) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -0x800;
  }
  *(int *)(param_1 + 0x4c) = param_3 * *(int *)(&gUnknown_0807268C + param_2 * 8) * 0x5f4 >> 8;
  *(int *)(param_1 + 0x50) = (param_3 * *(int *)(&DAT_08072690 + param_2 * 8) * 0x5f4 >> 8) + -0x200
  ;
  sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  sub_0803E378(&DAT_03003e5c,&gUnknown_08319440,0x40,0);
  return;
}


/* sub_080214DA @ 0x080214DA */

void sub_080214DA(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x44) = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
  *(int *)(param_1 + 0x18) = iVar1 + 0x18;
  iVar2 = param_1;
  iVar3 = param_2;
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 0x20)
               ,(uint)*(byte *)(iVar1 + 0x1b) * (uint)*(byte *)(iVar1 + 0x1a));
  sub_08019B4E(param_1);
  *(undefined1 *)(param_1 + 8) = 0x37;
  if (param_2 == 1) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -0x800;
  }
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(int *)(param_1 + 0x50) = param_4;
  *(int *)(param_1 + 0x4c) = param_5 * *(int *)(param_1 + 0x4c) * 0x5f4 >> 0x10;
  *(int *)(param_1 + 0x50) = (param_5 * param_4 * 0x5f4 >> 0x10) + -0x200;
  sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC,0x5c4,0x5f4,iVar2,iVar3);
  sub_0803E378(&DAT_03003e5c,&gUnknown_08319440,0x40,0);
  return;
}


/* sub_080214FC @ 0x080214FC */

void sub_080214FC(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  sub_08049138(param_1 + param_4,param_2,param_3);
  sub_08019B4E(unaff_r4);
  *(undefined1 *)(unaff_r4 + 8) = 0x37;
  if (unaff_r6 == 1) {
    *(int *)(unaff_r4 + 0x24) = *(int *)(unaff_r4 + 0x24) + -0x800;
  }
  *(undefined4 *)(unaff_r4 + 0x4c) = param_7;
  *(int *)(unaff_r4 + 0x50) = param_8;
  *(int *)(unaff_r4 + 0x4c) = unaff_r5 * *(int *)(unaff_r4 + 0x4c) * 0x5f4 >> 0x10;
  *(int *)(unaff_r4 + 0x50) = (unaff_r5 * param_8 * 0x5f4 >> 0x10) + -0x200;
  sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  sub_0803E378(&DAT_03003e5c,&gUnknown_08319440,0x40,0);
  return;
}


/* sub_08021594 @ 0x08021594 */

undefined4 * sub_08021594(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x50), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(undefined2 *)((int)param_1 + 0xe) = 0x100;
    uVar1 = sub_0801124C(&DAT_03001c4c,0x100);
    if (uVar1 == 0xffffffff) {
      sub_08011732(&DAT_03001c4c,0x100);
      uVar1 = sub_0801124C(&DAT_03001c4c,0x100);
    }
    *(short *)(param_1 + 3) = (short)uVar1;
    *param_1 = &_0804BA50;
    param_1[10] = &DAT_0872509c;
    *(undefined1 *)(param_1 + 2) = 0x3a;
    sub_08049138((int)(&DAT_06010000 + (uVar1 & 0xffff) * 0x20),0x87250c8,0x100);
    *param_1 = &_0804CA80;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_1 = &_0804BFF8;
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
    param_1[0xd] = 0;
    uVar2 = 0x46;
    param_1[0x11] = param_4;
    param_1[0xe] = 2;
    param_1[0x10] = param_3;
    if (1 < param_3) {
      uVar2 = 100;
    }
    param_1[0xf] = uVar2;
    uVar2 = param_2[1];
    param_1[0x12] = *param_2;
    param_1[0x13] = uVar2;
  }
  return param_1;
}


/* sub_0802163A @ 0x0802163A */

void sub_0802163A(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x34) = iVar1;
    if (iVar1 < iVar3) {
      if ((*(int *)(param_1 + 0x38) < 0) && (iVar1 < 0x10)) {
        *(undefined4 *)(param_1 + 0x38) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = 0xfffffffe;
    }
  }
  else {
    if (iVar4 == 0) {
      if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x18) < 0) {
        *(int *)(param_1 + 0x34) = iVar1 + 2;
      }
      else if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x19) < 0) {
        *(int *)(param_1 + 0x34) = iVar1 + -2;
      }
    }
    else if (iVar4 == 1) {
      if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x19) < 0) {
        *(int *)(param_1 + 0x34) = iVar1 + 2;
      }
      else if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x18) < 0) {
        *(int *)(param_1 + 0x34) = iVar1 + -2;
      }
    }
    else if (iVar4 == 2) {
      if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x1a) < 0) {
        *(int *)(param_1 + 0x34) = iVar1 + 2;
      }
      else if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x1b) < 0) {
        *(int *)(param_1 + 0x34) = iVar1 + -2;
      }
    }
    else if (iVar4 == 3) {
      if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x1b) < 0) {
        *(int *)(param_1 + 0x34) = iVar1 + 2;
      }
      else if ((int)((uint)*(ushort *)(iVar2 + 2) << 0x1a) < 0) {
        *(int *)(param_1 + 0x34) = iVar1 + -2;
      }
    }
    if (*(int *)(param_1 + 0x34) < 0x10) {
      *(undefined4 *)(param_1 + 0x34) = 0x10;
    }
    if (iVar3 < *(int *)(param_1 + 0x34)) {
      *(int *)(param_1 + 0x34) = iVar3;
    }
  }
  iVar1 = *(int *)(&DAT_087250ac + iVar4 * 8);
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x34) * *(int *)(&DAT_087250a8 + iVar4 * 8);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x34) * iVar1;
  return;
}


/* sub_08021740 @ 0x08021740 */

void sub_08021740(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(param_2 + 8),(uint)*(byte *)(param_2 + 3) * (uint)*(byte *)(param_2 + 2));
  }
  return;
}


/* sub_08021762 @ 0x08021762 */

undefined4 sub_08021762(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pcVar3 = *(char **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x20) - (int)*pcVar3;
  *(int *)(param_1 + 0x10) = iVar5;
  iVar6 = *(int *)(param_1 + 0x24) - (int)pcVar3[1];
  *(int *)(param_1 + 0x14) = iVar6;
  bVar1 = pcVar3[2];
  iVar4 = iVar6 + (uint)(byte)pcVar3[3];
  *(int *)(param_1 + 0x1c) = iVar4;
  *(uint *)(param_1 + 0x18) = iVar5 + (uint)bVar1;
  if ((((iVar5 < 0xf0) && (0 < (int)(iVar5 + (uint)bVar1))) && (iVar6 < 0xa0)) && (0 < iVar4)) {
    *(int *)(param_1 + 4) = iVar4;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_080217AC @ 0x080217AC */

undefined4 sub_080217AC(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + 4);
  *puVar1 = uVar2;
  uVar3 = (uint)(*(int *)(param_1 + 0x10) << 0x17) >> 7;
  *puVar1 = uVar2 & 0xfe00ffff | uVar3;
  *puVar1 = uVar2 & 0xfe00ff00 | uVar3 | *(uint *)(param_1 + 0x14) & 0xff;
  uVar3 = puVar1[1];
  uVar2 = *(ushort *)(param_1 + 0xc) & 0x3ff;
  puVar1[1] = uVar2 | uVar3 & 0xfffffc00;
  puVar1[1] = (((uint)*(byte *)(param_1 + 8) << 0x1a) >> 0x1e) << 10 | uVar2 | uVar3 & 0xfffff000;
  return 0;
}


/* sub_08021802 @ 0x08021802 */

undefined4 sub_08021802(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0xb) {
    iVar1 = *(int *)(param_1 + 0x28);
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),*(int *)(iVar1 + 8),
                 (uint)*(byte *)(iVar1 + 3) * (uint)*(byte *)(iVar1 + 2));
    return 0;
  }
  return 0;
}


