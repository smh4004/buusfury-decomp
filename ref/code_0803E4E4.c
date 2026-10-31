/* Ghidra reference decompilation of code_0803E4E4 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0803E4E4 @ 0x0803E4E4 */

void sub_0803E4E4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x58);
  if ((bVar1 & 0x11) == 0) {
    if ((bVar1 & 0x44) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x5c);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
    }
  }
  else if (*(byte *)(param_1 + 0x5a) == 0xff) {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfb;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
    uVar2 = *(undefined4 *)(&gUnknown_087B6724 + (uint)*(byte *)(param_1 + 0x5a) * 4);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined1 *)(param_1 + 0x4a) = 4;
    if ((int)((uint)bVar1 << 0x1a) < 0) {
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x17;
    }
    else {
      *(uint *)(param_1 + 0x28) = *(int *)(DAT_030038b0 + 8) + (uint)*(byte *)(param_1 + 0x5b) * 0xc
      ;
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x1f;
    }
  }
  return;
}


/* sub_0803E574 @ 0x0803E574 */

void sub_0803E574(int param_1)

{
  sub_0803E4E4();
  DAT_030038a7 = *(undefined1 *)(param_1 + 0x5e);
  return;
}


/* sub_0803E58A @ 0x0803E58A */

void sub_0803E58A(int param_1)

{
  sub_0803E4E4();
  DAT_030038a5 = DAT_030038a6 + -1;
  DAT_030038b4 = *(byte *)(param_1 + 0x5e) - 1;
  return;
}


/* sub_0803E5AC @ 0x0803E5AC */

void sub_0803E5AC(int param_1)

{
  int iVar1;
  
  iVar1 = ((uint)*(byte *)(param_1 + 0x48) - (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar1 >> 0x18);
  if (iVar1 >> 0x18 < 1) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfc;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  return;
}


/* sub_0803E5DA @ 0x0803E5DA */

void sub_0803E5DA(int param_1)

{
  int iVar1;
  
  iVar1 = ((uint)*(byte *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar1 >> 0x18);
  if (0x3f < iVar1 >> 0x18) {
    *(undefined1 *)(param_1 + 0x48) = 0x40;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfc;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  return;
}


/* sub_0803E608 @ 0x0803E608 */

void sub_0803E608(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  sub_0803E4E4();
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 0x5e);
  }
  bVar1 = *(byte *)(param_1 + 0x4c);
  if ((bVar1 & 0xf) == 0) {
    *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5db;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    if (*(char *)(param_1 + 0x4b) == '\x0f') {
      sub_0803E5DA(param_1);
    }
  }
  else {
    uVar2 = (uint)bVar1 << 0x18;
    if (uVar2 >> 0x1c != 0) {
      if ((~(uint)bVar1 & 0xf) == 0) {
        *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
        sub_0803E5DA(param_1);
      }
      else if (uVar2 >> 0x1c == 0xf) {
        *(byte *)(param_1 + 0x4b) = bVar1 & 0xf;
        sub_0803E5AC(param_1);
        return;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x54) = 0x803e5ad;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    if (*(char *)(param_1 + 0x4b) == '\x0f') {
      sub_0803E5AC(param_1);
      return;
    }
  }
  return;
}


/* sub_0803E68C @ 0x0803E68C */

void sub_0803E68C(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(&gUnknown_087B6C84 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar1;
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}


/* sub_0803E6AA @ 0x0803E6AA */

void sub_0803E6AA(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  sub_0803E4E4();
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x5e);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x4d);
    uVar2 = (uVar1 << 0x18) >> 0x1c;
    if (uVar2 != 0xf) {
      if (uVar2 == 0xe) {
        uVar1 = (uint)*(ushort *)(&DAT_087b6c04 + ((uVar1 << 0x1c) >> 0x1b)) *
                *(int *)(param_1 + 0x40) >> 0x10;
        *(uint *)(param_1 + 0x40) = uVar1;
        *(uint *)(param_1 + 0x30) = uVar1;
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
        return;
      }
      *(undefined4 *)(param_1 + 0x54) = 0x803e68d;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
      return;
    }
    uVar1 = (uint)*(ushort *)(&gUnknown_087B6C84 + ((uVar1 << 0x1c) >> 0x1b)) *
            *(int *)(param_1 + 0x40) >> 0x10;
    *(uint *)(param_1 + 0x40) = uVar1;
    *(uint *)(param_1 + 0x30) = uVar1;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  return;
}


/* sub_0803E71A @ 0x0803E71A */

void sub_0803E71A(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(&gUnknown_087B6A04 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar1;
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}


/* sub_0803E738 @ 0x0803E738 */

void sub_0803E738(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  sub_0803E4E4();
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x5e);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x4d);
    uVar2 = (uVar1 << 0x18) >> 0x1c;
    if (uVar2 != 0xf) {
      if (uVar2 == 0xe) {
        uVar1 = (uint)*(ushort *)(&DAT_087b6984 + ((uVar1 << 0x1c) >> 0x1b)) *
                *(int *)(param_1 + 0x40) >> 0xf;
        *(uint *)(param_1 + 0x40) = uVar1;
        *(uint *)(param_1 + 0x30) = uVar1;
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
        return;
      }
      *(undefined4 *)(param_1 + 0x54) = 0x803e71b;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
      return;
    }
    uVar1 = (uint)*(ushort *)(&gUnknown_087B6A04 + ((uVar1 << 0x1c) >> 0x1b)) *
            *(int *)(param_1 + 0x40) >> 0xe;
    *(uint *)(param_1 + 0x40) = uVar1;
    *(uint *)(param_1 + 0x30) = uVar1;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  return;
}


/* sub_0803E7C4 @ 0x0803E7C4 */

void sub_0803E7C4(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(&gUnknown_087B6C84 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar3;
  *(uint *)(param_1 + 0x30) = uVar3;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar3 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf4;
  }
  return;
}


/* sub_0803E806 @ 0x0803E806 */

void sub_0803E806(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(&gUnknown_087B6A04 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar3;
  *(uint *)(param_1 + 0x30) = uVar3;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar2 < uVar3) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf4;
  }
  return;
}


/* sub_0803E848 @ 0x0803E848 */

void sub_0803E848(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x5e);
  }
  bVar1 = *(byte *)(param_1 + 0x4a);
  if (-1 < (int)((uint)bVar1 << 0x1d)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x58) & 0x11) == 0) {
    if (-1 < (int)((uint)bVar1 << 0x1c)) goto _0803E8A4;
  }
  else {
    if (*(byte *)(param_1 + 0x5a) == 0xff) goto _0803E8A4;
    *(undefined4 *)(param_1 + 0x44) =
         *(undefined4 *)(&gUnknown_087B6724 + (uint)*(byte *)(param_1 + 0x5a) * 4);
    *(byte *)(param_1 + 0x4a) = bVar1 | 8;
  }
  if (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x54) = 0x803e807;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  }
_0803E8A4:
  if ((*(byte *)(param_1 + 0x58) & 0x44) != 0) {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x5c);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  }
  return;
}


/* sub_0803E8BC @ 0x0803E8BC */

void sub_0803E8BC(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x51) + (uint)*(byte *)(param_1 + 0x4f) & 0x3f;
  *(char *)(param_1 + 0x51) = (char)uVar2;
  iVar1 = (int)((int)(char)(&gUnknown_087B6E84)[uVar2] * (uint)*(byte *)(param_1 + 0x50)) >> 6;
  if (iVar1 < 0) {
    uVar2 = (uint)*(ushort *)(&DAT_087b6c04 + iVar1 * -2) * *(int *)(param_1 + 0x40) >> 0x10;
  }
  else {
    uVar2 = (uint)*(ushort *)(&DAT_087b6984 + iVar1 * 2) * *(int *)(param_1 + 0x40) >> 0xf;
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}


/* sub_0803E904 @ 0x0803E904 */

void sub_0803E904(int param_1)

{
  byte bVar1;
  
  sub_0803E4E4();
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    if ((*(byte *)(param_1 + 0x58) & 0x11) != 0) {
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
    bVar1 = *(byte *)(param_1 + 0x5e);
    if ((bVar1 & 0xf) != 0) {
      *(byte *)(param_1 + 0x50) = (byte)(((uint)bVar1 << 0x1c) >> 0x1a);
    }
    if (((uint)bVar1 << 0x18) >> 0x1c != 0) {
      *(byte *)(param_1 + 0x4f) = bVar1 >> 4;
    }
    *(undefined4 *)(param_1 + 0x54) = 0x803e8bd;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    sub_0803E8BC(param_1);
  }
  return;
}


/* sub_0803E950 @ 0x0803E950 */

void sub_0803E950(void)

{
  return;
}


/* sub_0803E952 @ 0x0803E952 */

void sub_0803E952(void)

{
  return;
}


/* sub_0803E954 @ 0x0803E954 */

void sub_0803E954(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = ((uint)*(byte *)(param_1 + 0x48) - (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar2 >> 0x18);
  if (iVar2 >> 0x18 < 1) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x803e8bd;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  uVar1 = (uint)*(byte *)(param_1 + 0x51) + (uint)*(byte *)(param_1 + 0x4f) & 0x3f;
  *(char *)(param_1 + 0x51) = (char)uVar1;
  iVar2 = (int)((int)(char)(&gUnknown_087B6E84)[uVar1] * (uint)*(byte *)(param_1 + 0x50)) >> 6;
  if (iVar2 < 0) {
    uVar1 = (uint)*(ushort *)(&DAT_087b6c04 + iVar2 * -2) * *(int *)(param_1 + 0x40) >> 0x10;
  }
  else {
    uVar1 = (uint)*(ushort *)(&DAT_087b6984 + iVar2 * 2) * *(int *)(param_1 + 0x40) >> 0xf;
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}


/* sub_0803E97E @ 0x0803E97E */

void sub_0803E97E(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = ((uint)*(byte *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar2 >> 0x18);
  if (0x3f < iVar2 >> 0x18) {
    *(undefined1 *)(param_1 + 0x48) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x803e8bd;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  uVar1 = (uint)*(byte *)(param_1 + 0x51) + (uint)*(byte *)(param_1 + 0x4f) & 0x3f;
  *(char *)(param_1 + 0x51) = (char)uVar1;
  iVar2 = (int)((int)(char)(&gUnknown_087B6E84)[uVar1] * (uint)*(byte *)(param_1 + 0x50)) >> 6;
  if (iVar2 < 0) {
    uVar1 = (uint)*(ushort *)(&DAT_087b6c04 + iVar2 * -2) * *(int *)(param_1 + 0x40) >> 0x10;
  }
  else {
    uVar1 = (uint)*(ushort *)(&DAT_087b6984 + iVar2 * 2) * *(int *)(param_1 + 0x40) >> 0xf;
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}


/* sub_0803E9A8 @ 0x0803E9A8 */

void sub_0803E9A8(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  sub_0803E4E4();
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 0x5e);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    if ((*(byte *)(param_1 + 0x58) & 0x11) != 0) {
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
    bVar1 = *(byte *)(param_1 + 0x4c);
    if ((bVar1 & 0xf) == 0) {
      *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
      *(undefined4 *)(param_1 + 0x54) = 0x803e97f;
      if (*(char *)(param_1 + 0x4b) == '\x0f') {
        sub_0803E5DA(param_1);
      }
    }
    else {
      uVar2 = (uint)bVar1 << 0x18;
      if (uVar2 >> 0x1c == 0) {
        *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x54) = 0x803e955;
        if (*(char *)(param_1 + 0x4b) == '\x0f') {
          sub_0803E5AC(param_1);
        }
      }
      else if ((~(uint)bVar1 & 0xf) == 0) {
        *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
        sub_0803E5DA(param_1);
        *(undefined4 *)(param_1 + 0x54) = 0x803e8bd;
      }
      else if (uVar2 >> 0x1c == 0xf) {
        *(byte *)(param_1 + 0x4b) = bVar1 & bVar1 >> 4;
        sub_0803E5AC(param_1);
        *(undefined4 *)(param_1 + 0x54) = 0x803e8bd;
      }
    }
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    sub_0803E8BC(param_1);
  }
  return;
}


/* sub_0803EA6C @ 0x0803EA6C */

void sub_0803EA6C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 0x5e);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x4a) << 0x1d) < 0) {
    iVar3 = 0;
    if ((*(byte *)(param_1 + 0x58) & 0x44) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x5c);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
    }
    bVar1 = *(byte *)(param_1 + 0x4c);
    if ((bVar1 & 0xf) == 0) {
      *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
      iVar3 = 1;
      if (*(char *)(param_1 + 0x4b) == '\x0f') {
        sub_0803E5DA(param_1);
      }
    }
    else {
      uVar2 = (uint)bVar1 << 0x18;
      if (uVar2 >> 0x1c == 0) {
        iVar3 = 2;
        *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_1 + 0x4c);
        if (*(char *)(param_1 + 0x4b) == '\x0f') {
          sub_0803E5AC(param_1);
        }
      }
      else if ((~(uint)bVar1 & 0xf) == 0) {
        *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
        sub_0803E5DA(param_1);
      }
      else if (uVar2 >> 0x1c == 0xf) {
        *(byte *)(param_1 + 0x4b) = bVar1 & bVar1 >> 4;
        sub_0803E5AC(param_1);
      }
    }
    if ((*(byte *)(param_1 + 0x58) & 0x11) == 0) {
      bVar1 = *(byte *)(param_1 + 0x4a);
      if ((-1 < (int)((uint)bVar1 << 0x1c)) && (iVar3 != 0)) {
        if (iVar3 == 1) {
          *(undefined4 *)(param_1 + 0x54) = 0x803e5db;
          *(byte *)(param_1 + 0x4a) = bVar1 | 1;
        }
        else if (iVar3 == 2) {
          *(undefined4 *)(param_1 + 0x54) = 0x803e5ad;
          *(byte *)(param_1 + 0x4a) = bVar1 | 1;
        }
      }
    }
    else {
      if (*(byte *)(param_1 + 0x5a) == 0xff) {
        return;
      }
      *(undefined4 *)(param_1 + 0x44) =
           *(undefined4 *)(&gUnknown_087B6724 + (uint)*(byte *)(param_1 + 0x5a) * 4);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 8;
    }
    if (*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&DAT_087b6ed0 + iVar3 * 4);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&gUnknown_087B6EC4 + iVar3 * 4);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  }
  return;
}


/* sub_0803EB68 @ 0x0803EB68 */

void sub_0803EB68(void)

{
  return;
}


/* sub_0803EB6A @ 0x0803EB6A */

void sub_0803EB6A(void)

{
  return;
}


/* sub_0803EB6C @ 0x0803EB6C */

void sub_0803EB6C(int *param_1)

{
  sub_0803E4E4();
  if ((*(byte *)(param_1 + 0x16) & 0x11) != 0) {
    *param_1 = (uint)*(byte *)((int)param_1 + 0x5e) << 0x16;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfb;
    *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfb;
  }
  return;
}


/* sub_0803EB96 @ 0x0803EB96 */

void sub_0803EB96(void)

{
  return;
}


/* sub_0803EB98 @ 0x0803EB98 */

void sub_0803EB98(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x52) + -1;
  *(char *)(param_1 + 0x52) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 5;
    *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x4e) & 0xf;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 4;
  }
  return;
}


/* sub_0803EBC4 @ 0x0803EBC4 */

void sub_0803EBC4(int param_1)

{
  sub_0803E4E4();
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x5e);
  }
  *(undefined4 *)(param_1 + 0x54) = 0x803eb99;
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x4e) & 0xf;
  *(byte *)(param_1 + 0x4a) = (*(byte *)(param_1 + 0x4a) & 0xfc) + 2;
  return;
}


/* sub_0803EBF4 @ 0x0803EBF4 */

void sub_0803EBF4(void)

{
  return;
}


/* sub_0803EBF6 @ 0x0803EBF6 */

void sub_0803EBF6(void)

{
  return;
}


/* sub_0803EBF8 @ 0x0803EBF8 */

void sub_0803EBF8(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x52) + -1;
  *(char *)(param_1 + 0x52) = cVar1;
  if (cVar1 == '\0') {
    sub_0803E4E4();
  }
  return;
}


/* sub_0803EBFC @ 0x0803EBFC */

void sub_0803EBFC(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 2) + -1;
  *(char *)(param_2 + 2) = cVar1;
  if (cVar1 == '\0') {
    sub_0803E4E4();
  }
  return;
}


/* sub_0803EC10 @ 0x0803EC10 */

void sub_0803EC10(int param_1)

{
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_1 + 0x5e);
  *(undefined4 *)(param_1 + 0x54) = 0x803ebf9;
  *(byte *)(param_1 + 0x4a) = (*(byte *)(param_1 + 0x4a) & 0xfc) + 2;
  return;
}


/* sub_0803EC2A @ 0x0803EC2A */

void sub_0803EC2A(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  *(char *)(param_1 + 4) = (char)param_2;
  uVar1 = __16__rt_sdiv(param_2,40000);
  *(undefined2 *)(param_1 + 6) = uVar1;
  return;
}


/* sub_0803EC3C @ 0x0803EC3C */

void sub_0803EC3C(int param_1)

{
  sub_0803E4E4();
  DAT_030038a8 = *(undefined1 *)(param_1 + 0x5e);
  DAT_030038aa = __16__rt_sdiv(DAT_030038a8,40000);
  return;
}


/* sub_0803EC5A @ 0x0803EC5A */

void sub_0803EC5A(int param_1)

{
  byte bVar1;
  
  sub_0803E4E4();
  if ((*(byte *)(param_1 + 0x58) & 0x11) != 0) {
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x5e);
  if ((bVar1 & 0xf) != 0) {
    *(byte *)(param_1 + 0x50) = bVar1 & 0xf;
  }
  if (((uint)bVar1 << 0x18) >> 0x1c != 0) {
    *(byte *)(param_1 + 0x4f) = bVar1 >> 4;
  }
  *(undefined4 *)(param_1 + 0x54) = 0x803e8bd;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  sub_0803E8BC(param_1);
  return;
}


/* sub_0803ECA2 @ 0x0803ECA2 */

void sub_0803ECA2(void)

{
  return;
}


/* sub_0803ECA4 @ 0x0803ECA4 */

void sub_0803ECA4(void)

{
  return;
}


/* sub_0803ECA6 @ 0x0803ECA6 */

void sub_0803ECA6(int param_1)

{
  sub_0803E4E4();
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_1 + 0x5e);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x5e);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  return;
}


/* sub_0803ECC2 @ 0x0803ECC2 */

void sub_0803ECC2(void)

{
  return;
}


/* sub_0803ECC4 @ 0x0803ECC4 */

void sub_0803ECC4(void)

{
  return;
}


/* sub_0803ECC6 @ 0x0803ECC6 */

void sub_0803ECC6(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087B6A04 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5db;
    sub_0803E5DA();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar3 >> 0x18);
  if (0x3f < iVar3 >> 0x18) {
    *(undefined1 *)(param_1 + 0x48) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_0803ECCA @ 0x0803ECCA */

void sub_0803ECCA(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087B6A04 + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5db;
    sub_0803E5DA();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) + (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (0x3f < iVar3 >> 0x18) {
    *(undefined1 *)(param_2 + 8) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_0803ED2A @ 0x0803ED2A */

void sub_0803ED2A(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087B6C84 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5db;
    sub_0803E5DA();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar3 >> 0x18);
  if (0x3f < iVar3 >> 0x18) {
    *(undefined1 *)(param_1 + 0x48) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_0803ED2E @ 0x0803ED2E */

void sub_0803ED2E(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087B6C84 + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5db;
    sub_0803E5DA();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) + (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (0x3f < iVar3 >> 0x18) {
    *(undefined1 *)(param_2 + 8) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_0803EDBC @ 0x0803EDBC */

void sub_0803EDBC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087B6A04 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar2 < uVar4) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5ad;
    sub_0803E5AC();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_1 + 0x48) - (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar3 >> 0x18);
  if (iVar3 >> 0x18 < 1) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_0803EDC0 @ 0x0803EDC0 */

void sub_0803EDC0(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087B6A04 + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0xe;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar2 < uVar4) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5ad;
    sub_0803E5AC();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) - (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (iVar3 >> 0x18 < 1) {
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_0803EE20 @ 0x0803EE20 */

void sub_0803EE20(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087B6C84 + (uint)*(byte *)(param_1 + 0x4d) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5ad;
    sub_0803E5AC();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_1 + 0x48) - (uint)*(byte *)(param_1 + 0x4b)) * 0x1000000;
  *(char *)(param_1 + 0x48) = (char)((uint)iVar3 >> 0x18);
  if (iVar3 >> 0x18 < 1) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_0803EE24 @ 0x0803EE24 */

void sub_0803EE24(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(&gUnknown_087B6C84 + (uint)*(byte *)(param_2 + 0xd) * 2) *
          *(int *)(param_1 + 0x40) >> 0x10;
  *(uint *)(param_1 + 0x40) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 2;
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar4 < uVar2) {
    *(uint *)(param_1 + 0x40) = uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(byte *)(param_1 + 0x10) = bVar1 | 2;
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xf7;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5ad;
    sub_0803E5AC();
    return;
  }
  iVar3 = ((uint)*(byte *)(param_2 + 8) - (uint)*(byte *)(param_2 + 0xb)) * 0x1000000;
  *(char *)(param_2 + 8) = (char)((uint)iVar3 >> 0x18);
  if (iVar3 >> 0x18 < 1) {
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 8);
  *(byte *)(param_1 + 0x10) = bVar1 | 0x12;
  return;
}


/* sub_0803EE84 @ 0x0803EE84 */

void sub_0803EE84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x4a) >> 2;
  *(byte *)(param_1 + 0x4a) = bVar1 << 2;
  if (((int)((uint)bVar1 << 0x1f) < 0) && (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x40))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x40);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  if (*(byte *)(param_1 + 0x58) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x5d);
    if ((*(byte *)(param_1 + 0x58) & 0x88) == 0) {
      uVar2 = 0;
    }
    __call_via_r1(param_1,(&gUnknown_087B6904)[uVar2],&gUnknown_087B6904,0x88,param_4);
  }
  return;
}


/* sub_0803EEC8 @ 0x0803EEC8 */

void sub_0803EEC8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x4a);
  if (((*(byte *)(param_1 + 0x4a) & 3) != 0) && (((uVar1 & 3) != 1 || ((int)(uVar1 << 0x1d) < 0))))
  {
    __call_via_r1(param_1,*(undefined4 *)(param_1 + 0x54),uVar1,param_4,param_4);
  }
  return;
}


/* sub_0803EEE4 @ 0x0803EEE4 */

void sub_0803EEE4(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(char *)(param_1 + 1) + 1;
  *(byte *)(param_1 + 1) = bVar1;
  if (*(byte *)(param_1 + 2) <= bVar1) {
    iVar6 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar6;
    piVar2 = *(int **)(param_1 + 0xc);
    if (*(char *)(piVar2[1] + iVar6) == -1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    puVar3 = *(undefined1 **)(*piVar2 + (uint)*(byte *)(piVar2[1] + *(int *)(param_1 + 0x10)) * 4);
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
    *(undefined1 *)(param_1 + 2) = *puVar3;
  }
  iVar6 = 0;
  do {
    iVar7 = iVar6 * 0x60;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar7 + param_1 + 0x70) = 0;
  } while (iVar6 < 0xf);
  while( true ) {
    pbVar4 = *(byte **)(param_1 + 0x14);
    *(byte **)(param_1 + 0x14) = pbVar4 + 1;
    bVar1 = *pbVar4;
    if (bVar1 == 0) break;
    iVar6 = ((bVar1 & 0xf) - 1) * 0x60 + param_1;
    uVar5 = (uint)(bVar1 >> 4);
    if (uVar5 == 0) {
      *(byte **)(param_1 + 0x14) = pbVar4 + 2;
      bVar1 = pbVar4[1];
      *(byte *)(iVar6 + 0x71) = bVar1;
      *(byte *)(iVar6 + 0x70) = bVar1;
    }
    else if (uVar5 == 1) {
      *(undefined1 *)(iVar6 + 0x70) = *(undefined1 *)(iVar6 + 0x71);
    }
    else {
      *(undefined1 *)(iVar6 + 0x70) =
           *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc) + uVar5 + -2);
    }
    uVar5 = (uint)*(byte *)(iVar6 + 0x70);
    if ((int)(uVar5 << 0x1f) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x72) = *puVar3;
    }
    if ((int)(uVar5 << 0x1e) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x73) = *puVar3;
    }
    if ((int)(uVar5 << 0x1d) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x74) = *puVar3;
    }
    if ((int)(uVar5 << 0x1c) < 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x75) = *puVar3;
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *(undefined1 **)(param_1 + 0x14) = puVar3 + 1;
      *(undefined1 *)(iVar6 + 0x76) = *puVar3;
    }
  }
  return;
}


/* sub_0803EFD0 @ 0x0803EFD0 */

void sub_0803EFD0(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  cVar1 = *param_1;
  *param_1 = cVar1 + -1;
  if ((char)(cVar1 + -1) == '\0') {
    sub_0803EEE4(param_1);
    iVar3 = 0;
    do {
      sub_0803EE84(param_1 + iVar3 * 0x60 + 0x18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xf);
    *param_1 = param_1[3];
  }
  else {
    iVar3 = 0;
    do {
      bVar2 = param_1[iVar3 * 0x60 + 0x62];
      if (((bVar2 & 3) != 0) && (((bVar2 & 3) != 1 || ((int)((uint)bVar2 << 0x1d) < 0)))) {
        __call_via_r1(param_1 + iVar3 * 0x60 + 0x18,*(undefined4 *)(param_1 + iVar3 * 0x60 + 0x6c));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xf);
  }
  iVar3 = 0;
  do {
    sub_0803E0B6(param_1 + iVar3 * 0x60 + 0x18);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xf);
  return;
}


/* sub_0803F058 @ 0x0803F058 */

void sub_0803F058(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0803E152(iVar1 * 0x60 + param_1 + 0x18,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xf);
  return;
}


/* sub_0803F07C @ 0x0803F07C */

void sub_0803F07C(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    while (uVar1 = (uint)*(ushort *)(param_1 + 8), (int)uVar1 < param_3) {
      if (uVar1 != 0) {
        iVar2 = 0;
        do {
          sub_0803E152(iVar2 * 0x60 + param_1 + 0x18,param_2,uVar1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xf);
        param_2 = (uint)*(ushort *)(param_1 + 8) * 4 + param_2;
        param_3 = param_3 - (uint)*(ushort *)(param_1 + 8);
      }
      sub_0803EFD0(param_1);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 6);
    }
    iVar2 = 0;
    do {
      sub_0803E152(iVar2 * 0x60 + param_1 + 0x18,param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xf);
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) - (short)param_3;
  }
  return;
}


/* sub_0803F0E6 @ 0x0803F0E6 */

void sub_0803F0E6(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x60 + param_1;
    *(undefined1 *)(iVar2 + 0x62) = 0;
    *(undefined1 *)(iVar2 + 0x77) = 0;
    *(undefined1 *)(iVar2 + 0x70) = 0;
    *(undefined1 *)(iVar2 + 0x28) = 0;
    iVar1 = iVar1 + 1;
    *(int *)(iVar2 + 0x44) = iVar2 + 0x18;
  } while (iVar1 < 0xf);
  return;
}


/* sub_0803F110 @ 0x0803F110 */

void sub_0803F110(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  param_1[2] = 1;
  *param_1 = 1;
  param_1[1] = 0;
  *(int *)(param_1 + 0xc) = param_2;
  param_1[3] = *(undefined1 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  iVar3 = 0;
  do {
    param_1[iVar3 * 0x60 + 0x62] = 0;
    param_1[iVar3 * 0x60 + 0x77] = 0;
    param_1[iVar3 * 0x60 + 0x70] = 0;
    param_1[iVar3 * 0x60 + 0x28] = 0;
    iVar4 = iVar3 + 1;
    *(undefined1 **)(param_1 + iVar3 * 0x60 + 0x44) = param_1 + iVar3 * 0x60 + 0x18;
    iVar3 = iVar4;
  } while (iVar4 < 0xf);
  uVar1 = *(undefined1 *)(param_2 + 0x10);
  param_1[4] = uVar1;
  uVar2 = __16__rt_sdiv(uVar1,40000);
  *(undefined2 *)(param_1 + 6) = uVar2;
  param_1[5] = 1;
  return;
}


/* sub_0803F15A @ 0x0803F15A */

void sub_0803F15A(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    param_1[iVar1 * 0x60 + 0x62] = 0;
    param_1[iVar1 * 0x60 + 0x77] = 0;
    param_1[iVar1 * 0x60 + 0x70] = 0;
    param_1[iVar1 * 0x60 + 0x28] = 0;
    iVar2 = iVar1 + 1;
    *(undefined1 **)(param_1 + iVar1 * 0x60 + 0x44) = param_1 + iVar1 * 0x60 + 0x18;
    iVar1 = iVar2;
  } while (iVar2 < 0xf);
  param_1[1] = param_1[2];
  *param_1 = 1;
  return;
}


/* sub_0803F15E @ 0x0803F15E */

void sub_0803F15E(undefined1 *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  do {
    param_1[param_2 * 0x60 + 0x62] = param_3;
    param_1[param_2 * 0x60 + 0x77] = param_3;
    param_1[param_2 * 0x60 + 0x70] = param_3;
    param_1[param_2 * 0x60 + 0x28] = param_3;
    iVar1 = param_2 + 1;
    *(undefined1 **)(param_1 + param_2 * 0x60 + 0x44) = param_1 + param_2 * 0x60 + 0x18;
    param_2 = iVar1;
  } while (iVar1 < 0xf);
  param_1[1] = param_1[2];
  *param_1 = 1;
  return;
}


/* sub_0803F18C @ 0x0803F18C */

void sub_0803F18C(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 0x60 + param_1;
    *(undefined1 *)(iVar2 + 0x4c) = param_2;
    iVar1 = iVar1 + 1;
    *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x10;
  } while (iVar1 < 0xf);
  return;
}


/* sub_0803F1B8 @ 0x0803F1B8 */

void sub_0803F1B8(undefined4 *param_1)

{
  ushort uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  sub_0804912C(0x2000000,0,0x800);
  sub_0803E3E4();
  sub_0803F0E6(param_1 + 3);
  REG_SOUNDCNT_X = 0x80;
  Ram04000082 = 0x9a0e;
  Ram040000bc = 0x2000000;
  Ram040000c0 = 0x40000a0;
  Ram040000c4 = 4;
  DAT_040000c6 = 0xb660;
  Ram040000c8 = 0x2000600;
  Ram040000cc = 0x40000a4;
  Ram040000d0 = 4;
  DAT_040000d2 = 0xf660;
  Ram04000080 = 0;
                    /* WARNING: Read-only address (ram,0x03000fd8) is written */
  DAT_03000fd8 = &_03000AE0;
  uVar1 = REG_IE;
  REG_IE = uVar1 | 0x400;
  REG_TM0CNT = 0xfbe6;
  DAT_04000102 = 0x80;
  sub_0803F18C(param_1 + 3,4);
  sub_0803E42A(param_1 + 0x171,8);
  return;
}


/* sub_0803F24A @ 0x0803F24A */

void sub_0803F24A(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F3F4(&DAT_03000fb0,0x400,param_3,param_4,param_4);
  DAT_04000102 = 0;
  DAT_040000c6 = 0;
  DAT_040000d2 = 0;
  REG_SOUNDCNT_X = 0;
  return;
}


/* sub_0803F26A @ 0x0803F26A */

void sub_0803F26A(void)

{
  DAT_04000102 = 0;
  DAT_040000c6 = 0;
  DAT_040000d2 = 0;
  return;
}


/* sub_0803F278 @ 0x0803F278 */

void sub_0803F278(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F3F4(&DAT_03000fb0,0x400,param_3,param_4,param_4);
  DAT_04000102 = 0;
  return;
}


/* sub_0803F28E @ 0x0803F28E */

void sub_0803F28E(void)

{
  DAT_04000102 = 0x80;
  return;
}


/* sub_0803F296 @ 0x0803F296 */

void sub_0803F296(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint a3;
  undefined4 *a2;
  uint local_24;
  
  *param_1 = 1;
  uVar2 = param_1[2];
  local_24 = param_1[1] - uVar2 & 0x3ff;
  if (0x3f < local_24) {
    param_1[2] = param_1[1];
    sub_0803E3F6();
    a2 = param_1 + 0x271;
    do {
      a3 = local_24;
      if (0x200 < (int)local_24) {
        a3 = 0x200;
      }
      sub_0803F07C(param_1 + 3,a2,a3);
      sub_0803E40C(param_1 + 0x171,a2,a3);
      uVar1 = uVar2 + a3;
      if ((int)uVar1 < 0x401) {
        if ((int)uVar2 < 0x200) {
          if ((int)uVar1 < 0x201) {
            sub_080491B4(uVar2 + 0x2000000,(int)(&DAT_02000600 + uVar2),(int)a2,a3);
          }
          else {
            sub_080491B4(uVar2 + 0x2000000,(int)(&DAT_02000600 + uVar2),(int)a2,-uVar2 + 0x200);
            sub_080491B4(0x2000200,0x2000400,(int)(param_1 + -uVar2 + 0x471),uVar1 - 0x200);
          }
        }
        else {
          sub_080491B4(uVar2 + 0x2000000,(int)(&DAT_02000200 + uVar2),(int)a2,a3);
        }
      }
      else {
        sub_080491B4(uVar2 + 0x2000000,(int)(&DAT_02000200 + uVar2),(int)a2,-uVar2 + 0x400);
        sub_080491B4(0x2000000,0x2000600,(int)(param_1 + -uVar2 + 0x671),uVar1 - 0x400);
      }
      uVar2 = uVar1 & 0x3ff;
      local_24 = local_24 - a3;
    } while (local_24 != 0);
  }
  *param_1 = 0;
  return;
}


/* sub_0803F3D8 @ 0x0803F3D8 */

void sub_0803F3D8(void)

{
  return;
}


/* sub_0803F3DA @ 0x0803F3DA */

void sub_0803F3DA(void)

{
  DAT_03007ffc = &_03000B6C;
  REG_IE = 0x2000;
  REG_IME = 1;
  REG_DISPSTAT = 0x18;
  return;
}


/* sub_0803F3F4 @ 0x0803F3F4 */

void sub_0803F3F4(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  
  if ((int)(param_2 << 0x1f) < 0) {
    if ((int)((uint)*(ushort *)(param_1 + 0x38) << 0x1f) < 0) {
      *(undefined4 *)(param_1 + 0x3c) = 100;
    }
    else {
      bVar1 = REG_VCOUNT._0_1_;
      iVar2 = bVar1 - 0xa0;
      if (iVar2 < 0) {
        iVar2 = bVar1 + 0x43;
      }
      *(int *)(param_1 + 0x3c) = iVar2 * 0x70e4 >> 0x10;
    }
  }
  *(undefined2 *)(param_1 + 0x38) = 0;
  do {
    software_interrupt(2);
  } while (((int)*(short *)(param_1 + 0x38) & param_2) == 0);
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & ~(ushort)param_2;
  return;
}


/* sub_0803F444 @ 0x0803F444 */

void sub_0803F444(int param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  piVar4 = *(int **)(param_1 + 0xc);
  if (param_2 < 0xff) {
    if (*(short *)(*piVar4 + param_2 * 2) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
    if (0x1d9c < param_2) {
      bVar2 = false;
    }
  }
  if (bVar2) {
    if (param_2 < 0xff) {
      puVar8 = (ushort *)((uint)*(ushort *)(*piVar4 + param_2 * 2) * 2 + *piVar4);
      uVar7 = (uint)*puVar8;
      puVar8 = puVar8 + 1;
    }
    else {
      uVar7 = piVar4[1];
      puVar8 = (ushort *)(piVar4[2] + (param_2 - 0x100) * uVar7 * 2);
    }
    iStack_20 = param_3[1];
    iStack_24 = *param_3;
    iStack_1c = iStack_24 + uVar7;
    iStack_18 = iStack_20 + 0x10;
    sub_08053250(&iStack_34,&iStack_24,param_1 + 0x10);
    if ((iStack_34 < iStack_2c) && (iStack_30 < iStack_28)) {
      iVar6 = param_3[1];
      puVar8 = puVar8 + (iStack_34 - *param_3);
      puVar9 = (undefined1 *)
               (*(int *)(param_1 + 0x28) * iStack_30 + *(int *)(param_1 + 0x24) + iStack_34);
      iVar10 = 0;
      if (0 < iStack_2c - iStack_34) {
        do {
          uVar1 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar5 = puVar9;
          for (uVar3 = (uint)(uVar1 >> (iStack_30 - iVar6 & 0xffU)) &
                       (1 << (iStack_28 - iStack_30 & 0xffU)) - 1U; uVar3 != 0;
              uVar3 = (int)uVar3 >> 1) {
            if ((int)(uVar3 << 0x1f) < 0) {
              *puVar5 = *(undefined1 *)(param_1 + 3);
            }
            puVar5 = puVar5 + *(int *)(param_1 + 0x28);
          }
          iVar10 = iVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar10 < iStack_2c - iStack_34);
      }
    }
    *param_3 = *param_3 + uVar7 + 1;
  }
  return;
}


/* sub_0803F540 @ 0x0803F540 */

int sub_0803F540(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((param_1 != 0) || (param_1 = sub_0803D5B8(0x34), param_1 != 0)) {
    uStack_24 = 0;
    uStack_20 = 0;
    iStack_1c = param_2;
    iStack_18 = param_3;
    sub_0803DA78(param_1,0,&uStack_24);
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = param_3;
    *(int *)(param_1 + 0x30) = param_3 * param_2;
    uVar1 = sub_0803D5B8();
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = 0x803f445;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return param_1;
}


/* sub_0803F58C @ 0x0803F58C */

void sub_0803F58C(int param_1,int param_2)

{
  sub_0803D63C(*(undefined4 *)(param_1 + 0x24));
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0803F5A4 @ 0x0803F5A4 */

void sub_0803F5A4(int param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  uint *puVar12;
  uint *puStack_148;
  uint auStack_144 [32];
  uint auStack_c4 [32];
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ushort *puStack_18;
  
  piVar7 = *(int **)(param_1 + 0xc);
  if (param_2 < 0xff) {
    if (*(short *)(*piVar7 + param_2 * 2) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
    if (0x1d9c < param_2) {
      bVar3 = false;
    }
  }
  if (bVar3) {
    if (param_2 < 0xff) {
      puStack_18 = (ushort *)((uint)*(ushort *)(*piVar7 + param_2 * 2) * 2 + *piVar7);
      uVar9 = (uint)*puStack_18;
      puStack_18 = puStack_18 + 1;
    }
    else {
      uVar9 = piVar7[1];
      puStack_18 = (ushort *)(piVar7[2] + (param_2 - 0x100) * uVar9 * 2);
    }
    iStack_24 = param_3[1];
    iStack_28 = *param_3;
    iStack_20 = iStack_28 + uVar9 + 1;
    iStack_1c = iStack_24 + 0x11;
    sub_08053250(&iStack_38,&iStack_28,param_1 + 0x10);
    if ((iStack_38 < iStack_30) && (iStack_34 < iStack_2c)) {
      iStack_3c = iStack_30 - iStack_38;
      uStack_44 = (1 << (iStack_2c - iStack_34 & 0xffU)) - 1;
      iVar4 = 0;
      uStack_40 = iStack_34 - param_3[1];
      iVar11 = iVar4;
      if (0 < (int)uVar9) {
        do {
          uVar1 = puStack_18[iVar11];
          auStack_c4[iVar11] = (uint)uVar1;
          iVar4 = iVar11 + 1;
          auStack_144[iVar11 + 1] = (uint)uVar1 << 1;
          iVar11 = iVar4;
        } while (iVar4 < (int)uVar9);
      }
      auStack_c4[iVar4] = 0;
      puStack_148 = auStack_144 + (iStack_38 - *param_3);
      puVar10 = (undefined1 *)
                (*(int *)(param_1 + 0x28) * iStack_34 + *(int *)(param_1 + 0x24) + iStack_38);
      puVar12 = auStack_c4 + (iStack_38 - *param_3);
      iVar11 = 0;
      if (0 < iStack_3c) {
        do {
          uVar5 = *puVar12;
          puVar12 = puVar12 + 1;
          uVar5 = uVar5 >> (uStack_40 & 0xff) & uStack_44;
          uVar6 = *puStack_148;
          puStack_148 = puStack_148 + 1;
          uVar6 = uVar6 >> (uStack_40 & 0xff) & uStack_44;
          puVar8 = puVar10;
          if (uVar5 != 0 || uVar6 != 0) {
            do {
              if ((int)(uVar5 << 0x1f) < 0) {
                *puVar8 = *(undefined1 *)(param_1 + 3);
              }
              else if ((int)(uVar6 << 0x1f) < 0) {
                *puVar8 = *(undefined1 *)(param_1 + 2);
              }
              puVar8 = puVar8 + *(int *)(param_1 + 0x28);
              uVar2 = uVar5 | uVar6;
              uVar5 = uVar5 >> 1;
              uVar6 = uVar6 >> 1;
            } while (uVar2 >> 1 != 0);
          }
          iVar11 = iVar11 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar11 < iStack_3c);
      }
    }
    *param_3 = *param_3 + uVar9 + 1;
  }
  return;
}


/* sub_0803F600 @ 0x0803F600 */

void sub_0803F600(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puStack00000000;
  undefined4 in_stack_00000004;
  uint in_stack_00000104;
  uint in_stack_00000108;
  int in_stack_0000010c;
  int in_stack_00000110;
  int in_stack_00000114;
  int in_stack_00000118;
  int in_stack_0000011c;
  int iStack00000120;
  int iStack00000124;
  int iStack00000128;
  int iStack0000012c;
  int in_stack_00000130;
  
  iStack00000128 = param_2 + unaff_r5 + 1;
  iStack0000012c = param_1 + 0x11;
  iStack00000120 = param_2;
  iStack00000124 = param_1;
  sub_08053250(&stack0x00000110,&stack0x00000120,unaff_r4 + 0x10);
  if ((in_stack_00000110 < in_stack_00000118) && (in_stack_00000114 < in_stack_0000011c)) {
    in_stack_0000010c = in_stack_00000118 - in_stack_00000110;
    in_stack_00000104 = (unaff_r7 << (in_stack_0000011c - in_stack_00000114 & 0xffU)) - 1;
    iVar2 = 0;
    in_stack_00000108 = in_stack_00000114 - unaff_r6[1];
    if (0 < unaff_r5) {
      do {
        uVar3 = (uint)*(ushort *)(in_stack_00000130 + iVar2 * 2);
        iVar5 = iVar2 * 4;
        *(uint *)(&stack0x00000084 + iVar5) = uVar3;
        iVar2 = iVar2 + 1;
        *(uint *)(&stack0x00000008 + iVar5) = uVar3 << 1;
      } while (iVar2 < unaff_r5);
    }
    *(undefined4 *)(&stack0x00000084 + iVar2 * 4) = 0;
    puStack00000000 = &stack0x00000004 + (in_stack_00000110 - *unaff_r6);
    puVar7 = (undefined1 *)
             (*(int *)(unaff_r4 + 0x28) * in_stack_00000114 + *(int *)(unaff_r4 + 0x24) +
             in_stack_00000110);
    puVar8 = (uint *)(&stack0x00000084 + *unaff_r6 * -4 + in_stack_00000110 * 4);
    iVar2 = 0;
    if (0 < in_stack_0000010c) {
      do {
        uVar3 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar3 = uVar3 >> (in_stack_00000108 & 0xff) & in_stack_00000104;
        uVar4 = *puStack00000000;
        puStack00000000 = puStack00000000 + 1;
        uVar4 = uVar4 >> (in_stack_00000108 & 0xff) & in_stack_00000104;
        puVar6 = puVar7;
        if (uVar3 != 0 || uVar4 != 0) {
          do {
            if ((int)(uVar3 << 0x1f) < 0) {
              *puVar6 = *(undefined1 *)(unaff_r4 + 3);
            }
            else if ((int)(uVar4 << 0x1f) < 0) {
              *puVar6 = *(undefined1 *)(unaff_r4 + 2);
            }
            puVar6 = puVar6 + *(int *)(unaff_r4 + 0x28);
            uVar1 = uVar3 | uVar4;
            uVar3 = uVar3 >> 1;
            uVar4 = uVar4 >> 1;
          } while (uVar1 >> 1 != 0);
        }
        iVar2 = iVar2 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar2 < in_stack_0000010c);
    }
  }
  *unaff_r6 = *unaff_r6 + unaff_r5 + 1;
  return;
}


/* sub_0803F70C @ 0x0803F70C */

void sub_0803F70C(int param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint *puStack_148;
  uint auStack_144 [32];
  uint auStack_c4 [32];
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ushort *puStack_18;
  
  piVar7 = *(int **)(param_1 + 0xc);
  if (param_2 < 0xff) {
    if (*(short *)(*piVar7 + param_2 * 2) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
    if (0x1d9c < param_2) {
      bVar2 = false;
    }
  }
  if (bVar2) {
    if (param_2 < 0xff) {
      puStack_18 = (ushort *)((uint)*(ushort *)(*piVar7 + param_2 * 2) * 2 + *piVar7);
      uVar9 = (uint)*puStack_18;
      puStack_18 = puStack_18 + 1;
    }
    else {
      uVar9 = piVar7[1];
      puStack_18 = (ushort *)(piVar7[2] + (param_2 - 0x100) * uVar9 * 2);
    }
    iStack_24 = param_3[1];
    iStack_28 = *param_3 + -1;
    iStack_20 = iStack_28 + uVar9 + 2;
    iStack_1c = iStack_24 + 0x11;
    sub_08053250(&iStack_38,&iStack_28,param_1 + 0x10);
    if ((iStack_38 < iStack_30) && (iStack_34 < iStack_2c)) {
      iStack_3c = iStack_30 - iStack_38;
      uStack_44 = (1 << (iStack_2c - iStack_34 & 0xffU)) - 1;
      uStack_40 = iStack_34 - param_3[1];
      iVar3 = 0;
      auStack_144[1] = 0;
      auStack_144[0] = 0;
      iVar5 = iVar3;
      if (0 < (int)uVar9) {
        do {
          uVar1 = puStack_18[iVar5];
          uVar4 = (uint)uVar1;
          auStack_c4[iVar5] = uVar4;
          auStack_144[iVar5] = auStack_144[iVar5] | uVar4;
          auStack_144[iVar5 + 2] = uVar4;
          iVar3 = iVar5 + 1;
          auStack_144[iVar5 + 1] = (uint)(uVar1 >> 1) | uVar4 << 1 | auStack_144[iVar5 + 1];
          iVar5 = iVar3;
        } while (iVar3 < (int)uVar9);
      }
      auStack_c4[iVar3] = 0;
      iVar5 = iStack_38 - *param_3;
      puStack_148 = auStack_144 + iVar5;
      puVar11 = auStack_c4 + iVar5;
      puVar10 = (undefined1 *)
                (*(int *)(param_1 + 0x28) * iStack_34 + *(int *)(param_1 + 0x24) + iStack_38);
      uVar4 = 0;
      if (-1 < iVar5) {
        uVar4 = *puVar11 >> (uStack_40 & 0xff) & uStack_44;
      }
      iVar5 = 0;
      if (0 < iStack_3c) {
        do {
          puStack_148 = puStack_148 + 1;
          uVar6 = *puStack_148 >> (uStack_40 & 0xff) & uStack_44;
          puVar8 = puVar10;
          if (uVar4 != 0 || uVar6 != 0) {
            do {
              if ((int)(uVar4 << 0x1f) < 0) {
                *puVar8 = *(undefined1 *)(param_1 + 3);
              }
              else if ((int)(uVar6 << 0x1f) < 0) {
                *puVar8 = *(undefined1 *)(param_1 + 2);
              }
              uVar4 = uVar4 >> 1;
              uVar6 = (int)uVar6 >> 1;
              puVar8 = puVar8 + *(int *)(param_1 + 0x28);
            } while (uVar4 != 0 || uVar6 != 0);
          }
          puVar11 = puVar11 + 1;
          iVar5 = iVar5 + 1;
          uVar4 = *puVar11 >> (uStack_40 & 0xff) & uStack_44;
          puVar10 = puVar10 + 1;
        } while (iVar5 < iStack_3c);
      }
    }
    *param_3 = *param_3 + uVar9 + 1;
  }
  return;
}


/* sub_0803F89A @ 0x0803F89A */

void sub_0803F89A(int param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  ushort *puVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  pcVar5 = (char *)(*(int *)(param_1 + 0x28) * param_3[1] + *(int *)(param_1 + 0x24) + *param_3);
  puVar4 = param_2 + 2;
  if (param_2[1] != 0) {
    do {
      iVar3 = 0;
      pcVar2 = pcVar5;
      if (*param_2 != 0) {
        do {
          uVar1 = *puVar4;
          puVar4 = (ushort *)((int)puVar4 + 1);
          if ((char)uVar1 != '\0') {
            *pcVar2 = (char)uVar1;
          }
          pcVar2 = pcVar2 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)*param_2);
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + *(int *)(param_1 + 0x28);
    } while (iVar6 < (int)(uint)param_2[1]);
  }
  return;
}


/* sub_0803F8E2 @ 0x0803F8E2 */

void sub_0803F8E2(int param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_3[2] - *param_3;
  iVar5 = param_3[3] - param_3[1];
  if (iVar5 * iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    pcVar2 = (char *)(iVar3 * param_3[1] + *(int *)(param_1 + 0x24) + *param_3);
    iVar6 = iVar4;
    do {
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        if (cVar1 != '\0') {
          *pcVar2 = cVar1;
        }
        pcVar2 = pcVar2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pcVar2 = pcVar2 + (iVar3 - iVar4);
      param_2 = param_2 + (param_4 - iVar4);
      iVar5 = iVar5 + -1;
      iVar6 = iVar4;
    } while (iVar5 != 0);
  }
  return;
}


/* sub_0803F8FC @ 0x0803F8FC */

void sub_0803F8FC(int param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar3;
  int unaff_r7;
  
  pcVar2 = (char *)(unaff_r7 + param_1 + unaff_r6);
  iVar3 = unaff_r4;
  do {
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if (cVar1 != '\0') {
        *pcVar2 = cVar1;
      }
      pcVar2 = pcVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    pcVar2 = pcVar2 + (param_3 - unaff_r4);
    param_2 = param_2 + (param_4 - unaff_r4);
    unaff_r5 = unaff_r5 + -1;
    iVar3 = unaff_r4;
  } while (unaff_r5 != 0);
  return;
}


/* sub_0803F922 @ 0x0803F922 */

void sub_0803F922(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x28);
  pcVar2 = (char *)(iVar3 * param_3[1] + *(int *)(param_1 + 0x24) + *param_3);
  iVar6 = param_3[2] - *param_3;
  iVar5 = param_3[3] - param_3[1];
  iVar4 = iVar6;
  do {
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if (cVar1 != '\0') {
        *pcVar2 = cVar1;
      }
      pcVar2 = pcVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pcVar2 = pcVar2 + (iVar3 - iVar6);
    iVar5 = iVar5 + -1;
    iVar4 = iVar6;
  } while (iVar5 != 0);
  return;
}


/* sub_0803F95C @ 0x0803F95C */

void sub_0803F95C(int param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  pcVar1 = *(char **)(param_1 + 0x24);
  do {
    if (*pcVar1 == '\0') {
      *pcVar1 = param_2;
    }
    pcVar1 = pcVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* sub_0803F974 @ 0x0803F974 */

void sub_0803F974(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2[2];
  iVar1 = *param_2;
  iVar3 = param_2[1];
  iVar4 = *(int *)(param_1 + 0x28) * iVar3 + *(int *)(param_1 + 0x24) + iVar1;
  if (iVar3 < param_2[3]) {
    do {
      sub_08046E40(iVar4,param_3,iVar2 - iVar1);
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x28) + iVar4;
    } while (iVar3 < param_2[3]);
  }
  return;
}


/* sub_0803F9B8 @ 0x0803F9B8 */

void sub_0803F9B8(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_8 = *(undefined4 *)(param_1 + 0x2c);
  uStack_c = *(undefined4 *)(param_1 + 0x28);
  sub_0804915C(param_1,param_2,(int)&local_14);
  return;
}


/* sub_0803F9C8 @ 0x0803F9C8 */

void sub_0803F9C8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack0000000c;
  
  uStack0000000c = param_4;
  sub_0804915C(param_1,param_2,(int)&stack0x00000004);
  return;
}


/* sub_0803F9D4 @ 0x0803F9D4 */

void sub_0803F9D4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int a0;
  int iVar3;
  
  iVar2 = param_2[2];
  iVar1 = *param_2;
  a0 = *(int *)(param_1 + 0x28) * param_2[1] + *(int *)(param_1 + 0x24) + iVar1;
  for (iVar3 = param_2[3] - param_2[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
    sub_0804918C(a0,a0,param_3,iVar2 - iVar1);
    a0 = *(int *)(param_1 + 0x28) + a0;
  }
  return;
}


/* sub_0803FA0A @ 0x0803FA0A */

void sub_0803FA0A(void)

{
  sub_0803F24A(&DAT_03003898);
  REG_IME = 0;
  REG_DISPCNT = 0x80;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  software_interrupt(0);
  return;
}


/* sub_0803FA0C @ 0x0803FA0C */

void sub_0803FA0C(void)

{
  sub_0803F24A(&DAT_03003898);
  REG_IME = 0;
  REG_DISPCNT = 0x80;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  software_interrupt(0);
  return;
}


/* sub_0803FA38 @ 0x0803FA38 */

void sub_0803FA38(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar2 = REG_IE;
  uVar1 = REG_DISPCNT;
  iVar3 = 0;
  REG_DISPCNT = 0x80;
  do {
    sub_0803F3F4(&DAT_03000fb0,1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  REG_IE = 0x3000;
  REG_KEYCNT = 0xc304;
  software_interrupt(3);
  REG_IE = uVar2;
  REG_KEYCNT = 0;
  REG_DISPCNT = uVar1;
  do {
    sub_0803F3F4(&DAT_03000fb0,1);
    sub_0803D4A0(&DAT_03003300);
  } while ((DAT_03003302 & 0x304) != 0);
  return;
}


/* sub_0803FAAC @ 0x0803FAAC */

int sub_0803FAAC(void)

{
  DAT_03004a5c = DAT_03004a5c + 0x2cbbc71 ^ DAT_03004a60;
  DAT_03004a60 = (DAT_03004a60 >> 0x1d | DAT_03004a60 << 3) + 0x632d80f ^ DAT_03004a5c;
  return DAT_03004a5c - DAT_03004a60;
}


/* sub_0803FACC @ 0x0803FACC */

uint sub_0803FACC(int param_1)

{
  uint uVar1;
  
  uVar1 = sub_0803FAAC();
  return param_1 * (uVar1 & 0xffff) >> 0x10;
}


/* sub_0803FADE @ 0x0803FADE */

undefined4 sub_0803FADE(uint param_1)

{
  uint uVar1;
  
  uVar1 = sub_0803FAAC();
  if ((uVar1 & 0xffff) < param_1) {
    return 1;
  }
  return 0;
}


/* sub_0803FAF6 @ 0x0803FAF6 */

uint sub_0803FAF6(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar1 = 0xf;
  do {
    uVar3 = (1 << (uVar1 & 0xff)) + uVar2 << (uVar1 & 0xff);
    if (uVar3 <= param_1) {
      param_1 = param_1 - uVar3;
      uVar2 = uVar2 | 2 << (uVar1 & 0xff);
    }
    uVar1 = uVar1 - 1;
  } while (-1 < (int)uVar1);
  return uVar2 >> 1;
}


/* sub_0803FB1E @ 0x0803FB1E */

uint sub_0803FB1E(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar3 = 0;
  uVar2 = 0x1f;
  do {
    iVar1 = (1 << (uVar2 & 0xff)) + uVar3;
    uVar6 = sub_08046BFC(iVar1,0,uVar2);
    cVar4 = '\0';
    sub_08046B28(param_1,param_2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    if (cVar4 != '\0') {
      uVar6 = sub_08046BFC(iVar1,0,uVar2);
      bVar5 = param_1 < (uint)uVar6;
      param_1 = param_1 - (uint)uVar6;
      param_2 = (param_2 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)bVar5;
      uVar3 = uVar3 | 2 << (uVar2 & 0xff);
    }
    uVar2 = uVar2 - 1;
  } while (-1 < (int)uVar2);
  return uVar3 >> 1;
}


/* sub_0803FB7C @ 0x0803FB7C */

void sub_0803FB7C(uint *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_080407A0(0x40);
  *param_1 = (uint)(iVar1 == 0);
  if ((iVar1 == 0) != 0) {
    iVar1 = sub_0803D5B8(0x2000);
    DAT_03004a64 = iVar1;
    sub_0803F278(&DAT_03003898);
    sub_080401DA();
    REG_IME = 0;
    iVar2 = 0;
    do {
      sub_08040868(iVar2 >> 3 & 0xffff,iVar1 + iVar2);
      iVar2 = iVar2 + 8;
    } while (iVar2 < 0x2000);
    REG_IME = 1;
    sub_080401F4();
    sub_0803F28E(&DAT_03003898);
  }
  return;
}


/* sub_0803FBDE @ 0x0803FBDE */

void sub_0803FBDE(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*param_1 != 0) {
    sub_08049144(DAT_03004a64 + param_2,param_3,param_4);
    sub_0803F278(&DAT_03003898);
    sub_080401DA();
    REG_IME = 0;
    iVar1 = 0;
    if (0 < param_4) {
      do {
        sub_08040B5C(param_2 + iVar1 >> 3 & 0xffff,param_3 + iVar1);
        iVar1 = iVar1 + 8;
      } while (iVar1 < param_4);
    }
    REG_IME = 1;
    sub_080401F4();
    sub_0803F28E(&DAT_03003898);
  }
  return;
}


/* sub_0803FC3A @ 0x0803FC3A */

void sub_0803FC3A(undefined4 param_1,int param_2,int param_3,int param_4)

{
  sub_08049144(param_2,DAT_03004a64 + param_3,param_4);
  return;
}


/* sub_0803FC4E @ 0x0803FC4E */

uint sub_0803FC4E(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_20;
  byte *pbStack_1c;
  int local_18;
  int *piVar3;
  
  local_18 = param_2;
  pbStack_1c = param_1;
  iVar5 = 0;
  uVar4 = 1;
  local_20 = 0x15b0;
  if (0 < param_2) {
    do {
      piVar3 = &local_20;
      if (local_18 < local_20) {
        piVar3 = &local_18;
      }
      iVar2 = *piVar3;
      iVar6 = local_18 - iVar2;
      for (; 0 < iVar2; iVar2 = iVar2 + -1) {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar4 = bVar1 + uVar4;
        iVar5 = iVar5 + uVar4;
      }
      local_18 = iVar6;
      uVar4 = sub_08053180(uVar4);
      iVar5 = sub_08053180(iVar5);
    } while (0 < iVar6);
  }
  return iVar5 << 0x10 | uVar4;
}


/* sub_0803FCB4 @ 0x0803FCB4 */

void sub_0803FCB4(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0x400;
  param_1[2] = 0;
  param_1[3] = 0x400;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* sub_0803FCCA @ 0x0803FCCA */

void sub_0803FCCA(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&gUnknown_087B6EEC + ((uint)(param_2 << 0x18) >> 0x16));
  iVar2 = *(int *)(&gUnknown_087B6EEC + ((uint)((param_2 + 0x40) * 0x1000000) >> 0x16));
  param_1[2] = iVar1 >> 6;
  *param_1 = iVar2 >> 6;
  param_1[1] = -(iVar1 >> 6);
  param_1[3] = iVar2 >> 6;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* sub_0803FCF4 @ 0x0803FCF4 */

void sub_0803FCF4(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)*param_2 >> 10;
  uVar1 = *param_2 & 0x3ff;
  iVar3 = (int)((0x400 - uVar1) * *(int *)(&gUnknown_087B6EEC + ((uint)(iVar2 << 0x18) >> 0x16)) +
               uVar1 * *(int *)(&gUnknown_087B6EEC + ((uint)((iVar2 + 1) * 0x1000000) >> 0x16))) >>
          0x10;
  iVar2 = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x16)) *
                (0x400 - uVar1) +
               *(int *)(&gUnknown_087B6EEC + ((uint)((iVar2 + 0x41) * 0x1000000) >> 0x16)) * uVar1)
          >> 0x10;
  *param_1 = iVar2;
  param_1[1] = -iVar3;
  param_1[2] = iVar3;
  param_1[3] = iVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* sub_0803FCF8 @ 0x0803FCF8 */

void sub_0803FCF8(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_2 >> 10;
  param_2 = param_2 & 0x3ff;
  iVar2 = (int)((0x400 - param_2) * *(int *)(&gUnknown_087B6EEC + ((uint)(iVar1 << 0x18) >> 0x16)) +
               param_2 * *(int *)(&gUnknown_087B6EEC + ((uint)((iVar1 + 1) * 0x1000000) >> 0x16)))
          >> 0x10;
  iVar1 = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)((iVar1 + 0x40) * 0x1000000) >> 0x16)) *
                (0x400 - param_2) +
               *(int *)(&gUnknown_087B6EEC + ((uint)((iVar1 + 0x41) * 0x1000000) >> 0x16)) * param_2
               ) >> 0x10;
  *param_1 = iVar1;
  param_1[1] = -iVar2;
  param_1[2] = iVar2;
  param_1[3] = iVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* sub_0803FCFC @ 0x0803FCFC */

void sub_0803FCFC(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int unaff_r4;
  int iVar2;
  
  param_2 = param_2 & 0x3ff;
  iVar2 = (int)((0x400 - param_2) * *(int *)(&gUnknown_087B6EEC + ((uint)(param_4 << 0x18) >> 0x16))
               + param_2 * *(int *)(&gUnknown_087B6EEC +
                                   ((uint)((unaff_r4 + 1) * 0x1000000) >> 0x16))) >> 0x10;
  iVar1 = (int)(*(int *)(&gUnknown_087B6EEC + ((uint)((unaff_r4 + 0x40) * 0x1000000) >> 0x16)) *
                (0x400 - param_2) +
               *(int *)(&gUnknown_087B6EEC + ((uint)((unaff_r4 + 0x41) * 0x1000000) >> 0x16)) *
               param_2) >> 0x10;
  *param_1 = iVar1;
  param_1[1] = -iVar2;
  param_1[2] = iVar2;
  param_1[3] = iVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* sub_0803FD4A @ 0x0803FD4A */

void sub_0803FD4A(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *param_2 * 0x400;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[1] * 0x400;
  return;
}


/* sub_0803FD60 @ 0x0803FD60 */

void sub_0803FD60(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *param_2 * -0x400;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[1] * -0x400;
  return;
}


/* sub_0803FD76 @ 0x0803FD76 */

undefined4 ** sub_0803FD76(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  
  puStack_20 = param_1;
  puStack_1c = param_2;
  puStack_18 = param_3;
  sub_08046FF4(&uStack_44,&puStack_2c,8,0x8050761);
  lVar3 = sub_08046B70(*param_3,*param_2);
  lVar4 = sub_08046B70(param_3[2],param_2[1]);
  uStack_44 = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  puStack_24 = param_3 + 1;
  lVar3 = sub_08046B70(param_3[1],*param_2);
  puStack_28 = param_3 + 3;
  lVar4 = sub_08046B70(param_3[3],param_2[1]);
  uStack_40 = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08046B70(*param_3,param_2[2]);
  puStack_2c = param_2 + 3;
  lVar4 = sub_08046B70(param_3[2],param_2[3]);
  uStack_3c = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08046B70(*puStack_24,param_2[2]);
  lVar4 = sub_08046B70(*puStack_28,*puStack_2c);
  uStack_38 = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08046B70(*param_3,param_2[4]);
  lVar4 = sub_08046B70(param_3[2],param_2[5]);
  iStack_34 = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  iStack_34 = iStack_34 + param_3[4];
  lVar3 = sub_08046B70(*puStack_24,param_2[4]);
  lVar4 = sub_08046B70(*puStack_28,param_2[5]);
  iVar1 = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  iVar2 = param_3[5];
  *puStack_20 = uStack_44;
  puStack_20[1] = uStack_40;
  puStack_20[2] = uStack_3c;
  puStack_20[3] = uStack_38;
  puStack_20[4] = iStack_34;
  puStack_20[5] = iVar1 + iVar2;
  return &puStack_2c;
}


/* sub_0803FDF4 @ 0x0803FDF4 */

undefined4 * sub_0803FDF4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *unaff_r7;
  longlong lVar7;
  longlong lVar8;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_00000024;
  undefined4 *in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  
  lVar7 = sub_08046B70(*unaff_r6,unaff_r7[1]);
  lVar7 = lVar7 + CONCAT44(in_stack_00000008,in_stack_00000004);
  uVar1 = sub_08046C28((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),10);
  lVar7 = sub_08046B70(*in_stack_0000002c,*unaff_r7);
  lVar8 = sub_08046B70(*in_stack_00000028,*in_stack_00000024);
  uVar2 = sub_08046C28((int)(lVar7 + lVar8),(int)((ulonglong)(lVar7 + lVar8) >> 0x20),10);
  lVar7 = sub_08046B70(*unaff_r4,*(undefined4 *)(unaff_r5 + 0x10));
  lVar8 = sub_08046B70(*unaff_r6,*(undefined4 *)(unaff_r5 + 0x14));
  iVar3 = sub_08046C28((int)(lVar7 + lVar8),(int)((ulonglong)(lVar7 + lVar8) >> 0x20),10);
  iVar5 = unaff_r4[4];
  lVar7 = sub_08046B70(*in_stack_0000002c,*(undefined4 *)(unaff_r5 + 0x10));
  lVar8 = sub_08046B70(*in_stack_00000028,*(undefined4 *)(unaff_r5 + 0x14));
  iVar4 = sub_08046C28((int)(lVar7 + lVar8),(int)((ulonglong)(lVar7 + lVar8) >> 0x20),10);
  iVar6 = unaff_r4[5];
  *in_stack_00000030 = in_stack_0000000c;
  in_stack_00000030[1] = in_stack_00000010;
  in_stack_00000030[2] = uVar1;
  in_stack_00000030[3] = uVar2;
  in_stack_00000030[4] = iVar3 + iVar5;
  in_stack_00000030[5] = iVar4 + iVar6;
  return &stack0x00000024;
}


/* sub_0803FDF6 @ 0x0803FDF6 */

undefined4 * sub_0803FDF6(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *unaff_r7;
  longlong lVar7;
  longlong lVar8;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_00000024;
  undefined4 *in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  
  lVar7 = sub_08046B70(*unaff_r6);
  lVar7 = lVar7 + CONCAT44(in_stack_00000008,in_stack_00000004);
  uVar1 = sub_08046C28((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),10);
  lVar7 = sub_08046B70(*in_stack_0000002c,*unaff_r7);
  lVar8 = sub_08046B70(*in_stack_00000028,*in_stack_00000024);
  uVar2 = sub_08046C28((int)(lVar7 + lVar8),(int)((ulonglong)(lVar7 + lVar8) >> 0x20),10);
  lVar7 = sub_08046B70(*unaff_r4,*(undefined4 *)(unaff_r5 + 0x10));
  lVar8 = sub_08046B70(*unaff_r6,*(undefined4 *)(unaff_r5 + 0x14));
  iVar3 = sub_08046C28((int)(lVar7 + lVar8),(int)((ulonglong)(lVar7 + lVar8) >> 0x20),10);
  iVar5 = unaff_r4[4];
  lVar7 = sub_08046B70(*in_stack_0000002c,*(undefined4 *)(unaff_r5 + 0x10));
  lVar8 = sub_08046B70(*in_stack_00000028,*(undefined4 *)(unaff_r5 + 0x14));
  iVar4 = sub_08046C28((int)(lVar7 + lVar8),(int)((ulonglong)(lVar7 + lVar8) >> 0x20),10);
  iVar6 = unaff_r4[5];
  *in_stack_00000030 = in_stack_0000000c;
  in_stack_00000030[1] = in_stack_00000010;
  in_stack_00000030[2] = uVar1;
  in_stack_00000030[3] = uVar2;
  in_stack_00000030[4] = iVar3 + iVar5;
  in_stack_00000030[5] = iVar4 + iVar6;
  return &stack0x00000024;
}


/* sub_0803FE04 @ 0x0803FE04 */

undefined4 * sub_0803FE04(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *unaff_r7;
  longlong lVar7;
  longlong lVar8;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_00000024;
  undefined4 *in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  
  uVar1 = sub_08046C28(param_1,param_2,10);
  lVar7 = sub_08046B70(*in_stack_0000002c,*unaff_r7);
  lVar8 = sub_08046B70(*in_stack_00000028,*in_stack_00000024);
  uVar2 = sub_08046C28((int)(lVar7 + lVar8),(int)((ulonglong)(lVar7 + lVar8) >> 0x20),10);
  lVar7 = sub_08046B70(*unaff_r4,*(undefined4 *)(unaff_r5 + 0x10));
  lVar8 = sub_08046B70(*unaff_r6,*(undefined4 *)(unaff_r5 + 0x14));
  iVar3 = sub_08046C28((int)(lVar7 + lVar8),(int)((ulonglong)(lVar7 + lVar8) >> 0x20),10);
  iVar5 = unaff_r4[4];
  lVar7 = sub_08046B70(*in_stack_0000002c,*(undefined4 *)(unaff_r5 + 0x10));
  lVar8 = sub_08046B70(*in_stack_00000028,*(undefined4 *)(unaff_r5 + 0x14));
  iVar4 = sub_08046C28((int)(lVar7 + lVar8),(int)((ulonglong)(lVar7 + lVar8) >> 0x20),10);
  iVar6 = unaff_r4[5];
  *in_stack_00000030 = in_stack_0000000c;
  in_stack_00000030[1] = in_stack_00000010;
  in_stack_00000030[2] = uVar1;
  in_stack_00000030[3] = uVar2;
  in_stack_00000030[4] = iVar3 + iVar5;
  in_stack_00000030[5] = iVar4 + iVar6;
  return &stack0x00000024;
}


/* sub_0803FE9A @ 0x0803FE9A */

void sub_0803FE9A(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1 * *param_1 >> 10;
  param_1[1] = iVar1 * param_1[1] >> 10;
  iVar1 = *param_2;
  param_1[2] = iVar1 * param_1[2] >> 10;
  param_1[3] = iVar1 * param_1[3] >> 10;
  iVar1 = *param_2;
  param_1[4] = iVar1 * param_1[4] >> 10;
  param_1[5] = iVar1 * param_1[5] >> 10;
  return;
}


/* sub_0803FED2 @ 0x0803FED2 */

int ** sub_0803FED2(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_1c;
  int *piStack_18;
  
  piStack_1c = param_1;
  piStack_18 = param_2;
  sub_08046FF4(&iStack_34,&piStack_1c,8,0x8050761);
  iVar5 = (param_2[3] * *param_2 >> 10) - (param_2[2] * param_2[1] >> 10);
  iStack_34 = __16__rt_sdiv(iVar5,param_2[3] << 10);
  iStack_30 = __16__rt_sdiv(iVar5,param_2[1] * -0x400);
  iStack_2c = __16__rt_sdiv(iVar5,param_2[2] * -0x400);
  iVar5 = __16__rt_sdiv(iVar5,*param_2 << 10);
  iVar2 = param_2[4];
  iVar4 = param_2[5];
  iVar1 = param_2[4];
  iVar3 = param_2[5];
  *piStack_1c = iStack_34;
  piStack_1c[1] = iStack_30;
  piStack_1c[2] = iStack_2c;
  piStack_1c[3] = iVar5;
  piStack_1c[4] = (iStack_34 * -iVar2 >> 10) - (iStack_2c * iVar4 >> 10);
  piStack_1c[5] = (iStack_30 * -iVar1 >> 10) - (iVar5 * iVar3 >> 10);
  return &piStack_1c;
}


/* sub_0803FEE0 @ 0x0803FEE0 */

undefined4 * sub_0803FEE0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_r4;
  int iVar8;
  int *in_stack_0000001c;
  
  sub_08046FF4();
  iVar8 = (unaff_r4[3] * *unaff_r4 >> 10) - (unaff_r4[2] * unaff_r4[1] >> 10);
  iVar1 = __16__rt_sdiv(iVar8,unaff_r4[3] << 10);
  iVar2 = __16__rt_sdiv(iVar8,unaff_r4[1] * -0x400);
  iVar3 = __16__rt_sdiv(iVar8,unaff_r4[2] * -0x400);
  iVar8 = __16__rt_sdiv(iVar8,*unaff_r4 << 10);
  iVar5 = unaff_r4[4];
  iVar7 = unaff_r4[5];
  iVar4 = unaff_r4[4];
  iVar6 = unaff_r4[5];
  *in_stack_0000001c = iVar1;
  in_stack_0000001c[1] = iVar2;
  in_stack_0000001c[2] = iVar3;
  in_stack_0000001c[3] = iVar8;
  in_stack_0000001c[4] = (iVar1 * -iVar5 >> 10) - (iVar3 * iVar7 >> 10);
  in_stack_0000001c[5] = (iVar2 * -iVar4 >> 10) - (iVar8 * iVar6 >> 10);
  return &stack0x0000001c;
}


/* sub_0803FEF8 @ 0x0803FEF8 */

undefined4 * sub_0803FEF8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_r4;
  int *unaff_r6;
  int *in_stack_0000001c;
  
  param_1 = param_1 - param_3;
  iVar1 = __16__rt_sdiv(param_1,param_2 << 10);
  iVar2 = __16__rt_sdiv(param_1,unaff_r4[1] * -0x400);
  iVar3 = __16__rt_sdiv(param_1,*unaff_r6 * -0x400);
  iVar4 = __16__rt_sdiv(param_1,*unaff_r4 << 10);
  iVar6 = unaff_r4[4];
  iVar8 = unaff_r4[5];
  iVar5 = unaff_r4[4];
  iVar7 = unaff_r4[5];
  *in_stack_0000001c = iVar1;
  in_stack_0000001c[1] = iVar2;
  in_stack_0000001c[2] = iVar3;
  in_stack_0000001c[3] = iVar4;
  in_stack_0000001c[4] = (iVar1 * -iVar6 >> 10) - (iVar3 * iVar8 >> 10);
  in_stack_0000001c[5] = (iVar2 * -iVar5 >> 10) - (iVar4 * iVar7 >> 10);
  return &stack0x0000001c;
}


/* sub_0803FEFC @ 0x0803FEFC */

undefined4 * sub_0803FEFC(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_r4;
  undefined4 unaff_r5;
  int *unaff_r6;
  int *in_stack_0000001c;
  
  iVar1 = __16__rt_sdiv(unaff_r5);
  iVar2 = __16__rt_sdiv(unaff_r5,unaff_r4[1] * -0x400);
  iVar3 = __16__rt_sdiv(unaff_r5,*unaff_r6 * -0x400);
  iVar4 = __16__rt_sdiv(unaff_r5,*unaff_r4 << 10);
  iVar6 = unaff_r4[4];
  iVar8 = unaff_r4[5];
  iVar5 = unaff_r4[4];
  iVar7 = unaff_r4[5];
  *in_stack_0000001c = iVar1;
  in_stack_0000001c[1] = iVar2;
  in_stack_0000001c[2] = iVar3;
  in_stack_0000001c[3] = iVar4;
  in_stack_0000001c[4] = (iVar1 * -iVar6 >> 10) - (iVar3 * iVar8 >> 10);
  in_stack_0000001c[5] = (iVar2 * -iVar5 >> 10) - (iVar4 * iVar7 >> 10);
  return &stack0x0000001c;
}


/* sub_0803FF7C @ 0x0803FF7C */

void sub_0803FF7C(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_28 [24];
  
  sub_08046FF4(local_28,&stack0xfffffff0,8,0x8050761);
  iVar4 = param_2[3];
  iVar5 = param_2[1];
  iVar1 = param_2[2];
  iVar2 = *param_2;
  iVar6 = param_2[4];
  iVar8 = param_2[5];
  iVar3 = param_2[4];
  iVar7 = param_2[5];
  *param_1 = iVar4;
  param_1[1] = -iVar5;
  param_1[2] = -iVar1;
  param_1[3] = iVar2;
  param_1[4] = (iVar4 * -iVar6 >> 10) - (-iVar1 * iVar8 >> 10);
  param_1[5] = (-iVar5 * -iVar3 >> 10) - (iVar2 * iVar7 >> 10);
  return;
}


/* sub_0803FFE8 @ 0x0803FFE8 */

int sub_0803FFE8(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar1 = *param_2;
  while (uVar1 != 0) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    if (uVar1 < 0xff) {
      uVar3 = (uint)*(ushort *)(*param_1 + (uint)*(ushort *)(*param_1 + (uint)uVar1 * 2) * 2);
    }
    else {
      uVar3 = param_1[1];
    }
    iVar2 = uVar3 + 1 + iVar2;
    uVar1 = *param_2;
  }
  return iVar2;
}


/* sub_0803FFF8 @ 0x0803FFF8 */

int sub_0803FFF8(int *param_1,ushort *param_2,int param_3,uint param_4)

{
  uint uVar1;
  char in_CY;
  
  while( true ) {
    if (in_CY == '\0') {
      uVar1 = (uint)*(ushort *)(*param_1 + (uint)*(ushort *)(*param_1 + param_4 * 2) * 2);
    }
    else {
      uVar1 = param_1[1];
    }
    param_3 = uVar1 + 1 + param_3;
    if (*param_2 == 0) break;
    param_4 = (uint)*param_2;
    param_2 = param_2 + 1;
    in_CY = 0xfe < param_4;
  }
  return param_3;
}


/* sub_0804001A @ 0x0804001A */

int sub_0804001A(int *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  iVar2 = param_3 + -1;
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      if (uVar1 < 0xff) {
        uVar3 = (uint)*(ushort *)(*param_1 + (uint)*(ushort *)(*param_1 + (uint)uVar1 * 2) * 2);
      }
      else {
        uVar3 = param_1[1];
      }
      iVar4 = uVar3 + 1 + iVar4;
      bVar5 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar5);
  }
  return iVar4;
}


/* sub_0804002C @ 0x0804002C */

int sub_0804002C(int *param_1,ushort *param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int unaff_r4;
  bool bVar2;
  
  while( true ) {
    unaff_r4 = param_4 + 1 + unaff_r4;
    bVar2 = param_3 == 0;
    param_3 = param_3 + -1;
    if (bVar2) break;
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    if (uVar1 < 0xff) {
      param_4 = (uint)*(ushort *)(*param_1 + (uint)*(ushort *)(*param_1 + (uint)uVar1 * 2) * 2);
    }
    else {
      param_4 = param_1[1];
    }
  }
  return unaff_r4;
}


/* sub_08040048 @ 0x08040048 */

void sub_08040048(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_03004a8c;
  piVar2 = param_1;
  if (DAT_03004a8c != (int *)0x0) {
    __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x10) + *DAT_03004a8c);
    piVar2 = (int *)*piVar1;
    DAT_03004a8c = param_1;
    __call_via_r2(piVar1,1,*piVar2 + (int)piVar2);
    piVar2 = DAT_03004a8c;
  }
  DAT_03004a8c = piVar2;
  __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0xc) + *DAT_03004a8c);
  DAT_03004a80 = 0;
  _03000FFC = 0;
  return;
}


/* sub_08040096 @ 0x08040096 */

void sub_08040096(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049618;
  }
  sub_08040048();
  return;
}


/* sub_080400AC @ 0x080400AC */

void sub_080400AC(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B868;
  }
  sub_08040048();
  return;
}


/* sub_080400C2 @ 0x080400C2 */

void sub_080400C2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B254;
  }
  sub_08040048();
  return;
}


/* sub_080400D8 @ 0x080400D8 */

void sub_080400D8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049644;
  }
  sub_08040048();
  return;
}


/* sub_080400EE @ 0x080400EE */

void sub_080400EE(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    *(undefined2 *)((int)&DAT_03004a78 + iVar2 * 2) = 0;
    iVar1 = 0;
    do {
      iVar3 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      *(undefined2 *)(&DAT_03004a84 + iVar2 * 2 + iVar3) = 0xffff;
    } while (iVar1 < 2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}


/* sub_080400FC @ 0x080400FC */

void sub_080400FC(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  int unaff_r6;
  undefined2 unaff_r7;
  
  do {
    *(undefined2 *)(unaff_r6 + param_2 * 2) = unaff_r7;
    iVar1 = 0;
    do {
      iVar2 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      *(undefined2 *)(iVar2 + unaff_r5 + 0x18 + param_2 * 2) = param_3;
    } while (iVar1 < 2);
    param_2 = param_2 + 1;
  } while (param_2 < 2);
  return;
}


/* sub_080400FE @ 0x080400FE */

void sub_080400FE(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  int unaff_r6;
  undefined2 unaff_r7;
  
  do {
    *(undefined2 *)(unaff_r6 + param_2 * 2) = unaff_r7;
    iVar1 = 0;
    do {
      iVar2 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      *(undefined2 *)(iVar2 + unaff_r5 + param_2 * 2) = param_3;
    } while (iVar1 < 2);
    param_2 = param_2 + 1;
  } while (param_2 < 2);
  return;
}


/* sub_0804011A @ 0x0804011A */

void sub_0804011A(void)

{
  undefined4 in_r3;
  
  __call_via_r2(_03000FF0,&DAT_03004a78,*(int *)(*_03000FF0 + 8) + *_03000FF0,in_r3,in_r3);
  return;
}


/* sub_08040130 @ 0x08040130 */

void sub_08040130(void)

{
  undefined4 in_r3;
  
  __call_via_r2(_03000FF0,&DAT_03004a84 + DAT_03004a7c * 4,*(int *)(*_03000FF0 + 4) + *_03000FF0,
                &DAT_03004a84,in_r3);
  return;
}


/* sub_0804014E @ 0x0804014E */

void sub_0804014E(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = *(int *)(*DAT_03000ff4 + 4);
  __call_via_r1(DAT_03000ff4,iVar1 + *DAT_03000ff4,iVar1,in_r3,in_r3);
  return;
}


/* sub_08040160 @ 0x08040160 */

void sub_08040160(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*_03000FF0 + 0x10);
  __call_via_r1(_03000FF0,iVar1 + *_03000FF0,iVar1,param_4,param_4);
  _03000FF0 = param_1;
  __call_via_r1(param_1,*(int *)(*param_1 + 0xc) + *param_1);
  return;
}


/* sub_08040182 @ 0x08040182 */

void sub_08040182(void)

{
  __call_via_r1(_03000FF0,*(int *)(*_03000FF0 + 0x10) + *_03000FF0);
  _03000FF0 = &DAT_03004a70;
  return;
}


/* sub_0804019A @ 0x0804019A */

void sub_0804019A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*DAT_03000ff4 + 0xc);
  __call_via_r1(DAT_03000ff4,iVar1 + *DAT_03000ff4,iVar1,param_4,param_4);
  _03000FFC = DAT_03004a80;
  DAT_03000ff4 = param_1;
  __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
  return;
}


/* sub_080401C2 @ 0x080401C2 */

void sub_080401C2(void)

{
  __call_via_r1(DAT_03000ff4,*(int *)(*DAT_03000ff4 + 0xc) + *DAT_03000ff4);
  DAT_03000ff4 = &DAT_03004a74;
  return;
}


/* sub_080401DA @ 0x080401DA */

void sub_080401DA(void)

{
  DAT_03000ff8 = DAT_03000ff4;
  __call_via_r1(DAT_03000ff4,*(int *)(*DAT_03000ff4 + 0xc) + *DAT_03000ff4);
  DAT_03000ff4 = &DAT_03004a74;
  return;
}


/* sub_080401F4 @ 0x080401F4 */

void sub_080401F4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r3;
  
  piVar1 = DAT_03000ff8;
  iVar2 = *(int *)(*DAT_03000ff4 + 0xc);
  __call_via_r1(DAT_03000ff4,iVar2 + *DAT_03000ff4,iVar2,in_r3,in_r3);
  _03000FFC = DAT_03004a80;
  DAT_03000ff4 = piVar1;
  __call_via_r1(piVar1,*(int *)(*piVar1 + 8) + *piVar1);
  return;
}


/* sub_080401FE @ 0x080401FE */

void sub_080401FE(undefined4 param_1,int param_2)

{
  int unaff_r4;
  int *unaff_r5;
  
  __call_via_r1(param_1,*(int *)(param_2 + 0xc) + param_2);
  *(undefined4 *)(unaff_r4 + 0xc) = DAT_03004a80;
  *(int **)(unaff_r4 + 4) = unaff_r5;
  __call_via_r1(unaff_r5,*(int *)(*unaff_r5 + 8) + *unaff_r5);
  return;
}


/* sub_08040200 @ 0x08040200 */

void sub_08040200(undefined4 param_1,int param_2,int param_3)

{
  int unaff_r4;
  int *unaff_r5;
  
  __call_via_r1(param_1,param_3 + param_2);
  *(undefined4 *)(unaff_r4 + 0xc) = DAT_03004a80;
  *(int **)(unaff_r4 + 4) = unaff_r5;
  __call_via_r1(unaff_r5,*(int *)(*unaff_r5 + 8) + *unaff_r5);
  return;
}


/* sub_08040202 @ 0x08040202 */

void sub_08040202(void)

{
  int unaff_r4;
  int *unaff_r5;
  
  __call_via_r1();
  *(undefined4 *)(unaff_r4 + 0xc) = DAT_03004a80;
  *(int **)(unaff_r4 + 4) = unaff_r5;
  __call_via_r1(unaff_r5,*(int *)(*unaff_r5 + 8) + *unaff_r5);
  return;
}


/* sub_0804023C @ 0x0804023C */

void sub_0804023C(byte *param_1,ushort param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)(param_1 + 2) ^ param_2;
  uVar3 = param_2 & uVar2;
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 2) & uVar2;
  *(ushort *)(param_1 + 2) = param_2;
  if (uVar3 != 0) {
    *(ushort *)(param_1 + (uint)*param_1 * 2 + 8) = uVar3;
    *(undefined4 *)(param_1 + (uint)*param_1 * 4 + 0x88) = DAT_03000f94;
    bVar1 = *param_1;
    *param_1 = bVar1 + 1;
    if (0x3f < (byte)(bVar1 + 1)) {
      *param_1 = 0;
    }
  }
  return;
}


/* sub_08040284 @ 0x08040284 */

undefined4 sub_08040284(byte *param_1,ushort param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_1;
    iVar3 = 0;
    if (param_3 != 0) {
      do {
        if (0x3f < iVar3) {
          return 0;
        }
        uVar2 = uVar2 - 1;
        if ((int)uVar2 < 0) {
          uVar2 = 0x3f;
        }
        if ((*(ushort *)(param_1 + uVar2 * 2 + 8) & param_2) != 0) {
          if (*(int *)(param_1 + uVar2 * 4 + 0x88) < DAT_03000f94 - param_4) {
            return 0;
          }
          param_3 = param_3 + -1;
        }
        iVar3 = iVar3 + 1;
      } while (param_3 != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_080402D6 @ 0x080402D6 */

void sub_080402D6(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}


/* sub_080402E2 @ 0x080402E2 */

undefined4 sub_080402E2(byte *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_1;
    do {
      uVar2 = uVar2 - 1;
      if ((int)uVar2 < 0) {
        uVar2 = 0x3f;
      }
      param_2 = param_2 + -1;
      if (*(short *)(param_3 + param_2 * 2) != *(short *)(param_1 + uVar2 * 2 + 8)) {
        return 0;
      }
    } while (param_2 != 0);
    uVar1 = 1;
  }
  return uVar1;
}


/* sub_080402FE @ 0x080402FE */

undefined4 sub_080402FE(int param_1,int param_2,int param_3,int param_4)

{
  int unaff_r4;
  int unaff_r5;
  
  while( true ) {
    if (*(short *)(param_3 + unaff_r4) != *(short *)(unaff_r5 + param_1 + 8)) {
      return 0;
    }
    if (param_2 == 0) break;
    param_4 = param_4 + -1;
    if (param_4 < 0) {
      param_4 = 0x3f;
    }
    param_2 = param_2 + -1;
    unaff_r4 = param_2 * 2;
    unaff_r5 = param_4 << 1;
  }
  return 1;
}


/* sub_08040300 @ 0x08040300 */

undefined4 sub_08040300(int param_1,int param_2,int param_3,int param_4)

{
  int unaff_r4;
  int unaff_r5;
  
  while( true ) {
    if (*(short *)(param_3 + unaff_r4) != *(short *)(unaff_r5 + 8)) {
      return 0;
    }
    if (param_2 == 0) break;
    param_4 = param_4 + -1;
    if (param_4 < 0) {
      param_4 = 0x3f;
    }
    param_2 = param_2 + -1;
    unaff_r4 = param_2 * 2;
    unaff_r5 = param_4 * 2 + param_1;
  }
  return 1;
}


/* sub_08040314 @ 0x08040314 */

undefined2 sub_08040314(byte *param_1)

{
  return *(undefined2 *)(param_1 + ((*param_1 + 0x3f) * 0x4000000 >> 0x19) + 8);
}


/* sub_08040322 @ 0x08040322 */

uint sub_08040322(byte *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0xff) &
        (uint)*(ushort *)(param_1 + ((*param_1 + 0x3f) * 0x4000000 >> 0x19) + 8)) != 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 10);
  return 0xffffffff;
}


/* sub_08040346 @ 0x08040346 */

undefined4 sub_08040346(byte *param_1)

{
  return *(undefined4 *)(param_1 + ((*param_1 + 0x3f) * 0x4000000 >> 0x18) + 0x88);
}


/* sub_0804035C @ 0x0804035C */

void sub_0804035C(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0x400;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x400;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x400;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}


/* sub_08040382 @ 0x08040382 */

void sub_08040382(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1 * *param_1 >> 10;
  param_1[1] = iVar1 * param_1[1] >> 10;
  param_1[2] = iVar1 * param_1[2] >> 10;
  iVar1 = *param_2;
  param_1[3] = iVar1 * param_1[3] >> 10;
  param_1[4] = iVar1 * param_1[4] >> 10;
  param_1[5] = iVar1 * param_1[5] >> 10;
  iVar1 = *param_2;
  param_1[6] = iVar1 * param_1[6] >> 10;
  param_1[7] = iVar1 * param_1[7] >> 10;
  param_1[8] = iVar1 * param_1[8] >> 10;
  iVar1 = *param_2;
  param_1[9] = iVar1 * param_1[9] >> 10;
  param_1[10] = iVar1 * param_1[10] >> 10;
  param_1[0xb] = iVar1 * param_1[0xb] >> 10;
  return;
}


/* sub_080403EC @ 0x080403EC */

void sub_080403EC(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 **ppuStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  ppuStack_20 = &puStack_34;
  uStack_1c = param_1;
  puStack_18 = param_2;
  sub_08046FF4(&iStack_64,ppuStack_20,0xc,0x8050791);
  puVar1 = param_2 + 3;
  puStack_24 = param_2 + 4;
  puVar2 = param_2 + 6;
  puStack_28 = param_2 + 8;
  uVar6 = sub_08046B70(*puStack_28,*puStack_24);
  puStack_2c = param_2 + 5;
  puStack_30 = param_2 + 7;
  uVar7 = sub_08046B70(param_2[7],param_2[5]);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_64 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_64 = iStack_64 >> 10;
  uVar6 = sub_08046B70(*puVar2,*puStack_2c);
  uVar7 = sub_08046B70(*puStack_28,*puVar1);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_58 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_58 = iStack_58 >> 10;
  uVar6 = sub_08046B70(*puStack_30,*puVar1);
  uVar7 = sub_08046B70(*puVar2,*puStack_24);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_4c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_4c = iStack_4c >> 10;
  puStack_34 = param_2 + 2;
  uVar6 = sub_08046B70(param_2[2],*puStack_30);
  puVar5 = param_2 + 1;
  uVar7 = sub_08046B70(param_2[1],*puStack_28);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_60 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_60 = iStack_60 >> 10;
  uVar6 = sub_08046B70(*param_2,*puStack_28);
  uVar7 = sub_08046B70(*puStack_34,*puVar2);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_54 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_54 = iStack_54 >> 10;
  uVar6 = sub_08046B70(*puVar5,*puVar2);
  uVar7 = sub_08046B70(*param_2,*puStack_30);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_48 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_48 = iStack_48 >> 10;
  uVar6 = sub_08046B70(*puStack_2c,*puVar5);
  uVar7 = sub_08046B70(*puStack_24,*puStack_34);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_5c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_5c = iStack_5c >> 10;
  uVar6 = sub_08046B70(*puVar1,*puStack_34);
  uVar7 = sub_08046B70(*puStack_2c,*param_2);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_50 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_50 = iStack_50 >> 10;
  uVar6 = sub_08046B70(*puStack_24,*param_2);
  uVar7 = sub_08046B70(*puVar1,*puVar5);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_44 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_44 = iStack_44 >> 10;
  lVar8 = sub_08046B70(iStack_64,*param_2);
  lVar9 = sub_08046B70(iStack_60,*puVar1);
  lVar10 = sub_08046B70(iStack_5c,*puVar2);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046BA4(0,0x40000,(int)lVar10,(int)((ulonglong)lVar10 >> 0x20));
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_64);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_64 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_60);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_60 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_5c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_5c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_58);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_58 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_54);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_54 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_50);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_50 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_4c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_4c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_48);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_48 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_44);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_44 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  puVar1 = param_2 + 9;
  lVar8 = sub_08046B70(iStack_64,*puVar1);
  lVar9 = sub_08046B70(iStack_58,param_2[10]);
  lVar10 = sub_08046B70(iStack_4c,param_2[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  uStack_40 = sub_08046B84();
  lVar8 = sub_08046B70(iStack_60,*puVar1);
  lVar9 = sub_08046B70(iStack_54,param_2[10]);
  lVar10 = sub_08046B70(iStack_48,param_2[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  uStack_3c = sub_08046B84();
  lVar8 = sub_08046B70(iStack_5c,*puVar1);
  lVar9 = sub_08046B70(iStack_50,param_2[10]);
  lVar10 = sub_08046B70(iStack_44,param_2[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  uStack_38 = sub_08046B84();
  sub_08047018(uStack_1c,&iStack_64,ppuStack_20,0xc,0x8050771);
  return;
}


/* sub_080403FC @ 0x080403FC */

void sub_080403FC(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *unaff_r4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 *in_stack_00000040;
  undefined4 *in_stack_00000044;
  undefined4 *in_stack_00000048;
  undefined4 *in_stack_0000004c;
  undefined4 uStack00000050;
  undefined4 in_stack_00000054;
  
  uStack00000050 = param_2;
  sub_08046FF4(param_1 + param_3,param_2,param_3,0x8050791);
  puVar1 = unaff_r4 + 3;
  in_stack_0000004c = unaff_r4 + 4;
  puVar2 = unaff_r4 + 6;
  in_stack_00000048 = unaff_r4 + 8;
  uVar6 = sub_08046B70(*in_stack_00000048,*in_stack_0000004c);
  in_stack_00000044 = unaff_r4 + 5;
  in_stack_00000040 = unaff_r4 + 7;
  uVar7 = sub_08046B70(unaff_r4[7],unaff_r4[5]);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_0000000c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_0000000c = in_stack_0000000c >> 10;
  uVar6 = sub_08046B70(*puVar2,*in_stack_00000044);
  uVar7 = sub_08046B70(*in_stack_00000048,*puVar1);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000018 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000018 = in_stack_00000018 >> 10;
  uVar6 = sub_08046B70(*in_stack_00000040,*puVar1);
  uVar7 = sub_08046B70(*puVar2,*in_stack_0000004c);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000024 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000024 = in_stack_00000024 >> 10;
  in_stack_0000003c = unaff_r4 + 2;
  uVar6 = sub_08046B70(unaff_r4[2],*in_stack_00000040);
  puVar5 = unaff_r4 + 1;
  uVar7 = sub_08046B70(unaff_r4[1],*in_stack_00000048);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000010 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000010 = in_stack_00000010 >> 10;
  uVar6 = sub_08046B70(*unaff_r4,*in_stack_00000048);
  uVar7 = sub_08046B70(*in_stack_0000003c,*puVar2);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_0000001c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_0000001c = in_stack_0000001c >> 10;
  uVar6 = sub_08046B70(*puVar5,*puVar2);
  uVar7 = sub_08046B70(*unaff_r4,*in_stack_00000040);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000028 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000028 = in_stack_00000028 >> 10;
  uVar6 = sub_08046B70(*in_stack_00000044,*puVar5);
  uVar7 = sub_08046B70(*in_stack_0000004c,*in_stack_0000003c);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000014 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000014 = in_stack_00000014 >> 10;
  uVar6 = sub_08046B70(*puVar1,*in_stack_0000003c);
  uVar7 = sub_08046B70(*in_stack_00000044,*unaff_r4);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000020 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000020 = in_stack_00000020 >> 10;
  uVar6 = sub_08046B70(*in_stack_0000004c,*unaff_r4);
  uVar7 = sub_08046B70(*puVar1,*puVar5);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_0000002c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_0000002c = in_stack_0000002c >> 10;
  lVar8 = sub_08046B70(in_stack_0000000c,*unaff_r4);
  lVar9 = sub_08046B70(in_stack_00000010,*puVar1);
  lVar10 = sub_08046B70(in_stack_00000014,*puVar2);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046BA4(0,0x40000,(int)lVar10,(int)((ulonglong)lVar10 >> 0x20));
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_0000000c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_0000000c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000010);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000010 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000014);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000014 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000018);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000018 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_0000001c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_0000001c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000020);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000020 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000024);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000024 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000028);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000028 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_0000002c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_0000002c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  puVar1 = unaff_r4 + 9;
  lVar8 = sub_08046B70(in_stack_0000000c,*puVar1);
  lVar9 = sub_08046B70(in_stack_00000018,unaff_r4[10]);
  lVar10 = sub_08046B70(in_stack_00000024,unaff_r4[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  in_stack_00000030 = sub_08046B84();
  lVar8 = sub_08046B70(in_stack_00000010,*puVar1);
  lVar9 = sub_08046B70(in_stack_0000001c,unaff_r4[10]);
  lVar10 = sub_08046B70(in_stack_00000028,unaff_r4[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  in_stack_00000034 = sub_08046B84();
  lVar8 = sub_08046B70(in_stack_00000014,*puVar1);
  lVar9 = sub_08046B70(in_stack_00000020,unaff_r4[10]);
  lVar10 = sub_08046B70(in_stack_0000002c,unaff_r4[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  in_stack_00000038 = sub_08046B84();
  sub_08047018(in_stack_00000054,&stack0x0000000c,uStack00000050);
  return;
}


/* sub_080403FE @ 0x080403FE */

void sub_080403FE(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *unaff_r4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 *in_stack_00000040;
  undefined4 *in_stack_00000044;
  undefined4 *in_stack_00000048;
  undefined4 *in_stack_0000004c;
  undefined4 uStack00000050;
  undefined4 in_stack_00000054;
  
  uStack00000050 = param_2;
  sub_08046FF4();
  puVar1 = unaff_r4 + 3;
  in_stack_0000004c = unaff_r4 + 4;
  puVar2 = unaff_r4 + 6;
  in_stack_00000048 = unaff_r4 + 8;
  uVar6 = sub_08046B70(*in_stack_00000048,*in_stack_0000004c);
  in_stack_00000044 = unaff_r4 + 5;
  in_stack_00000040 = unaff_r4 + 7;
  uVar7 = sub_08046B70(unaff_r4[7],unaff_r4[5]);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_0000000c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_0000000c = in_stack_0000000c >> 10;
  uVar6 = sub_08046B70(*puVar2,*in_stack_00000044);
  uVar7 = sub_08046B70(*in_stack_00000048,*puVar1);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000018 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000018 = in_stack_00000018 >> 10;
  uVar6 = sub_08046B70(*in_stack_00000040,*puVar1);
  uVar7 = sub_08046B70(*puVar2,*in_stack_0000004c);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000024 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000024 = in_stack_00000024 >> 10;
  in_stack_0000003c = unaff_r4 + 2;
  uVar6 = sub_08046B70(unaff_r4[2],*in_stack_00000040);
  puVar5 = unaff_r4 + 1;
  uVar7 = sub_08046B70(unaff_r4[1],*in_stack_00000048);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000010 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000010 = in_stack_00000010 >> 10;
  uVar6 = sub_08046B70(*unaff_r4,*in_stack_00000048);
  uVar7 = sub_08046B70(*in_stack_0000003c,*puVar2);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_0000001c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_0000001c = in_stack_0000001c >> 10;
  uVar6 = sub_08046B70(*puVar5,*puVar2);
  uVar7 = sub_08046B70(*unaff_r4,*in_stack_00000040);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000028 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000028 = in_stack_00000028 >> 10;
  uVar6 = sub_08046B70(*in_stack_00000044,*puVar5);
  uVar7 = sub_08046B70(*in_stack_0000004c,*in_stack_0000003c);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000014 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000014 = in_stack_00000014 >> 10;
  uVar6 = sub_08046B70(*puVar1,*in_stack_0000003c);
  uVar7 = sub_08046B70(*in_stack_00000044,*unaff_r4);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000020 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000020 = in_stack_00000020 >> 10;
  uVar6 = sub_08046B70(*in_stack_0000004c,*unaff_r4);
  uVar7 = sub_08046B70(*puVar1,*puVar5);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_0000002c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_0000002c = in_stack_0000002c >> 10;
  lVar8 = sub_08046B70(in_stack_0000000c,*unaff_r4);
  lVar9 = sub_08046B70(in_stack_00000010,*puVar1);
  lVar10 = sub_08046B70(in_stack_00000014,*puVar2);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046BA4(0,0x40000,(int)lVar10,(int)((ulonglong)lVar10 >> 0x20));
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_0000000c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_0000000c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000010);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000010 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000014);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000014 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000018);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000018 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_0000001c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_0000001c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000020);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000020 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000024);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000024 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000028);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000028 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_0000002c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_0000002c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  puVar1 = unaff_r4 + 9;
  lVar8 = sub_08046B70(in_stack_0000000c,*puVar1);
  lVar9 = sub_08046B70(in_stack_00000018,unaff_r4[10]);
  lVar10 = sub_08046B70(in_stack_00000024,unaff_r4[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  in_stack_00000030 = sub_08046B84();
  lVar8 = sub_08046B70(in_stack_00000010,*puVar1);
  lVar9 = sub_08046B70(in_stack_0000001c,unaff_r4[10]);
  lVar10 = sub_08046B70(in_stack_00000028,unaff_r4[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  in_stack_00000034 = sub_08046B84();
  lVar8 = sub_08046B70(in_stack_00000014,*puVar1);
  lVar9 = sub_08046B70(in_stack_00000020,unaff_r4[10]);
  lVar10 = sub_08046B70(in_stack_0000002c,unaff_r4[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  in_stack_00000038 = sub_08046B84();
  sub_08047018(in_stack_00000054,&stack0x0000000c,uStack00000050);
  return;
}


/* sub_08040402 @ 0x08040402 */

void sub_08040402(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *unaff_r4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 *in_stack_00000040;
  undefined4 *in_stack_00000044;
  undefined4 *in_stack_00000048;
  undefined4 *in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  
  sub_08046FF4();
  puVar1 = unaff_r4 + 3;
  in_stack_0000004c = unaff_r4 + 4;
  puVar2 = unaff_r4 + 6;
  in_stack_00000048 = unaff_r4 + 8;
  uVar6 = sub_08046B70(*in_stack_00000048,*in_stack_0000004c);
  in_stack_00000044 = unaff_r4 + 5;
  in_stack_00000040 = unaff_r4 + 7;
  uVar7 = sub_08046B70(unaff_r4[7],unaff_r4[5]);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_0000000c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_0000000c = in_stack_0000000c >> 10;
  uVar6 = sub_08046B70(*puVar2,*in_stack_00000044);
  uVar7 = sub_08046B70(*in_stack_00000048,*puVar1);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000018 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000018 = in_stack_00000018 >> 10;
  uVar6 = sub_08046B70(*in_stack_00000040,*puVar1);
  uVar7 = sub_08046B70(*puVar2,*in_stack_0000004c);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000024 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000024 = in_stack_00000024 >> 10;
  in_stack_0000003c = unaff_r4 + 2;
  uVar6 = sub_08046B70(unaff_r4[2],*in_stack_00000040);
  puVar5 = unaff_r4 + 1;
  uVar7 = sub_08046B70(unaff_r4[1],*in_stack_00000048);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000010 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000010 = in_stack_00000010 >> 10;
  uVar6 = sub_08046B70(*unaff_r4,*in_stack_00000048);
  uVar7 = sub_08046B70(*in_stack_0000003c,*puVar2);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_0000001c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_0000001c = in_stack_0000001c >> 10;
  uVar6 = sub_08046B70(*puVar5,*puVar2);
  uVar7 = sub_08046B70(*unaff_r4,*in_stack_00000040);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000028 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000028 = in_stack_00000028 >> 10;
  uVar6 = sub_08046B70(*in_stack_00000044,*puVar5);
  uVar7 = sub_08046B70(*in_stack_0000004c,*in_stack_0000003c);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000014 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000014 = in_stack_00000014 >> 10;
  uVar6 = sub_08046B70(*puVar1,*in_stack_0000003c);
  uVar7 = sub_08046B70(*in_stack_00000044,*unaff_r4);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_00000020 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_00000020 = in_stack_00000020 >> 10;
  uVar6 = sub_08046B70(*in_stack_0000004c,*unaff_r4);
  uVar7 = sub_08046B70(*puVar1,*puVar5);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  in_stack_0000002c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  in_stack_0000002c = in_stack_0000002c >> 10;
  lVar8 = sub_08046B70(in_stack_0000000c,*unaff_r4);
  lVar9 = sub_08046B70(in_stack_00000010,*puVar1);
  lVar10 = sub_08046B70(in_stack_00000014,*puVar2);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046BA4(0,0x40000,(int)lVar10,(int)((ulonglong)lVar10 >> 0x20));
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_0000000c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_0000000c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000010);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000010 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000014);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000014 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000018);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000018 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_0000001c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_0000001c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000020);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000020 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000024);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000024 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_00000028);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_00000028 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,in_stack_0000002c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  in_stack_0000002c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  puVar1 = unaff_r4 + 9;
  lVar8 = sub_08046B70(in_stack_0000000c,*puVar1);
  lVar9 = sub_08046B70(in_stack_00000018,unaff_r4[10]);
  lVar10 = sub_08046B70(in_stack_00000024,unaff_r4[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  in_stack_00000030 = sub_08046B84();
  lVar8 = sub_08046B70(in_stack_00000010,*puVar1);
  lVar9 = sub_08046B70(in_stack_0000001c,unaff_r4[10]);
  lVar10 = sub_08046B70(in_stack_00000028,unaff_r4[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  in_stack_00000034 = sub_08046B84();
  lVar8 = sub_08046B70(in_stack_00000014,*puVar1);
  lVar9 = sub_08046B70(in_stack_00000020,unaff_r4[10]);
  lVar10 = sub_08046B70(in_stack_0000002c,unaff_r4[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  in_stack_00000038 = sub_08046B84();
  sub_08047018(in_stack_00000054,&stack0x0000000c,in_stack_00000050);
  return;
}


/* sub_08040508 @ 0x08040508 */

void sub_08040508(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_r4;
  undefined4 *puVar3;
  undefined4 *unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *unaff_r7;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 *in_stack_00000040;
  undefined4 *in_stack_00000044;
  undefined4 *in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  
  uStack00000004 = param_1;
  uStack00000008 = param_2;
  uVar4 = sub_08046B70(*unaff_r4,*in_stack_00000040);
  uVar4 = sub_08046B94((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),uStack00000004,uStack00000008);
  in_stack_00000028 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x200);
  in_stack_00000028 = in_stack_00000028 >> 10;
  _uStack00000004 = sub_08046B70(*in_stack_00000044,*unaff_r7);
  uVar4 = sub_08046B70(*in_stack_0000004c,*in_stack_0000003c);
  uVar4 = sub_08046B94((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),uStack00000004,uStack00000008);
  in_stack_00000014 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x200);
  in_stack_00000014 = in_stack_00000014 >> 10;
  uVar4 = sub_08046B70(*unaff_r5,*in_stack_0000003c);
  _uStack00000004 = uVar4;
  uVar4 = sub_08046B70(*in_stack_00000044,*unaff_r4);
  uVar4 = sub_08046B94((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),uStack00000004,uStack00000008);
  in_stack_00000020 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x200);
  in_stack_00000020 = in_stack_00000020 >> 10;
  uVar4 = sub_08046B70(*in_stack_0000004c,*unaff_r4);
  _uStack00000004 = uVar4;
  uVar4 = sub_08046B70(*unaff_r5,*unaff_r7);
  uVar4 = sub_08046B94((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),uStack00000004,uStack00000008);
  in_stack_0000002c = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x200);
  in_stack_0000002c = in_stack_0000002c >> 10;
  uVar4 = sub_08046B70(in_stack_0000000c,*unaff_r4);
  uStack00000008 = (undefined4)((ulonglong)uVar4 >> 0x20);
  lVar5 = sub_08046B70(in_stack_00000010,*unaff_r5);
  lVar7 = CONCAT44(uStack00000008,(int)uVar4);
  lVar6 = sub_08046B70(in_stack_00000014,*unaff_r6);
  lVar6 = lVar5 + lVar7 + lVar6;
  uVar4 = sub_08046BA4(0,0x40000,(int)lVar6,(int)((ulonglong)lVar6 >> 0x20));
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar1 = (undefined4)uVar4;
  uVar4 = sub_08046B58(uVar1,uVar2,in_stack_0000000c);
  uVar4 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x20000000);
  in_stack_0000000c = sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x1e);
  uVar4 = sub_08046B58(uVar1,uVar2,in_stack_00000010);
  uVar4 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x20000000);
  in_stack_00000010 = sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x1e);
  uVar4 = sub_08046B58(uVar1,uVar2,in_stack_00000014);
  uVar4 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x20000000);
  in_stack_00000014 = sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x1e);
  uVar4 = sub_08046B58(uVar1,uVar2,in_stack_00000018);
  uVar4 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x20000000);
  in_stack_00000018 = sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x1e);
  uVar4 = sub_08046B58(uVar1,uVar2,in_stack_0000001c);
  uVar4 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x20000000);
  in_stack_0000001c = sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x1e);
  uVar4 = sub_08046B58(uVar1,uVar2,in_stack_00000020);
  uVar4 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x20000000);
  in_stack_00000020 = sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x1e);
  uVar4 = sub_08046B58(uVar1,uVar2,in_stack_00000024);
  uVar4 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x20000000);
  in_stack_00000024 = sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x1e);
  uVar4 = sub_08046B58(uVar1,uVar2,in_stack_00000028);
  uVar4 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x20000000);
  in_stack_00000028 = sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x1e);
  uVar4 = sub_08046B58(uVar1,uVar2,in_stack_0000002c);
  uVar4 = sub_08046B18((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x20000000);
  in_stack_0000002c = sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x1e);
  puVar3 = unaff_r4 + 9;
  lVar6 = sub_08046B70(in_stack_0000000c,*puVar3);
  lVar5 = sub_08046B70(in_stack_00000018,unaff_r4[10]);
  uStack00000008 = (undefined4)((ulonglong)(lVar6 + lVar5) >> 0x20);
  lVar7 = sub_08046B70(in_stack_00000024,unaff_r4[0xb]);
  lVar7 = lVar7 + CONCAT44(uStack00000008,(int)(lVar6 + lVar5));
  uVar4 = sub_08046B18((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),0x200);
  sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),10);
  in_stack_00000030 = sub_08046B84();
  uVar4 = sub_08046B70(in_stack_00000010,*puVar3);
  uStack00000004 = (undefined4)((ulonglong)uVar4 >> 0x20);
  lVar7 = sub_08046B70(in_stack_0000001c,unaff_r4[10]);
  lVar7 = lVar7 + CONCAT44(uStack00000004,(int)uVar4);
  uStack00000008 = (undefined4)((ulonglong)lVar7 >> 0x20);
  lVar6 = sub_08046B70(in_stack_00000028,unaff_r4[0xb]);
  lVar6 = lVar6 + CONCAT44(uStack00000008,(int)lVar7);
  uVar4 = sub_08046B18((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),0x200);
  sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),10);
  in_stack_00000034 = sub_08046B84();
  lVar6 = sub_08046B70(in_stack_00000014,*puVar3);
  lVar5 = sub_08046B70(in_stack_00000020,unaff_r4[10]);
  lVar7 = sub_08046B70(in_stack_0000002c,unaff_r4[0xb]);
  lVar7 = lVar6 + lVar5 + lVar7;
  uVar4 = sub_08046B18((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),0x200);
  sub_08046C28((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),10);
  in_stack_00000038 = sub_08046B84();
  sub_08047018(in_stack_00000054,&stack0x0000000c,in_stack_00000050);
  return;
}


/* sub_08040602 @ 0x08040602 */

void sub_08040602(void)

{
  int unaff_r4;
  undefined4 *puVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  
  uVar2 = sub_08046B58();
  uVar2 = sub_08046B18((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),unaff_r7);
  in_stack_00000010 = sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x1e);
  uVar2 = sub_08046B58(unaff_r5,unaff_r6,in_stack_00000014);
  uVar2 = sub_08046B18((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),unaff_r7);
  in_stack_00000014 = sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x1e);
  uVar2 = sub_08046B58(unaff_r5,unaff_r6,in_stack_00000018);
  uVar2 = sub_08046B18((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),unaff_r7);
  in_stack_00000018 = sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x1e);
  uVar2 = sub_08046B58(unaff_r5,unaff_r6,in_stack_0000001c);
  uVar2 = sub_08046B18((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),unaff_r7);
  in_stack_0000001c = sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x1e);
  uVar2 = sub_08046B58(unaff_r5,unaff_r6,in_stack_00000020);
  uVar2 = sub_08046B18((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),unaff_r7);
  in_stack_00000020 = sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x1e);
  uVar2 = sub_08046B58(unaff_r5,unaff_r6,in_stack_00000024);
  uVar2 = sub_08046B18((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),unaff_r7);
  in_stack_00000024 = sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x1e);
  uVar2 = sub_08046B58(unaff_r5,unaff_r6,in_stack_00000028);
  uVar2 = sub_08046B18((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),unaff_r7);
  in_stack_00000028 = sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x1e);
  uVar2 = sub_08046B58(unaff_r5,unaff_r6,in_stack_0000002c);
  uVar2 = sub_08046B18((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),unaff_r7);
  in_stack_0000002c = sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x1e);
  puVar1 = (undefined4 *)(unaff_r4 + 0x24);
  lVar3 = sub_08046B70(in_stack_0000000c,*puVar1);
  lVar4 = sub_08046B70(in_stack_00000018,*(undefined4 *)(unaff_r4 + 0x28));
  lVar5 = sub_08046B70(in_stack_00000024,*(undefined4 *)(unaff_r4 + 0x2c));
  lVar5 = lVar3 + lVar4 + lVar5;
  uVar2 = sub_08046B18((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),0x200);
  sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),10);
  in_stack_00000030 = sub_08046B84();
  lVar3 = sub_08046B70(in_stack_00000010,*puVar1);
  lVar4 = sub_08046B70(in_stack_0000001c,*(undefined4 *)(unaff_r4 + 0x28));
  lVar5 = sub_08046B70(in_stack_00000028,*(undefined4 *)(unaff_r4 + 0x2c));
  lVar5 = lVar3 + lVar4 + lVar5;
  uVar2 = sub_08046B18((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),0x200);
  sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),10);
  in_stack_00000034 = sub_08046B84();
  lVar3 = sub_08046B70(in_stack_00000014,*puVar1);
  lVar4 = sub_08046B70(in_stack_00000020,*(undefined4 *)(unaff_r4 + 0x28));
  lVar5 = sub_08046B70(in_stack_0000002c,*(undefined4 *)(unaff_r4 + 0x2c));
  lVar5 = lVar3 + lVar4 + lVar5;
  uVar2 = sub_08046B18((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),0x200);
  sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),10);
  in_stack_00000038 = sub_08046B84();
  sub_08047018(in_stack_00000054,&stack0x0000000c,in_stack_00000050);
  return;
}


/* sub_08040708 @ 0x08040708 */

void sub_08040708(uint param_1,int param_2)

{
  int iVar1;
  undefined4 *unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *unaff_r6;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iStack00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  
  iStack00000004 = param_2;
  uVar2 = sub_08046B70(in_stack_0000001c,*unaff_r5);
  iVar1 = (int)((ulonglong)uVar2 >> 0x20) + iStack00000004;
  lVar3 = sub_08046B70(in_stack_00000028,*unaff_r6);
  lVar3 = lVar3 + CONCAT44(iVar1 + (uint)CARRY4((uint)uVar2,param_1),(uint)uVar2 + param_1);
  uVar2 = sub_08046B18((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),0x200);
  sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),10);
  in_stack_00000034 = sub_08046B84();
  lVar4 = sub_08046B70(in_stack_00000014,*unaff_r4);
  lVar5 = sub_08046B70(in_stack_00000020,*unaff_r5);
  lVar3 = sub_08046B70(in_stack_0000002c,*unaff_r6);
  lVar3 = lVar4 + lVar5 + lVar3;
  uVar2 = sub_08046B18((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),0x200);
  sub_08046C28((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),10);
  in_stack_00000038 = sub_08046B84();
  sub_08047018(in_stack_00000054,&stack0x0000000c,in_stack_00000050);
  return;
}


