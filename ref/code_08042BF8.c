/* Ghidra reference decompilation of code_08042BF8 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_08042BF8 @ 0x08042BF8 */

undefined4 sub_08042BF8(uint param_1,undefined2 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((DAT_03004ccc != 0) && ((DAT_03004ccc < 9 || (0xb < DAT_03004ccc)))) {
    DAT_03004cdc = 1;
    sub_0804333C(0xf3,1);
    return 1;
  }
  iVar1 = sub_0804400C();
  if (iVar1 == 0) {
    DAT_03004cdc = 2;
    sub_0804333C(0xf3,1);
    return 2;
  }
  uVar2 = 0;
  uVar3 = (uint)*(byte *)(DAT_0300525c + 8);
  while ((uVar2 < uVar3 && (*(ushort *)(uVar2 * 0x20 + DAT_0300525c + 0x14) != param_1))) {
    uVar2 = uVar2 + 1 & 0xff;
  }
  if ((uVar3 != 0) && (uVar3 != uVar2)) {
    if ((DAT_03004ccc == 0) || (DAT_03004ccc == 9)) {
      DAT_03004ccc = 0xc;
      DAT_03004ccd = 0xd;
    }
    else {
      DAT_03004ccc = 0xb;
      DAT_03004ccd = 0xc;
    }
    uRam03004ce6 = (short)param_1;
    DAT_03004ce2 = param_2;
    if (DAT_03004ccf != '\0') {
      DAT_03004ccf = '\a';
    }
    return 0;
  }
  DAT_03004cdc = 3;
  sub_0804333C(0xf3,1);
  return 3;
}


/* sub_08042C98 @ 0x08042C98 */

void sub_08042C98(uint param_1)

{
  uint uVar1;
  
  if ((DAT_03004cf8 & param_1) != 0) {
    DAT_03004cf8 = DAT_03004cf8 & ~(byte)param_1;
    uVar1 = 0;
    do {
      if ((1 << uVar1 & param_1) != 0) {
        (&DAT_03004cfc)[uVar1] = 0;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 4);
    param_1 = *(byte *)(DAT_0300525c + 3) & param_1;
    if (param_1 != 0) {
      sub_0804337C(param_1);
    }
    DAT_03004cdc = (undefined2)param_1;
    sub_0804333C(0x33,param_1);
  }
  return;
}


/* sub_08042CE6 @ 0x08042CE6 */

void sub_08042CE6(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = 0;
  DAT_03004ccf = 0;
  if (param_1 == 0) {
    switch(DAT_03004ccc) {
    case '\x05':
      DAT_03004ccc = '\b';
      DAT_03004ccd = 0;
      uVar1 = 0x13;
      break;
    case '\x06':
    case '\a':
      DAT_03004ccc = '\a';
      DAT_03004ccd = 8;
      break;
    case '\b':
    case '\x0f':
      break;
    case '\t':
      DAT_03004ccd = 0;
      DAT_03004ccc = '\0';
      uVar1 = 0x21;
      break;
    case '\n':
    case '\v':
      DAT_03004ccc = '\v';
      DAT_03004ccd = 0;
      break;
    case '\f':
      DAT_03004ccd = 0;
      DAT_03004ccc = '\0';
      uVar1 = 0x23;
      break;
    case '\r':
    case '\x0e':
      DAT_03004ccc = '\x0e';
      break;
    case '\x10':
      DAT_03004ccc = cRam03004cd9;
      DAT_03004ccd = uRam03004cda;
      sub_0804337C(*(undefined1 *)(DAT_0300525c + 3));
      cVar2 = '\x01';
      DAT_03004cdc = (ushort)*(byte *)(DAT_0300525c + 3);
      uVar1 = 0x33;
      goto _08042D7E;
    case '\x11':
    case '\x12':
      DAT_03004ccc = '\x12';
      break;
    default:
      DAT_03004ccd = 0;
      DAT_03004ccc = '\0';
      uVar1 = 0x43;
    }
    cVar2 = DAT_03004ccc;
    if (DAT_03004ccc == '\0') {
_08042D7E:
      sub_0804333C(uVar1,cVar2);
      return;
    }
  }
  else {
    sub_08042ADA();
    DAT_03004ccc = '\x17';
  }
  return;
}


/* sub_08042D78 @ 0x08042D78 */

void sub_08042D78(void)

{
  int unaff_r4;
  
  if (*(char *)(unaff_r4 + 4) == '\0') {
    sub_0804333C();
    return;
  }
  return;
}


/* sub_08042D84 @ 0x08042D84 */

void sub_08042D84(void)

{
  int iVar1;
  
  iVar1 = sub_080440E0();
  if (iVar1 != 0) {
    sub_0804333C(0xf1,0);
    sub_08043368();
  }
  return;
}


/* sub_08042D9C @ 0x08042D9C */

void sub_08042D9C(void)

{
  undefined4 in_r3;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_03004ce0 != 0) {
    if (*(char *)(DAT_0300525c + 4) != '\0') {
      uVar4 = 0;
      do {
        if ((int)((uint)*(ushort *)(&DAT_03005268)[uVar4] << 0x10) < 0) {
          uVar3 = 0;
          uVar2 = 0;
          do {
            puVar1 = &DAT_03005268;
            if ((((uint)*(byte *)((&DAT_03005268)[uVar4] + 0x1a) & 1 << uVar2) != 0) &&
               (puVar1 = (undefined4 *)(uint)DAT_03004ce0,
               puVar1 < (undefined4 *)(uint)*(ushort *)((&DAT_03005268)[uVar2] + 2))) {
              uVar3 = 1 << uVar2 & 0xffU | uVar3;
            }
            if (uVar3 != 0) {
              sub_08044A0C(0x20,uVar4,*(byte *)((&DAT_03005268)[uVar4] + 0x1a) ^ uVar3,puVar1,in_r3)
              ;
            }
            uVar2 = uVar2 + 1 & 0xff;
          } while (uVar2 < 4);
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 4);
    }
    if (*(char *)(DAT_0300525c + 5) != '\0') {
      uVar4 = 0;
      do {
        if (((int)((uint)*(ushort *)((&DAT_03005268)[uVar4] + 0x34) << 0x10) < 0) &&
           (DAT_03004ce0 < *(ushort *)((&DAT_03005268)[uVar4] + 0x36))) {
          sub_08044AF4(uVar4);
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 4);
    }
  }
  return;
}


/* sub_08042E3E @ 0x08042E3E */

void sub_08042E3E(void)

{
  if (DAT_03004cca == '\0') {
    sub_0804333C(0x45,0);
  }
  else if (DAT_03004cca == '\x01') {
    DAT_03004cca = 2;
    return;
  }
  return;
}


/* sub_08042E5E @ 0x08042E5E */

void sub_08042E5E(void)

{
  short sVar1;
  undefined2 uVar2;
  
  uVar2 = REG_IME;
  REG_IME = 0;
  if (DAT_03004ccc == '\x0f') {
    sVar1 = (&DAT_03004cf0)[DAT_03004cd8];
    (&DAT_03004cf0)[DAT_03004cd8] = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) {
      if (*(short *)(&DAT_03005268)[DAT_03004cd8] != 0x27) goto _08042EB6;
    }
    sub_08042E3E();
    DAT_03004ccc = '\x18';
    sub_080446A8(4,DAT_03004cd8);
    DAT_03004cec = DAT_03004cec & ~(byte)(1 << (uint)DAT_03004cd8);
    (&DAT_03004cf0)[DAT_03004cd8] = 0;
  }
_08042EB6:
  REG_IME = uVar2;
  if (DAT_03004ccc == '\x18') {
    if (DAT_03004cca == '\x01') {
      sub_08042E3E();
    }
    if (DAT_03004cca == '\0') {
      DAT_03004ccd = 0;
      DAT_03004ccc = '\0';
      sub_0804337C(*(byte *)(DAT_0300525c + 3) | *(byte *)(DAT_0300525c + 2));
      DAT_03004cdc = 0;
      sub_0804333C(0x25,1);
    }
  }
  return;
}


/* sub_08042EEC @ 0x08042EEC */

void sub_08042EEC(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((4 < DAT_03004ccc) && (DAT_03004ccc < 9)) {
    bVar1 = *(byte *)(DAT_0300525c + 2);
    uVar4 = (uint)((DAT_03004cd4 ^ bVar1) & bVar1) & ~(uint)*(byte *)(DAT_0300525c + 7);
    DAT_03004cd4 = bVar1;
    if (uVar4 != 0) {
      DAT_03004cdc = (ushort)uVar4;
      sub_0804333C(0x10,1,uVar4,param_4,param_2,param_3);
    }
    uVar5 = 0;
    uVar8 = 0;
    do {
      uVar7 = 1 << uVar5 & 0xff;
      uVar6 = 0;
      bVar1 = (byte)(1 << uVar5);
      if ((uVar4 & uVar7) == 0) {
        if ((DAT_03004cec & uVar7) != 0) {
          if (*(short *)((&DAT_03005268)[uVar5] + 0x34) == 0x46) {
            if (*(char *)((&DAT_03005268)[uVar5] + 0x61) == '\x01') {
              uVar6 = 2;
              for (psVar3 = DAT_03004ce8; *psVar3 != -1; psVar3 = psVar3 + 1) {
                if (*(short *)(uVar5 * 0x20 + DAT_0300525c + 0x18) == *psVar3) {
                  DAT_03004cc8 = DAT_03004cc8 | bVar1;
                  DAT_03004cc9 = DAT_03004cc9 + '\x01';
                  uVar8 = uVar8 | uVar7;
                  uVar6 = 3;
                  break;
                }
              }
              if (-1 < (int)(uVar6 << 0x1f)) {
                uVar6 = uVar6 | 4;
              }
            }
          }
          else {
            sVar2 = (&DAT_03004cf0)[uVar5];
            (&DAT_03004cf0)[uVar5] = sVar2 + -1;
            if ((short)(sVar2 + -1) == 0) {
              uVar6 = 6;
            }
          }
          if ((int)(uVar6 << 0x1e) < 0) {
            DAT_03004cec = DAT_03004cec & ~bVar1;
            (&DAT_03004cf0)[uVar5] = 0;
            sub_080446A8(8,uVar5);
          }
          if ((int)(uVar6 << 0x1d) < 0) {
            DAT_03004cd5 = DAT_03004cd5 | bVar1;
          }
        }
      }
      else {
        (&DAT_03004cf0)[uVar5] = DAT_03004cee;
        DAT_03004cec = DAT_03004cec | bVar1;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 4);
    if (uVar8 != 0) {
      DAT_03004cdc = (ushort)uVar8;
      sub_0804333C(0x11,1);
    }
    if ((DAT_03004cd5 != 0) &&
       ((*(char *)(DAT_0300525c + 6) == '\0' || ((DAT_03004ccb & DAT_03004cc8) == DAT_03004cc8)))) {
      sub_0804337C();
      DAT_03004cdc = (ushort)DAT_03004cd5;
      DAT_03004cd5 = 0;
      sub_0804333C(0x12,1);
    }
    if ((DAT_03004cec == 0) && (DAT_03004ccc == 8)) {
      if (DAT_03004ccf == '\0') {
        DAT_03004ccd = 0;
        DAT_03004ccc = 0;
        sub_0804333C(0x14);
      }
      else {
        if (DAT_03004ccf == '\x02') {
          DAT_03004ccf = '\x03';
          DAT_03004ccc = 9;
        }
        else {
          DAT_03004ccf = '\x01';
          DAT_03004ccc = 5;
        }
        if (DAT_03004cc8 != 0) {
          DAT_03004ce2 = 0;
          DAT_03004ccf = '\b';
          DAT_03004ccc = 5;
        }
      }
    }
  }
  return;
}


/* sub_08043098 @ 0x08043098 */

void sub_08043098(undefined4 param_1)

{
  uint extraout_r1;
  
  if (DAT_03004ccf == '\x05') {
    DAT_03004cce = 1;
    DAT_03004ccc = 5;
    DAT_03004ce2 = DAT_03004ce4;
    if (DAT_03004ce4 == 0) {
      DAT_03004ccf = '\x01';
    }
    else {
      DAT_03004ccf = '\x06';
    }
  }
  if (DAT_03004ccf == '\x01') {
    DAT_03004cce = 1;
    DAT_03004ccc = 5;
    sub_08046F30(0x8c,param_1);
    DAT_03004ce2 = (short)extraout_r1;
    DAT_03004ce4 = 0x8c - DAT_03004ce2;
    if ((extraout_r1 & 0xffff) == 0) {
      DAT_03004cce = 0;
      DAT_03004ce2 = 0x28;
      DAT_03004ccf = 4;
      DAT_03004ccc = 9;
      return;
    }
    DAT_03004ccf = '\x02';
  }
  else if (DAT_03004ccf == '\x03') {
    DAT_03004ccc = 9;
    DAT_03004cce = 0;
    DAT_03004ccf = 4;
    DAT_03004ce2 = 0x28;
    return;
  }
  return;
}


/* sub_080430FE @ 0x080430FE */

void sub_080430FE(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_03004d08 == 0) && (DAT_03004ccc != '\0')) {
    DAT_03004ccc = '\0';
  }
  else {
    if (DAT_03004ccf != '\0') {
      sub_08043098();
    }
    do {
      if (DAT_03004ccc == '\0') break;
      sub_0804389E();
      DAT_03004cd6 = 1;
      switch(DAT_03004ccc) {
      default:
        goto _080431B0;
      case '\x01':
        iVar2 = sub_08042278();
        if (iVar2 != 0x8001) {
          uVar1 = 0xff;
          goto _08043188;
        }
        DAT_03004ccc = DAT_03004ccd;
        DAT_03004ccd = '\x03';
        goto _080431B0;
      case '\x02':
        sub_08043A1E();
        goto _080431B0;
      case '\x03':
        sub_08043A30(*(undefined2 *)(DAT_03004d04 + 2),*DAT_03004d04,DAT_03004d04[1]);
        goto _080431B0;
      case '\x04':
        sub_08043AF2(DAT_03004d04[4],*(undefined2 *)(DAT_03004d04 + 6),
                     *(undefined4 *)(DAT_03004d04 + 8),*(undefined4 *)(DAT_03004d04 + 0xc));
        goto _080431B0;
      case '\x05':
        sub_08043BAC();
        break;
      case '\x06':
        sub_08043D5E();
        break;
      case '\a':
        sub_08043D70();
        break;
      case '\t':
        sub_08043D82();
        break;
      case '\n':
        sub_08043E66();
        break;
      case '\v':
        sub_08043E78();
        break;
      case '\f':
        sub_08043E8A(uRam03004ce6);
        break;
      case '\r':
        sub_08043FAA();
        break;
      case '\x0e':
        sub_08043FE4();
        break;
      case '\x10':
        sub_08044554(DAT_0300525c[3]);
        break;
      case '\x11':
        sub_080445FC();
        break;
      case '\x12':
        sub_08044630();
        break;
      case '\x13':
        sub_08044642();
        break;
      case '\x15':
        sub_0804397A();
        break;
      case '\x17':
        iVar2 = sub_08042278();
        if (iVar2 == 0x8001) {
          uVar1 = 0x44;
        }
        else {
          uVar1 = 0xff;
        }
_08043188:
        DAT_03004ccd = '\0';
        DAT_03004ccc = '\0';
        sub_0804333C(uVar1,0);
_080431B0:
      }
      sub_0804389E();
      DAT_03004cd6 = 0;
    } while ((DAT_03004ccc == '\x12') || (DAT_03004ccc == '\x13'));
    if ((*DAT_0300525c != '\x01') || (iVar2 = sub_08042372(0), iVar2 == 0)) {
      sub_08042EEC();
      sub_08042E5E();
      if ((DAT_03004cce == '\0') && (DAT_03004cd2 == '\x01')) {
        cRam03004cd9 = DAT_03004ccc;
        cRam03004cda = DAT_03004ccd;
        DAT_03004ccc = '\x10';
        DAT_03004ccd = '\x11';
        DAT_03004cd2 = '\x02';
      }
      sub_08042D9C();
    }
  }
  return;
}


/* sub_08043260 @ 0x08043260 */

void sub_08043260(undefined4 param_1)

{
  DAT_03004d0c = param_1;
  sub_08043860(0x8042a4f);
  return;
}


/* sub_0804326E @ 0x0804326E */

void sub_0804326E(undefined4 param_1)

{
  DAT_03004d08 = param_1;
  return;
}


/* sub_08043274 @ 0x08043274 */

undefined4 sub_08043274(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  if (((DAT_03004cd1 != '\0') && (param_1 == 0)) && (DAT_03004cf8 != '\0')) {
    return 5;
  }
  uVar1 = REG_IME;
  REG_IME = 0;
  DAT_03004cd1 = (char)param_1;
  DAT_03004cfa = param_2;
  REG_IME = uVar1;
  return 0;
}


/* sub_08043276 @ 0x08043276 */

undefined4 sub_08043276(int param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  
  if (((*(char *)(param_3 + 9) != '\0') && (param_1 == 0)) && (*(char *)(param_3 + 0x30) != '\0')) {
    return 5;
  }
  uVar1 = REG_IME;
  REG_IME = 0;
  *(char *)(param_3 + 9) = (char)param_1;
  *(undefined2 *)(param_3 + 0x32) = param_2;
  REG_IME = uVar1;
  return 0;
}


/* sub_080432A0 @ 0x080432A0 */

undefined4 sub_080432A0(undefined2 param_1)

{
  if (*(char *)(DAT_0300525c + 5) != '\0' || *(char *)(DAT_0300525c + 4) != '\0') {
    DAT_03004cdc = 6;
    sub_0804333C(0xf3,1);
    return 6;
  }
  DAT_03004ce0 = param_1;
  return 0;
}


/* sub_080432A2 @ 0x080432A2 */

undefined4 sub_080432A2(undefined2 param_1,int *param_2)

{
  if (*(char *)(*param_2 + 5) != '\0' || *(char *)(*param_2 + 4) != '\0') {
    DAT_03004cdc = 6;
    sub_0804333C(0xf3,1);
    return 6;
  }
  DAT_03004ce0 = param_1;
  return 0;
}


/* sub_080432C8 @ 0x080432C8 */

undefined4 sub_080432C8(int param_1)

{
  if (((DAT_03004ccc != '\t') && (DAT_03004ccc != '\n')) && (DAT_03004ccc != '\v')) {
    DAT_03004cd3 = param_1 != 0;
    return 0;
  }
  DAT_03004cdc = 7;
  sub_0804333C(0xf3,1);
  return 7;
}


/* sub_080432CA @ 0x080432CA */

undefined4 sub_080432CA(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_3 + 4);
  if (((cVar1 != '\t') && (cVar1 != '\n')) && (cVar1 != '\v')) {
    *(bool *)(param_3 + 0xb) = param_1 != 0;
    return 0;
  }
  *(undefined2 *)(param_3 + 0x14) = 7;
  sub_0804333C(0xf3,1);
  return 7;
}


/* sub_080432FA @ 0x080432FA */

void sub_080432FA(void)

{
  if (DAT_03004ccf != '\0') {
    switch(DAT_03004ccc) {
    case 5:
      DAT_03004ccf = '\x03';
      DAT_03004ccc = 9;
      break;
    case 6:
      DAT_03004ccf = 2;
      DAT_03004ce2 = 1;
      return;
    case 7:
    case 8:
      DAT_03004ccf = 2;
      return;
    case 9:
    case 10:
      DAT_03004ce2 = 0x28;
      return;
    case 0xb:
      DAT_03004ce2 = 0x28;
      DAT_03004ccc = 10;
      break;
    default:
      return;
    }
    return;
  }
  return;
}


/* sub_080432FC @ 0x080432FC */

void sub_080432FC(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  if (*(char *)(param_1 + 7) == '\0') {
    return;
  }
  uVar2 = 0x28;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 5:
    *(undefined1 *)(param_1 + 7) = 3;
    uVar1 = 9;
    break;
  case 6:
    *(undefined1 *)(param_1 + 7) = 2;
    uVar2 = 1;
  case 9:
  case 10:
    *(undefined2 *)(param_1 + 0x1a) = uVar2;
    return;
  case 7:
  case 8:
    *(undefined1 *)(param_1 + 7) = 2;
    return;
  case 0xb:
    *(undefined2 *)(param_1 + 0x1a) = 0x28;
    uVar1 = 10;
    break;
  default:
    return;
  }
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}


/* sub_0804333C @ 0x0804333C */

void sub_0804333C(void)

{
  if (DAT_03004d08 != 0) {
    __call_via_r2();
  }
  DAT_03004cde = 0;
  DAT_03004cdc = 0;
  return;
}


/* sub_08043368 @ 0x08043368 */

void sub_08043368(void)

{
  if (DAT_03004cca != '\0') {
    DAT_03004cca = 0;
    if (DAT_03004d08 != 0) {
      __call_via_r2(0x45,0);
    }
    DAT_03004cde = 0;
    DAT_03004cdc = 0;
    return;
  }
  return;
}


/* sub_0804337C @ 0x0804337C */

void sub_0804337C(void)

{
  undefined1 uVar1;
  
  uVar1 = DAT_03004cd6;
  DAT_03004cd6 = 1;
  sub_080444EE();
  sub_0804389E();
  DAT_03004cd6 = uVar1;
  return;
}


/* sub_08043392 @ 0x08043392 */

void sub_08043392(void)

{
  if ((DAT_03004ccc == '\x0f') && (*(short *)(&DAT_03005268)[DAT_03004cd8] == 0x26)) {
    DAT_03004ccd = 0;
    DAT_03004ccc = '\0';
    sub_080446A8(4);
    DAT_03004cec = DAT_03004cec & ~(byte)(1 << (uint)DAT_03004cd8);
    (&DAT_03004cf0)[DAT_03004cd8] = 0;
    sub_0804333C(0x24,0);
  }
  return;
}


/* sub_080433E0 @ 0x080433E0 */

void sub_080433E0(void)

{
  software_interrupt(0xb);
  return;
}


/* sub_080433E6 @ 0x080433E6 */

void sub_080433E6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __16__rt_sdiv(param_2,param_1,param_1,param_4,param_4);
  return;
}


/* sub_080433F4 @ 0x080433F4 */

void sub_080433F4(void)

{
  ushort uVar1;
  undefined4 in_r3;
  
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 & 0xff3f;
  REG_IME = 1;
  sub_0804362E(&DAT_03004d14,0x504,&DAT_03000fcc,0,in_r3);
  sub_0804384E(3,&DAT_03000fc8);
  DAT_03000fc8 = DAT_03000fc8 | 1;
  REG_TM2CNT = 0x8300;
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 | 0xc0;
  REG_IME = 1;
  return;
}


/* sub_0804344A @ 0x0804344A */

void sub_0804344A(void)

{
  ushort uVar1;
  
  sub_08043558();
  sub_0804389E();
  sub_08042CE6(1);
  sub_0804389E();
  sub_08042B34();
  sub_0804389E();
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 & 0xff3f;
  REG_IME = 1;
  return;
}


/* sub_0804347E @ 0x0804347E */

void sub_0804347E(undefined1 *param_1)

{
  sub_08049168((int)param_1,0,100);
  *param_1 = 1;
  return;
}


/* sub_08043490 @ 0x08043490 */

undefined4 sub_08043490(char *param_1,int param_2)

{
  if ((*param_1 == '\0') && ((uint)(byte)param_1[1] == (uint)(byte)param_1[2])) {
    return 1;
  }
  sub_08049144((int)(param_1 + (uint)(byte)param_1[2] * 0x18 + 4),param_2,0x18);
  param_1[3] = param_1[3] + '\x01';
  param_1[2] = param_1[2] + 1U & 3;
  *param_1 = '\0';
  return 0;
}


/* sub_080434CC @ 0x080434CC */

undefined4 sub_080434CC(char *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
    REG_IME = 0;
    sub_08049144(param_2,(int)(param_1 + (uint)(byte)param_1[1] * 0x18 + 4),0x18);
    sub_08049168((int)(param_1 + (uint)(byte)param_1[1] * 0x18 + 4),0,0x18);
    param_1[3] = param_1[3] + -1;
    bVar1 = param_1[1] + 1U & 3;
    param_1[1] = bVar1;
    if (bVar1 == param_1[2]) {
      *param_1 = '\x01';
    }
    REG_IME = 1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* sub_08043528 @ 0x08043528 */

void sub_08043528(undefined4 param_1,int param_2)

{
  byte bVar1;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    DAT_03004d10 = *(undefined1 *)(param_2 + 2);
    bVar1 = 0;
    do {
      bVar1 = bVar1 + 1;
    } while (bVar1 < 5);
  }
  return;
}


/* sub_08043558 @ 0x08043558 */

void sub_08043558(void)

{
  undefined2 uVar1;
  int iVar2;
  uint in_r3;
  uint uVar3;
  uint local_18;
  
  uVar1 = REG_IME;
  REG_IME = 0;
  uVar3 = 0;
  local_18 = in_r3;
  do {
    local_18 = local_18 & 0xffff0000;
    sub_080433E0(&local_18,(&DAT_03005268)[uVar3],0x1000034);
    local_18 = local_18 & 0xffff0000;
    sub_080433E0(&local_18,(&DAT_03005278)[uVar3],0x100000a);
    iVar2 = DAT_0300525c + uVar3;
    uVar3 = uVar3 + 1 & 0xffff;
    *(undefined1 *)(iVar2 + 0x10) = 0x10;
    iVar2 = DAT_0300525c;
  } while (uVar3 < 4);
  *(undefined1 *)(DAT_0300525c + 0xf) = 0x57;
  *(undefined1 *)(iVar2 + 4) = 0;
  *(undefined1 *)(iVar2 + 5) = 0;
  *(undefined1 *)(iVar2 + 6) = 0;
  *(undefined1 *)(DAT_03005260 + 2) = 0;
  REG_IME = uVar1;
  return;
}


/* sub_080435BE @ 0x080435BE */

void sub_080435BE(void)

{
  byte bVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint in_r3;
  uint local_18;
  
  uVar2 = REG_IME;
  REG_IME = 0;
  bVar1 = *DAT_03005260;
  local_18 = in_r3 & 0xffff0000;
  sub_080433E0(&local_18,DAT_03005260,0x1000014);
  *DAT_03005260 = bVar1 & 8;
  local_18 = local_18 & 0xffff0000;
  sub_080433E0(&local_18,DAT_0300525c,0x100005a);
  puVar3 = DAT_0300525c;
  DAT_0300525c[9] = 4;
  DAT_03005260[6] = 0;
  *puVar3 = 0xff;
  sub_08043558();
  pbVar4 = DAT_03005260;
  uVar5 = 0;
  DAT_03005260[9] = 0;
  do {
    iVar6 = uVar5 * 2;
    uVar5 = uVar5 + 1 & 0xff;
    (pbVar4 + iVar6 + 0x12)[0] = 0;
    (pbVar4 + iVar6 + 0x12)[1] = 0;
  } while (uVar5 < 4);
  REG_IME = uVar2;
  return;
}


/* sub_0804362E @ 0x0804362E */

undefined4 sub_0804362E(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  short sVar6;
  undefined2 *puVar7;
  uint uVar8;
  
  if ((((param_1 << 4) >> 0x1c == 2) && (param_4 != 0)) || ((param_1 & 3) != 0)) {
    uVar2 = 2;
  }
  else {
    if (param_4 == 0) {
      uVar8 = 0x504;
    }
    else {
      uVar8 = 0xe64;
    }
    if (param_2 < uVar8) {
      uVar2 = 1;
    }
    else {
      DAT_03005260 = param_1 + 0xb4;
      DAT_03005264 = param_1 + 0xdc;
      DAT_03005268 = param_1 + 0x1bc;
      DAT_03005278 = param_1 + 0x37c;
      uVar8 = 1;
      DAT_0300525c = param_1;
      do {
        (&DAT_03005268)[uVar8] = (&DAT_03005264)[uVar8] + 0x70;
        uVar3 = uVar8 + 1 & 0xffff;
        (&DAT_03005278)[uVar8] = *(int *)(uVar8 * 4 + 0x3005274) + 0x1c;
        uVar8 = uVar3;
      } while (uVar3 < 4);
      iVar4 = DAT_03005284 + 0x1c;
      *(int *)(param_1 + 0x1b8) = iVar4;
      sub_08045A70(iVar4,param_3);
      sub_080435BE();
      uVar8 = 0;
      do {
        *(undefined4 *)((&DAT_03005268)[uVar8] + 0x68) = 0;
        *(undefined4 *)((&DAT_03005268)[uVar8] + 0x6c) = 0;
        uVar3 = uVar8 + 1 & 0xffff;
        *(undefined4 *)((&DAT_03005278)[uVar8] + 0x14) = 0;
        *(undefined4 *)((&DAT_03005278)[uVar8] + 0x18) = 0;
        uVar8 = uVar3;
      } while (uVar3 < 4);
      pcVar5 = sub_08045530;
      puVar7 = (undefined2 *)(DAT_03005264 + 8);
      sVar6 = 0x30;
      while (sVar6 != 0) {
        uVar1 = *(undefined2 *)pcVar5;
        pcVar5 = pcVar5 + 2;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
        sVar6 = sVar6 + -1;
      }
      *(int *)(DAT_03005264 + 4) = DAT_03005264 + 9;
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* sub_08043706 @ 0x08043706 */

void sub_08043706(uint param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint local_18;
  
  pcVar3 = DAT_0300525c;
  uVar4 = 1 << (param_1 & 0xff);
  uVar5 = uVar4 & 0xff;
  pbVar1 = (byte *)(DAT_0300525c + 2);
  if (((*pbVar1 & uVar5) != 0) && (DAT_0300525c[1] != '\0')) {
    DAT_0300525c[1] = DAT_0300525c[1] + -1;
  }
  uVar5 = (uint)*pbVar1 & ~uVar5;
  pcVar3[2] = (char)uVar5;
  bVar2 = (byte)uVar4;
  pcVar3[3] = pcVar3[3] | bVar2;
  if ((*pcVar3 == '\0') && (uVar5 == 0)) {
    *pcVar3 = -1;
  }
  if (param_2 != 0) {
    local_18 = param_4 & 0xffff0000;
    sub_080433E0(&local_18,pcVar3 + param_1 * 0x20 + 0x14,0x1000010);
    pcVar3 = DAT_0300525c;
    DAT_0300525c[3] = DAT_0300525c[3] & ~bVar2;
    pcVar3[7] = pcVar3[7] & ~bVar2;
    pcVar3[param_1 + 10] = '\0';
  }
  return;
}


/* sub_08043774 @ 0x08043774 */

void sub_08043774(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1 == 0xff) {
    if ((int)((uint)*DAT_03005260 << 0x1c) < 0) {
      __call_via_r2(0xff,param_2,*DAT_03005264,param_4,param_4);
    }
    uVar3 = 0;
    bVar1 = DAT_0300525c[2];
    bVar2 = DAT_0300525c[3];
    do {
      if ((1 << uVar3 & (uint)(bVar1 | bVar2)) != 0) {
        sub_08043706(uVar3,1);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    *DAT_0300525c = 0xff;
  }
  return;
}


/* sub_080437C2 @ 0x080437C2 */

void sub_080437C2(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  
  sub_08045A5E(0x8043775);
  pbVar1 = DAT_03005260;
  *(short *)(DAT_03005260 + 0x1c) = (short)param_2;
  if ((int)((uint)*pbVar1 << 0x1c) < 0) {
    __call_via_r2(param_1,param_2,*DAT_03005264);
  }
  return;
}


/* sub_080437EE @ 0x080437EE */

void sub_080437EE(void)

{
  sub_08045A5E(0x80437c3);
  sub_080461B2();
  return;
}


/* sub_08043800 @ 0x08043800 */

undefined4 sub_08043800(void)

{
  return *(undefined4 *)(DAT_03005264 + 0xdc);
}


/* sub_0804380C @ 0x0804380C */

undefined4 sub_0804380C(undefined1 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  piVar4 = (int *)&DAT_0300525c;
  if (*DAT_0300525c == '\x01') {
    uVar5 = sub_08043800();
    pcVar3 = (char *)uVar5;
    if ((*pcVar3 == '(') || (*pcVar3 == '6')) {
      if (pcVar3[1] == '\0') {
        cVar1 = *(char *)(*piVar4 + 2);
      }
      else {
        cVar1 = pcVar3[4];
      }
      *(char *)((ulonglong)uVar5 >> 0x20) = cVar1;
      uVar2 = 0;
    }
    else {
      uVar2 = 0x10;
    }
  }
  else {
    uVar2 = 0x300;
  }
  return uVar2;
}


/* sub_0804384E @ 0x0804384E */

void sub_0804384E(undefined4 param_1,undefined4 param_2)

{
  sub_08045CA8(param_2,param_1);
  return;
}


/* sub_08043860 @ 0x08043860 */

void sub_08043860(void)

{
  sub_08045A4C();
  return;
}


/* sub_0804388A @ 0x0804388A */

void sub_0804388A(int param_1)

{
  *DAT_03005264 = param_1;
  if (param_1 != 0) {
    *DAT_03005260 = *DAT_03005260 | 8;
    return;
  }
  *DAT_03005260 = *DAT_03005260 & 0xf7;
  return;
}


/* sub_0804389E @ 0x0804389E */

undefined2 sub_0804389E(void)

{
  sub_08045D7A();
  return *(undefined2 *)(DAT_03005260 + 0x1c);
}


/* sub_080438B2 @ 0x080438B2 */

void sub_080438B2(void)

{
  sub_08045A5E(0x80437c3);
  sub_08045EA8();
  return;
}


/* sub_080438C4 @ 0x080438C4 */

undefined4 sub_080438C4(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (**(char **)(DAT_03005264 + 0xdc) == -0x6d) {
    iVar3 = sub_08045D7A();
    if (iVar3 == 0) {
      uVar1 = *(undefined1 *)(*(int *)(DAT_03005264 + 0xdc) + 7);
    }
    else {
      uVar1 = 0xff;
    }
    *param_1 = uVar1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
  }
  return uVar2;
}


/* sub_0804391C @ 0x0804391C */

void sub_0804391C(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  short sVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  pcVar3 = "RFU-MBOOT";
  pcVar7 = (char *)0x30000f0;
  while (cVar2 = *pcVar3, cVar2 != '\0') {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
    if (cVar2 != cVar1) goto _0804395A;
  }
  pcVar4 = sub_03000000;
  bVar6 = 0;
  sVar8 = 0;
  do {
    bVar6 = bVar6 + 1;
    sVar8 = *(short *)pcVar4 + sVar8;
    pcVar4 = pcVar4 + 2;
  } while (bVar6 < 0x5a);
  if (sVar8 == -0x1c60) {
    sub_080433E0(0x3000000,DAT_0300525c,0x5a);
    *DAT_03005260 = *DAT_03005260 | 0x80;
    uVar5 = 0;
  }
  else {
_0804395A:
    uVar5 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x08043960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5);
  return;
}


/* sub_0804397A @ 0x0804397A */

void sub_0804397A(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  
  sVar1 = REG_IME;
  if (sVar1 == 0) {
    sub_080437C2(0x3d,6);
    *(undefined2 *)(DAT_03005294 + 0x12) = 6;
  }
  else {
    sub_08045CCE();
    sub_080435BE();
    iVar2 = sub_080459A4(8);
    if (iVar2 == 0x8001) {
      piVar3 = (int *)(&REG_TM0CNT + (uint)*(byte *)(DAT_03005294 + 10) * 2);
      *piVar3 = 0;
      *piVar3 = 0x830000;
      do {
      } while ((uint)(*piVar3 << 0x10) < 0x1060000);
      *piVar3 = 0;
      sub_08045A5E(0x804554d);
      sub_0804628A();
    }
    else {
      DAT_04000128 = 0x2000;
      sub_080437C2(0x3d,0);
    }
  }
  return;
}


/* sub_080439EE @ 0x080439EE */

int sub_080439EE(void)

{
  short sVar1;
  int iVar2;
  
  sVar1 = REG_IME;
  if (sVar1 == 0) {
    iVar2 = -1;
  }
  else {
    sub_08045CCE();
    sub_080435BE();
    iVar2 = sub_080459A4(0x1e);
    if (iVar2 == 0) {
      DAT_04000128 = 0x2000;
    }
  }
  return iVar2;
}


/* sub_08043A1E @ 0x08043A1E */

void sub_08043A1E(void)

{
  sub_08045A5E(0x8045565);
  sub_08045E54();
  return;
}


/* sub_08043A30 @ 0x08043A30 */

void sub_08043A30(uint param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  sub_08045A5E(0x80437c3);
  sub_08045F4A((param_1 & 3) + 0x3c,param_2,param_3);
  if (param_3 == 0) {
    *(undefined2 *)(DAT_03005260 + 0x1a) = 1;
  }
  else {
    uVar1 = REG_IME;
    REG_IME = 0;
    uVar2 = sub_080433E6(600,param_3);
    *(undefined2 *)(DAT_03005260 + 0x1a) = uVar2;
    REG_IME = uVar1;
  }
  return;
}


/* sub_08043A78 @ 0x08043A78 */

void sub_08043A78(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar10;
  
  iVar4 = DAT_0300525c;
  if (param_2 == 0) {
    iVar6 = *(int *)(DAT_03005294 + 0x24);
    bVar1 = *(byte *)(iVar6 + 4);
    *(ushort *)(DAT_0300525c + 0x98) = (ushort)bVar1;
    uVar3 = CONCAT11(*(undefined1 *)(iVar6 + 5),bVar1);
    *(ushort *)(iVar4 + 0x98) = uVar3;
    iVar9 = DAT_0300525c;
    bVar10 = (int)((uint)uVar3 * 0x10000) < 0;
    if (bVar10) {
      *(ushort *)(iVar4 + 0x98) = uVar3 ^ 0x8000;
    }
    *(bool *)(iVar9 + 0x97) = bVar10;
    uVar7 = 0;
    puVar5 = (undefined1 *)(iVar6 + 6);
    do {
      puVar8 = puVar5;
      iVar9 = iVar4 + uVar7;
      uVar7 = uVar7 + 1 & 0xff;
      *(undefined1 *)(iVar9 + 0x9a) = *puVar8;
      puVar5 = puVar8 + 1;
    } while (uVar7 < 0xd);
    puVar8 = puVar8 + 2;
    uVar7 = 0;
    do {
      iVar9 = iVar4 + uVar7;
      uVar2 = *puVar8;
      uVar7 = uVar7 + 1 & 0xff;
      puVar8 = puVar8 + 1;
      *(undefined1 *)(iVar9 + 0xa9) = uVar2;
    } while (uVar7 < 8);
  }
  sub_080437C2();
                    /* WARNING: Could not recover jumptable at 0x08043af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08043AF2 @ 0x08043AF2 */

undefined8 sub_08043AF2(int param_1,undefined4 param_2,char *param_3,char *param_4)

{
  char cVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  char local_20 [2];
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  char *pcStack_18;
  undefined4 uStack_14;
  
  uStack_1e = (undefined2)((uint)param_1 >> 0x10);
  local_20[0] = (char)param_2;
  local_20[1] = (char)((uint)param_2 >> 8);
  if (param_1 != 0) {
    local_20[1] = local_20[1] | 0x80;
  }
  uVar4 = 2;
  pcVar6 = param_3;
  uStack_1c = param_2;
  pcStack_18 = param_3;
  uStack_14 = param_4;
  do {
    cVar5 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    local_20[uVar4] = cVar5;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 0xf);
  cVar5 = '\0';
  bVar3 = 0;
  pcVar6 = param_4;
  do {
    bVar3 = bVar3 + 1;
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    cVar5 = cVar1 + *pcVar6 + cVar5;
    pcVar6 = pcVar6 + 1;
  } while (bVar3 < 8);
  uVar2 = (undefined3)uStack_14;
  uStack_14 = (char *)(CONCAT13(cVar5,(undefined3)uStack_14) ^ 0xff000000);
  if (param_1 != 0) {
    uStack_14 = (char *)(CONCAT13(uStack_14._3_1_,uVar2) & 0xff00ffff);
  }
  sub_08045A5E(0x8043a79);
  sub_08045EFC(local_20,param_4);
  return CONCAT44(uStack_1c,CONCAT22(uStack_1e,CONCAT11(local_20[1],local_20[0])));
}


/* sub_08043B66 @ 0x08043B66 */

void sub_08043B66(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_10;
  
  local_10 = param_4;
  sub_08043558();
  if (param_1 != 0) {
    local_10 = local_10 & 0xffff0000;
    sub_080433E0(&local_10,DAT_0300525c + 0x14,0x1000040);
    *(undefined1 *)(DAT_0300525c + 8) = 0;
  }
  iVar1 = DAT_0300525c;
  uVar2 = 0;
  do {
    iVar3 = iVar1 + uVar2;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined1 *)(iVar3 + 10) = 0;
  } while (uVar2 < 4);
  *(undefined1 *)(iVar1 + 1) = 0;
  *(undefined1 *)(iVar1 + 2) = 0;
  *(undefined1 *)(iVar1 + 3) = 0;
  *(undefined1 *)(iVar1 + 7) = 0;
  return;
}


/* sub_08043BAC @ 0x08043BAC */

void sub_08043BAC(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  sub_08045A5E(0x8043775);
  sub_08045EA8();
  iVar1 = sub_08045D7A();
  if (iVar1 == 0) {
    if (*(char *)(*(int *)(DAT_03005264 + 0xdc) + 7) == '\0') {
      sub_08043B66(1);
    }
  }
  else {
    sub_080437C2(0x19,iVar1);
  }
  sub_08045A5E(0x804557f);
  sub_08045F7C();
                    /* WARNING: Could not recover jumptable at 0x08043bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08043BEE @ 0x08043BEE */

void sub_08043BEE(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined4 in_r3;
  uint uVar8;
  char cVar9;
  undefined4 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_18;
  
  local_18 = in_r3;
  cVar9 = *(char *)(*(int *)(DAT_03005264 + 0xdc) + 1);
  if (cVar9 != '\0') {
    uVar10 = *(undefined4 *)(*(int *)(DAT_03005264 + 0xdc) + 4);
    sub_08045A5E(0x8043775);
    sub_08045E70();
    iVar4 = sub_08045D7A();
    if (iVar4 == 0) {
      puVar6 = (undefined1 *)(*(int *)(DAT_03005264 + 0xdc) + 4);
      uVar5 = 0;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *(undefined1 *)((int)&local_18 + uVar5) = uVar1;
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < 4);
    }
    *(undefined4 *)(*(int *)(DAT_03005264 + 0xdc) + 4) = uVar10;
  }
  puVar7 = *(undefined2 **)(DAT_03005264 + 0xdc);
  for (; puVar6 = DAT_0300525c, cVar9 != '\0'; cVar9 = cVar9 + -1) {
    bVar2 = *(byte *)(puVar7 + 3);
    uVar5 = (uint)bVar2;
    if (uVar5 < 4) {
      uVar8 = 1 << uVar5;
      if ((((byte)DAT_0300525c[2] & uVar8) == 0) && (((byte)DAT_0300525c[3] & uVar8) == 0)) {
        if (*(char *)((int)&local_18 + uVar5) != '\0') {
          DAT_03005260[uVar5 + 0xe] = DAT_03005260[uVar5 + 0xe] + 1;
        }
        if (3 < DAT_03005260[uVar5 + 0xe]) {
          DAT_03005260[uVar5 + 0xe] = 0;
          puVar6[uVar5 + 10] = 0xff;
          puVar6[2] = (byte)uVar8 | puVar6[2];
          iVar4 = uVar5 * 0x20;
          puVar6[1] = puVar6[1] + '\x01';
          *(undefined2 *)(puVar6 + iVar4 + 0x14) = puVar7[2];
          puVar6[iVar4 + 0x16] = bVar2;
          *puVar6 = 1;
          pbVar3 = DAT_03005260;
          *DAT_03005260 = *DAT_03005260 & 0x7f;
          *(undefined2 *)(pbVar3 + uVar5 * 2 + 0x12) = *(undefined2 *)(DAT_0300525c + iVar4 + 0x14);
        }
      }
    }
    puVar7 = puVar7 + 2;
  }
                    /* WARNING: Could not recover jumptable at 0x08043cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08043CFC @ 0x08043CFC */

void sub_08043CFC(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    sub_08043BEE();
  }
  if (param_1 == 0x1a) {
    if (*(short *)(DAT_0300525c + 0x94) == 0) {
      sub_08045A5E(0x8043775);
      sub_08045EA8();
      iVar2 = sub_08045D7A();
      if (iVar2 == 0) {
        *(undefined2 *)(DAT_0300525c + 0x94) = *(undefined2 *)(*(int *)(DAT_03005264 + 0xdc) + 4);
      }
    }
  }
  else if (param_1 == 0x1b) {
    if (*DAT_0300525c == -1) {
      pcVar1 = DAT_0300525c;
      pcVar1[0x94] = '\0';
      pcVar1[0x95] = '\0';
    }
    *(undefined1 *)(DAT_03005260 + 9) = 0;
  }
  sub_080437C2(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x08043d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08043D5E @ 0x08043D5E */

void sub_08043D5E(void)

{
  sub_08045A5E(0x8043cfd);
  sub_08045F98();
  return;
}


/* sub_08043D70 @ 0x08043D70 */

void sub_08043D70(void)

{
  sub_08045A5E(0x8043cfd);
  sub_08045FB4();
  return;
}


/* sub_08043D82 @ 0x08043D82 */

void sub_08043D82(void)

{
  sub_08045A5E(0x8045599);
  sub_08045FD0();
  return;
}


/* sub_08043D94 @ 0x08043D94 */

void sub_08043D94(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  uint in_r3;
  undefined2 *puVar11;
  byte bVar12;
  char *pcVar13;
  code *UNRECOVERED_JUMPTABLE;
  uint local_18;
  
  local_18 = in_r3 & 0xffff0000;
  sub_080433E0(&local_18,DAT_0300525c + 0x14,0x1000040);
  iVar2 = *(int *)(DAT_03005264 + 0xdc);
  cVar9 = *(char *)(iVar2 + 1);
  *(undefined1 *)(DAT_0300525c + 8) = 0;
  pcVar3 = (char *)(iVar2 + 4);
  bVar8 = 0;
  do {
    if (cVar9 == '\0') break;
    pcVar13 = pcVar3 + 6;
    pbVar4 = (byte *)(pcVar3 + 0x13);
    cVar9 = cVar9 + -7;
    bVar12 = 0;
    bVar10 = 0;
    pcVar3 = pcVar3 + 0x14;
    do {
      pcVar5 = pcVar3;
      bVar10 = bVar10 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      bVar12 = cVar1 + *pcVar5 + bVar12;
      pcVar3 = pcVar5 + 1;
    } while (bVar10 < 8);
    if (bVar12 == (*pbVar4 ^ 0xff)) {
      iVar2 = (uint)*(byte *)(DAT_0300525c + 8) * 0x20 + DAT_0300525c;
      puVar11 = (undefined2 *)(iVar2 + 0x14);
      *puVar11 = *(undefined2 *)(pcVar5 + -0x1b);
      *(char *)(iVar2 + 0x16) = pcVar5[-0x19];
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(pcVar5 + -0x17) & 0x7fff;
      *(bool *)(iVar2 + 0x17) = (int)((uint)*(ushort *)(pcVar5 + -0x17) << 0x10) < 0;
      uVar6 = 0;
      pcVar13 = pcVar5 + -0x15;
      do {
        pcVar3 = pcVar13;
        uVar7 = uVar6 + 1 & 0xff;
        *(char *)((int)puVar11 + uVar6 + 6) = *pcVar3;
        uVar6 = uVar7;
        pcVar13 = pcVar3 + 1;
      } while (uVar7 < 0xd);
      pcVar3 = pcVar3 + 2;
      uVar6 = 0;
      do {
        cVar1 = *pcVar3;
        uVar7 = uVar6 + 1 & 0xff;
        pcVar3 = pcVar3 + 1;
        *(char *)((int)puVar11 + uVar6 + 0x15) = cVar1;
        uVar6 = uVar7;
      } while (uVar7 < 8);
      *(char *)(DAT_0300525c + 8) = *(char *)(DAT_0300525c + 8) + '\x01';
    }
    bVar8 = bVar8 + 1;
  } while (bVar8 < 4);
                    /* WARNING: Could not recover jumptable at 0x08043e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08043E66 @ 0x08043E66 */

void sub_08043E66(void)

{
  sub_08045A5E(0x80455b5);
  sub_08045FEC();
  return;
}


/* sub_08043E78 @ 0x08043E78 */

void sub_08043E78(void)

{
  sub_08045A5E(0x80437c3);
  sub_08046008();
  return;
}


/* sub_08043E8A @ 0x08043E8A */

void sub_08043E8A(uint param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = 0;
  do {
    if (*(ushort *)(uVar1 * 0x20 + DAT_0300525c + 0x14) == param_1) break;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  if (uVar1 == 4) {
    sub_080437C2(0x1f,0x100);
  }
  else {
    *(short *)(DAT_03005260 + 0x1e) = (short)param_1;
    sub_08045A5E(0x80437c3);
    sub_08046024(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x08043eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08043ED4 @ 0x08043ED4 */

void sub_08043ED4(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 local_40 [2];
  undefined1 auStack_3c [32];
  undefined4 uStack_1c;
  int iStack_18;
  
  puVar7 = DAT_0300525c;
  uStack_1c = param_1;
  iStack_18 = param_2;
  if (param_2 == 0) {
    iVar5 = *(int *)(DAT_03005264 + 0xdc);
    uVar2 = *(undefined2 *)(iVar5 + 4);
    bVar1 = *(byte *)(iVar5 + 6);
    if (*(char *)(iVar5 + 7) == '\0') {
      uVar6 = 1 << (uint)bVar1;
      if (((uint)(byte)DAT_0300525c[2] & uVar6 & 0xff) == 0) {
        bVar3 = (byte)uVar6;
        DAT_0300525c[2] = DAT_0300525c[2] | bVar3;
        puVar7[3] = puVar7[3] & ~bVar3;
        *(undefined2 *)(puVar7 + 0x94) = uVar2;
        puVar7[1] = puVar7[1] + '\x01';
        *puVar7 = 0;
        pbVar4 = DAT_03005260;
        *DAT_03005260 = *DAT_03005260 | 0x80;
        uVar6 = 0;
        do {
          if (*(short *)(DAT_0300525c + uVar6 * 0x20 + 0x14) == *(short *)(pbVar4 + 0x1e)) {
            if (DAT_0300525c[8] == '\0') {
              puVar7 = DAT_0300525c + uVar6 * 0x20 + 0x14;
            }
            else {
              puVar7 = auStack_3c;
              sub_080433E0(DAT_0300525c + uVar6 * 0x20 + 0x14,auStack_3c,0x10);
              local_40[0] = 0;
              sub_080433E0(local_40,DAT_0300525c + 0x14,0x1000040);
              DAT_0300525c[8] = 0;
            }
            if (uVar6 < 4) {
              iVar5 = (uint)bVar1 * 0x20;
              sub_080433E0(puVar7,DAT_0300525c + iVar5 + 0x14,0x10);
              DAT_0300525c[iVar5 + 0x16] = bVar1;
            }
            break;
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 4);
      }
    }
  }
  sub_080437C2(uStack_1c,param_2);
                    /* WARNING: Could not recover jumptable at 0x08043f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_08043FAA @ 0x08043FAA */

void sub_08043FAA(void)

{
  sub_08045A5E(0x8043ed5);
  sub_08046048();
  return;
}


/* sub_08043FBC @ 0x08043FBC */

undefined4 sub_08043FBC(char *param_1,char *param_2)

{
  char *pcVar1;
  
  *param_1 = -1;
  pcVar1 = *(char **)(DAT_03005264 + 0xdc);
  if ((*pcVar1 != -0x60) && (*pcVar1 != -0x5f)) {
    return 0x10;
  }
  *param_2 = pcVar1[6];
  *param_1 = pcVar1[7];
  return 0;
}


/* sub_08043FE4 @ 0x08043FE4 */

void sub_08043FE4(void)

{
  uint uVar1;
  
  sub_08045A5E(0x8043ed5);
  sub_08046064();
  uVar1 = (uint)*(byte *)(*(int *)(DAT_03005264 + 0xdc) + 6);
  if (uVar1 < 4) {
    *(undefined1 *)(uVar1 + DAT_03005260 + 10) = 0;
  }
  return;
}


/* sub_0804400C @ 0x0804400C */

char sub_0804400C(void)

{
  char cVar1;
  char cVar2;
  
  cVar2 = sub_08045D46(1);
  if (((cVar2 == '\x01') && (*(char *)(DAT_03005294 + 0x2c) != '\0')) &&
     ((cVar1 = *(char *)(DAT_03005294 + 6), cVar1 == '\'' || ((cVar1 == '%' || (cVar1 == '7')))))) {
    cVar2 = '\0';
  }
  return cVar2;
}


/* sub_08044040 @ 0x08044040 */

void sub_08044040(void)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(DAT_0300525c + 5) != '\0' || *(char *)(DAT_0300525c + 4) != '\0') {
    uVar2 = REG_IME;
    REG_IME = 0;
    bVar1 = *(byte *)(DAT_03005260 + 2);
    uVar3 = 0;
    do {
      uVar4 = 1 << uVar3 & 0xff;
      if (((*(byte *)(DAT_0300525c + 4) & uVar4) != 0) &&
         ((*(byte *)(DAT_03005260 + 2) & uVar4) == 0)) {
        *(short *)((&DAT_03005268)[uVar3] + 2) = *(short *)((&DAT_03005268)[uVar3] + 2) + 1;
      }
      if (((*(byte *)(DAT_0300525c + 5) & uVar4) != 0) && ((uVar4 & bVar1 >> 4) == 0)) {
        *(short *)((&DAT_03005268)[uVar3] + 0x36) = *(short *)((&DAT_03005268)[uVar3] + 0x36) + 1;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    *(undefined1 *)(DAT_03005260 + 2) = 0;
    REG_IME = uVar2;
  }
  return;
}


/* sub_080440E0 @ 0x080440E0 */

void sub_080440E0(void)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  sub_08044040();
  if (*DAT_0300525c != -1) {
    if (DAT_03005260[6] != 0) {
      DAT_03005260[6] = DAT_03005260[6] - 1;
    }
    iVar4 = sub_0804400C();
    pbVar2 = DAT_03005260;
    bVar3 = *DAT_03005260;
    if (((int)((uint)bVar3 * 0x40000000) < 0) || (iVar4 != 0)) {
      if (-1 < (int)((uint)bVar3 << 0x1e)) {
        if (iVar4 != 0) goto _08044132;
        goto _08044138;
      }
      if (iVar4 == 0) goto _08044138;
      *DAT_03005260 = bVar3 & 0xfb;
_08044132:
      bVar3 = *pbVar2 & 0xfd;
    }
    else {
      *DAT_03005260 = bVar3 | 4;
      pbVar2[0x20] = 0x68;
      pbVar2[0x21] = 1;
_08044138:
      bVar3 = *pbVar2 | 2;
    }
    *pbVar2 = bVar3;
    if ((int)((uint)*pbVar2 << 0x1d) < 0) {
      if (*(short *)(pbVar2 + 0x20) == 0) {
        *pbVar2 = *pbVar2 & 0xfb;
        uVar6 = 0;
        bVar3 = DAT_0300525c[2];
        bVar1 = DAT_0300525c[3];
        do {
          if ((1 << uVar6 & (uint)(bVar3 | bVar1)) != 0) {
            sub_08043706(uVar6,1);
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 4);
        *DAT_0300525c = -1;
        uVar5 = 1;
        goto _08044180;
      }
      *(short *)(pbVar2 + 0x20) = *(short *)(pbVar2 + 0x20) + -1;
    }
  }
  uVar5 = 0;
_08044180:
                    /* WARNING: Could not recover jumptable at 0x08044184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5);
  return;
}


/* sub_0804418E @ 0x0804418E */

void sub_0804418E(uint param_1,byte *param_2,char *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  short *psVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  code *UNRECOVERED_JUMPTABLE;
  char cVar14;
  uint uStack_34;
  
  *param_2 = 0;
  *param_3 = '\0';
  *param_4 = 0;
  pbVar3 = DAT_03005260;
  pcVar4 = DAT_0300525c;
  if ((*DAT_0300525c != -1) && (*(char *)(DAT_03005294 + 0x14) != '\0')) {
    if ((int)((uint)*DAT_03005260 << 0x1d) < 0) {
      pbVar3[0x20] = 0x68;
      pbVar3[0x21] = 1;
    }
    cVar14 = pbVar3[6] == 0;
    if ((bool)cVar14) {
      pbVar3[6] = pcVar4[9];
    }
    if ((param_1 & 0xff) == 0x29) {
      iVar6 = *(int *)(DAT_03005264 + 0xdc);
      *param_2 = *(byte *)(iVar6 + 4);
      cVar14 = *(char *)(iVar6 + 5);
      *param_3 = cVar14;
      if (cVar14 == '\x01') {
        *param_2 = DAT_0300525c[2];
      }
      cVar14 = '\x02';
    }
    else {
      if (param_1 == 0x136) {
        bVar1 = pcVar4[2];
        *param_2 = (*(byte *)(*(int *)(DAT_03005264 + 0xdc) + 5) ^ bVar1) & bVar1;
        *param_3 = '\x01';
        uVar12 = 0;
        do {
          if (((uint)*param_2 & 1 << uVar12) != 0) {
            DAT_0300525c[uVar12 + 10] = '\0';
            sub_08043706(uVar12);
          }
          uVar12 = uVar12 + 1 & 0xff;
        } while (uVar12 < 4);
      }
      if (!(bool)cVar14) goto _08044428;
    }
    uVar10 = **(undefined4 **)(DAT_03005264 + 0xdc);
    uVar7 = (*(undefined4 **)(DAT_03005264 + 0xdc))[1];
    sub_08045A5E(0x8043775);
    sub_08045E70();
    cVar5 = sub_08045D7A();
    pcVar4 = DAT_0300525c;
    if (cVar5 != '\0') {
      sub_080437C2(0x11,cVar5);
      goto _08044298;
    }
    pcVar11 = (char *)(*(int *)(DAT_03005264 + 0xdc) + 4);
    uVar12 = 0;
    do {
      cVar5 = *pcVar11;
      uVar8 = uVar12 + 1 & 0xff;
      pcVar11 = pcVar11 + 1;
      pcVar4[uVar12 + 10] = cVar5;
      uVar12 = uVar8;
    } while (uVar8 < 4);
    uStack_34 = 0;
    uVar12 = 0;
    do {
      uVar8 = 1 << uVar12;
      uVar13 = uVar8 & 0xff;
      bVar1 = (byte)uVar8;
      if ((cVar14 == '\x01') && (((byte)DAT_0300525c[2] & uVar13) != 0)) {
        if (DAT_0300525c[uVar12 + 10] == '\0') {
          if (*DAT_0300525c == '\x01') {
            bVar2 = DAT_03005260[uVar12 + 10];
            DAT_03005260[uVar12 + 10] = bVar2 + 1;
            if (3 < (byte)(bVar2 + 1)) goto _080442FE;
          }
          else {
            sub_08045EA8();
            iVar6 = sub_08045D7A();
            pbVar3 = DAT_03005260;
            if (iVar6 == 0) {
              if (*(char *)(*(int *)(DAT_03005264 + 0xdc) + 7) != '\0') {
                bVar2 = DAT_03005260[uVar12 + 10];
                DAT_03005260[uVar12 + 10] = bVar2 + 1;
                if ((ushort)(byte)(bVar2 + 1) <= *(ushort *)(pbVar3 + 0x1a)) goto _08044338;
                pbVar3[uVar12 + 10] = 0;
                sub_080461CE(DAT_0300525c[2]);
                sub_08045D7A();
              }
_080442FE:
              *param_2 = *param_2 | bVar1;
              *param_3 = '\x01';
            }
          }
        }
        else {
          DAT_03005260[uVar12 + 10] = 0;
        }
      }
_08044338:
      if (*DAT_0300525c == '\x01') {
        if (DAT_0300525c[uVar12 + 10] != 0) {
          if (((byte)DAT_0300525c[3] & uVar13) == 0) {
            if (((byte)(DAT_0300525c[2] | DAT_0300525c[3]) & uVar13) == 0) {
              sub_08045EC4();
              sub_08045D7A();
              cVar5 = *(char *)(*(int *)(DAT_03005264 + 0xdc) + 1);
              psVar9 = (short *)(*(int *)(DAT_03005264 + 0xdc) + 8);
              while (cVar5 = cVar5 + -1, cVar5 != '\0') {
                if ((*(byte *)(psVar9 + 1) == uVar12) &&
                   (*(short *)(DAT_03005260 + uVar12 * 2 + 0x12) == *psVar9)) {
                  uStack_34 = uVar8 & 0xff | uStack_34;
                  break;
                }
                psVar9 = psVar9 + 2;
              }
            }
          }
          else if ((byte)DAT_0300525c[uVar12 + 10] < 0xb) {
            DAT_0300525c[uVar12 + 10] = '\0';
          }
          else {
            *param_4 = *param_4 | bVar1;
            pcVar4 = DAT_0300525c;
            DAT_0300525c[2] = DAT_0300525c[2] | bVar1;
            pcVar4[3] = pcVar4[3] & ~bVar1;
            pcVar4[1] = pcVar4[1] + '\x01';
            DAT_03005260[uVar12 + 10] = 0;
          }
        }
      }
      if (((DAT_0300525c[2] & *param_2) & uVar13) != 0) {
        sub_08043706(uVar12,0);
      }
      uVar12 = uVar12 + 1 & 0xff;
    } while (uVar12 < 4);
    if (uStack_34 != 0) {
      sub_080461CE(uStack_34);
      sub_08045D7A();
    }
    **(undefined4 **)(DAT_03005264 + 0xdc) = uVar10;
    *(undefined4 *)(*(int *)(DAT_03005264 + 0xdc) + 4) = uVar7;
  }
_08044428:
  cVar5 = '\0';
_08044298:
                    /* WARNING: Could not recover jumptable at 0x0804429e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(cVar5);
  return;
}


/* sub_0804442C @ 0x0804442C */

void sub_0804442C(undefined4 param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_20;
  
  if ((param_2 == 3) && (*DAT_0300525c == '\0')) {
    sub_08045A5E(0x8043775);
    sub_08045EA8();
    iVar1 = sub_08045D7A();
    if ((iVar1 == 0) && (*(char *)(*(int *)(DAT_03005264 + 0xdc) + 7) == '\0')) {
      param_2 = 0;
    }
  }
  bVar2 = (DAT_0300525c[2] | DAT_0300525c[3]) & *(byte *)(DAT_03005260 + 5);
  *(byte *)(DAT_03005260 + 5) = bVar2;
  *(byte *)(*(int *)(DAT_03005264 + 0xdc) + 8) = bVar2;
  if (param_2 == 0) {
    uVar3 = 0;
    do {
      if (((uint)*(byte *)(DAT_03005260 + 5) & 1 << uVar3 & 0xffU) != 0) {
        sub_08043706(uVar3,1);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
  }
  if (DAT_0300525c[2] == '\0' && DAT_0300525c[3] == '\0') {
    *DAT_0300525c = -1;
  }
  sub_080437C2(param_1,param_2);
  uVar3 = (uint)*(byte *)(DAT_03005260 + 9);
  if (uVar3 != 0) {
    sub_08045A5E(0x8043775);
    sub_08045F7C();
    uVar3 = sub_08045D7A();
    if (uVar3 != 0) {
      uVar3 = sub_080437C2(0x19,uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x080444ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uStack_20,param_1);
  return;
}


/* sub_080444EE @ 0x080444EE */

void sub_080444EE(uint param_1)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = DAT_03005260;
  pcVar1 = DAT_0300525c;
  if (((byte)(DAT_0300525c[2] | DAT_0300525c[3]) & param_1) != 0) {
    DAT_03005260[5] = (byte)param_1;
    if ((*pcVar1 == -1) && ((int)((uint)*pbVar2 << 0x18) < 0)) {
      if (((byte)pcVar1[3] & param_1) != 0) {
        sub_0804442C(0x30,0);
      }
    }
    else {
      if (pbVar2[9] != 0) {
        sub_08045A5E(0x8043775);
        sub_08045FB4();
        iVar3 = sub_08045D7A();
        if (iVar3 != 0) {
          sub_080437C2(0x1b,iVar3);
          return;
        }
      }
      sub_08045A5E(0x804442d);
      sub_080461CE(param_1);
    }
  }
  return;
}


/* sub_08044554 @ 0x08044554 */

void sub_08044554(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  *(char *)(DAT_03005260 + 5) = (char)param_1;
  do {
    if ((1 << uVar1 & param_1) != 0) break;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  sub_08045A5E(0x80437c3);
  sub_08046222(*(undefined2 *)(uVar1 * 0x20 + DAT_0300525c + 0x14),
               *(undefined2 *)(DAT_0300525c + 0x94),param_1);
  return;
}


/* sub_08044592 @ 0x08044592 */

void sub_08044592(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar2 = DAT_0300525c;
  if (((param_2 == 0) && (*(char *)(*(int *)(DAT_03005264 + 0xdc) + 4) == '\0')) &&
     (*(char *)(DAT_03005260 + 5) != '\0')) {
    uVar3 = 0;
    *DAT_0300525c = 0;
    do {
      if (((uint)*(byte *)(DAT_03005260 + 5) & 1 << uVar3 & 0xffU & (uint)(byte)puVar2[3]) != 0) {
        bVar1 = (byte)(1 << uVar3);
        puVar2[2] = puVar2[2] | bVar1;
        puVar2[3] = puVar2[3] & ~bVar1;
        puVar2[1] = puVar2[1] + '\x01';
        *(undefined1 *)(DAT_03005260 + uVar3 + 10) = 0;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    *(undefined1 *)(DAT_03005260 + 5) = 0;
  }
  sub_080437C2(param_1);
  return;
}


/* sub_080445FC @ 0x080445FC */

void sub_080445FC(void)

{
  sub_08045A5E(0x8044593);
  sub_08046252();
  return;
}


/* sub_0804460E @ 0x0804460E */

undefined4 sub_0804460E(char *param_1)

{
  char cVar1;
  
  *param_1 = -1;
  cVar1 = **(char **)(DAT_03005264 + 0xdc);
  if ((cVar1 != -0x4d) && (cVar1 != -0x4c)) {
    return 0x10;
  }
  *param_1 = (*(char **)(DAT_03005264 + 0xdc))[4];
  return 0;
}


/* sub_08044630 @ 0x08044630 */

void sub_08044630(void)

{
  sub_08045A5E(0x8044593);
  sub_0804626E();
  return;
}


/* sub_08044642 @ 0x08044642 */

void sub_08044642(void)

{
  int iVar1;
  
  iVar1 = sub_08045D46(1);
  if (iVar1 == 1) {
    sub_08045A5E(0x80437c3);
    sub_08046124();
  }
  else {
    sub_080437C2(0x27,0);
  }
  return;
}


/* sub_08044668 @ 0x08044668 */

void sub_08044668(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0300525c;
  if ((int)((uint)*DAT_03005260 << 0x18) < 0) {
    param_1 = DAT_0300525c + param_1;
    if (param_2 == 0) {
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + (char)*(undefined2 *)(param_3 + 0x2e);
    }
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + '\x02';
  }
  else {
    if (param_2 == 0) {
      *(char *)(DAT_0300525c + 0xf) =
           *(char *)(DAT_0300525c + 0xf) + (char)*(undefined2 *)(param_3 + 0x2e);
    }
    *(char *)(iVar1 + 0xf) = *(char *)(iVar1 + 0xf) + '\x03';
  }
  return;
}


/* sub_080446A8 @ 0x080446A8 */

undefined4 sub_080446A8(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined2 auStack_28 [2];
  uint uStack_24;
  int iStack_20;
  uint uStack_1c;
  uint local_18;
  
  if (param_2 < 4) {
    if ((param_1 & 0xf) == 0) {
      uVar1 = 0x600;
    }
    else {
      uVar4 = REG_IME;
      uStack_24 = (uint)uVar4;
      REG_IME = 0;
      uStack_1c = param_1;
      local_18 = param_2;
      if ((param_1 << 0x1c) >> 0x1e != 0) {
        uVar4 = 0;
        iStack_20 = 1 << (param_2 & 0xff);
        do {
          if (uVar4 == 0) {
            if ((int)(param_1 << 0x1d) < 0) {
              puVar3 = (ushort *)(&DAT_03005268)[param_2];
              *(byte *)(DAT_0300525c + 4) = *(byte *)(DAT_0300525c + 4) & ~(byte)puVar3[0x16];
_08044720:
              if (puVar3 != (ushort *)0x0) {
                if ((int)((uint)*puVar3 << 0x10) < 0) {
                  sub_08044668(local_18,uVar4 & 0xff,puVar3);
                  uVar2 = 0;
                  do {
                    if ((1 << (uVar2 & 0xff) & (uint)(byte)puVar3[0x16]) != 0) {
                      puVar3[1] = 0;
                    }
                    uVar2 = uVar2 + 1 & 0xffff;
                  } while (uVar2 < 4);
                }
                auStack_28[0] = 0;
                sub_080433E0(auStack_28,puVar3,0x100001a);
              }
            }
          }
          else if ((int)(param_1 << 0x1c) < 0) {
            puVar3 = (ushort *)((&DAT_03005268)[param_2] + 0x34);
            *(byte *)(DAT_0300525c + 5) = *(byte *)(DAT_0300525c + 5) & ~(byte)iStack_20;
            goto _08044720;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 2);
      }
      if ((param_1 & 1) != 0) {
        puVar3 = (ushort *)(&DAT_03005278)[param_2];
        if ((int)((uint)*puVar3 << 0x10) < 0) {
          if ((int)((uint)*DAT_03005260 << 0x18) < 0) {
            *(char *)(DAT_0300525c + local_18 + 0x10) =
                 *(char *)(DAT_0300525c + local_18 + 0x10) + (char)puVar3[2] + '\x02';
          }
          else {
            *(char *)(DAT_0300525c + 0xf) = *(char *)(DAT_0300525c + 0xf) + (char)puVar3[2] + '\x03'
            ;
          }
          *(byte *)(DAT_0300525c + 6) = *(byte *)(DAT_0300525c + 6) & ~*(byte *)((int)puVar3 + 3);
        }
        auStack_28[0] = 0;
        sub_080433E0(auStack_28,puVar3,0x1000006);
      }
      if ((int)(param_1 << 0x1e) < 0) {
        auStack_28[0] = 0;
        sub_080433E0(auStack_28,(&DAT_03005278)[param_2] + 0xc,0x1000004);
      }
      REG_IME = (short)uStack_24;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x400;
  }
  return uVar1;
}


/* sub_080447E0 @ 0x080447E0 */

undefined4 sub_080447E0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 < 4) {
    if (param_1 * 0x4000000 < 0) {
      *(undefined4 *)((&DAT_03005268)[param_2] + 0x68) = param_3;
      *(undefined4 *)((&DAT_03005268)[param_2] + 0x6c) = param_4;
    }
    else {
      if (-1 < param_1 << 0x1b) {
        return 0x600;
      }
      *(undefined4 *)((&DAT_03005278)[param_2] + 0x14) = param_3;
      *(undefined4 *)((&DAT_03005278)[param_2] + 0x18) = param_4;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x400;
  }
  return uVar1;
}


/* sub_0804481E @ 0x0804481E */

undefined4 sub_0804481E(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  byte *unaff_r6;
  
  uVar6 = (uint)*DAT_0300525c;
  if (uVar6 == 0xff) {
    uVar4 = 0x301;
  }
  else if ((param_2 & 0xf) == 0) {
    uVar4 = 0x400;
  }
  else if ((param_2 & ~(uint)(DAT_0300525c[2] | DAT_0300525c[3])) == 0) {
    uVar4 = 0x402;
    if (param_1 * 0x8000000 < 0) {
      bVar1 = DAT_0300525c[6];
    }
    else {
      bVar1 = DAT_0300525c[4];
    }
    if ((bVar1 & param_2) == 0) {
      uVar5 = 0;
      do {
        if ((1 << uVar5 & param_2) != 0) break;
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < 4);
      if (uVar6 == 1) {
        unaff_r6 = DAT_0300525c + 0xf;
      }
      else if (uVar6 == 0) {
        unaff_r6 = DAT_0300525c + uVar5 + 0x10;
      }
      bVar1 = (&gUnknown_087B7714)[uVar6 * 0x10];
      if ((*unaff_r6 < param_3) || (param_3 <= bVar1)) {
        uVar4 = 0x500;
      }
      else {
        uVar3 = REG_IME;
        REG_IME = 0;
        uVar4 = 0;
        bVar2 = (byte)param_2;
        if ((param_1 << 0x1a < 0) || (param_1 == 0x40)) {
          puVar7 = (undefined2 *)(&DAT_03005268)[uVar5];
          puVar7[0xc] = 0;
          *(int *)(puVar7 + 2) = (int)puVar7 + 0x2d;
          *(undefined4 *)(puVar7 + 10) = 7;
          *(byte *)(puVar7 + 0x16) = bVar2;
          *(byte *)(puVar7 + 0xd) = bVar2;
          puVar7[0x17] = (short)param_3 - (ushort)bVar1;
          *(bool *)((int)puVar7 + 0x2d) = -1 < param_1 << 0x1a;
          *(undefined4 *)(puVar7 + 0x18) = param_5;
          *(undefined4 *)(puVar7 + 0x14) = param_4;
          *(undefined1 *)((int)puVar7 + 0x1f) = 0;
          *(undefined1 *)(puVar7 + 0x10) = 0;
          uVar6 = 0;
          do {
            *(undefined1 *)((int)puVar7 + uVar6 + 0x1b) = 0;
            uVar5 = uVar6 + 1 & 0xff;
            *(undefined1 *)((int)puVar7 + uVar6 + 0x21) = 1;
            uVar6 = uVar5;
          } while (uVar5 < 4);
          uVar6 = 0;
          do {
            if ((1 << uVar6 & param_2) != 0) {
              *(undefined2 *)((&DAT_03005268)[uVar6] + 2) = 0;
            }
            uVar6 = uVar6 + 1 & 0xff;
          } while (uVar6 < 4);
          DAT_0300525c[4] = bVar2 | DAT_0300525c[4];
          *unaff_r6 = *unaff_r6 - (char)param_3;
          *puVar7 = 0x8021;
        }
        else if (param_1 << 0x1b < 0) {
          puVar7 = (undefined2 *)(&DAT_03005278)[uVar5];
          *(byte *)((int)puVar7 + 3) = bVar2;
          *(undefined4 *)(puVar7 + 4) = param_4;
          puVar7[2] = (short)param_3 - (ushort)bVar1;
          *unaff_r6 = *unaff_r6 - (char)param_3;
          *puVar7 = 0x8024;
          DAT_0300525c[6] = bVar2 | DAT_0300525c[6];
        }
        REG_IME = uVar3;
      }
    }
  }
  else {
    uVar4 = 0x401;
  }
  return uVar4;
}


/* sub_080449A2 @ 0x080449A2 */

void sub_080449A2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0804481E(0x20,param_1,param_2,param_3,param_4);
  return;
}


/* sub_080449B8 @ 0x080449B8 */

void sub_080449B8(undefined4 param_1,undefined4 param_2,char param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*DAT_0300525c == '\x01') {
    param_3 = param_3 + '\x03';
  }
  else {
    param_3 = param_3 + '\x02';
  }
  sub_0804481E(0x10,param_1,param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x080449e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* sub_080449E6 @ 0x080449E6 */

void sub_080449E6(uint param_1,undefined4 param_2)

{
  sub_0804481E(0x40,1 << (param_1 & 0xff) & 0xff,param_2,DAT_0300525c + 0x98,0x1a);
  return;
}


/* sub_08044A0C @ 0x08044A0C */

undefined4 sub_08044A0C(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined2 uVar5;
  
  if (3 < param_2) {
    return 0x400;
  }
  bVar1 = (byte)param_3;
  if (param_1 == 0x20) {
    puVar4 = (ushort *)(&DAT_03005268)[param_2];
    if ((~*puVar4 & 0x8020) != 0) {
      return 0x403;
    }
    uVar3 = (byte)puVar4[0xd] ^ param_3;
    if ((uVar3 & param_3) != 0) {
      return 0x404;
    }
    if (uVar3 != 0) {
      uVar5 = REG_IME;
      REG_IME = 0;
      uVar2 = 0;
      do {
        if ((1 << uVar2 & uVar3) != 0) {
          *(undefined2 *)((&DAT_03005268)[uVar2] + 2) = 0;
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 4);
      *(byte *)(DAT_0300525c + 4) = *(byte *)(DAT_0300525c + 4) & ~(byte)uVar3;
      *(byte *)(puVar4 + 0xd) = bVar1;
      if (param_3 == 0) {
        sub_08044668(param_2,0,puVar4,param_2,uVar5);
        *puVar4 = 0x27;
      }
      REG_IME = uVar5;
    }
  }
  else {
    if (param_1 != 0x10) {
      return 0x600;
    }
    if (*(short *)(&DAT_03005278)[param_2] != -0x7fdc) {
      return 0x403;
    }
    uVar2 = 0;
    uVar3 = 0;
    do {
      if (uVar3 != param_2) {
        uVar2 = uVar2 | *(byte *)((&DAT_03005278)[uVar3] + 3);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    if ((uVar2 & param_3) != 0) {
      return 0x404;
    }
    uVar5 = REG_IME;
    REG_IME = 0;
    *(byte *)(DAT_0300525c + 6) =
         *(byte *)(DAT_0300525c + 6) & ~*(byte *)((int)(&DAT_03005278)[param_2] + 3) | bVar1;
    *(byte *)((&DAT_03005278)[param_2] + 3) = bVar1;
    REG_IME = uVar5;
  }
  return 0;
}


/* sub_08044AF4 @ 0x08044AF4 */

undefined4 sub_08044AF4(uint param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  if (param_1 < 4) {
    uVar1 = REG_IME;
    REG_IME = 0;
    uVar3 = *(ushort *)((&DAT_03005268)[param_1] + 0x34);
    if ((int)((uint)uVar3 << 0x10) < 0) {
      if (uVar3 == 0x8043) {
        uVar3 = 0x48;
      }
      else {
        uVar3 = 0x47;
      }
      *(ushort *)((&DAT_03005268)[param_1] + 0x34) = uVar3;
      *(byte *)(DAT_0300525c + 5) = *(byte *)(DAT_0300525c + 5) & ~(byte)(1 << (param_1 & 0xff));
      sub_08044668(param_1,1);
    }
    REG_IME = uVar1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x400;
  }
  return uVar2;
}


/* sub_08044B46 @ 0x08044B46 */

undefined4 sub_08044B46(uint param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  short *psVar4;
  char *pcVar5;
  
  if (param_1 < 4) {
    psVar4 = (short *)(&DAT_03005278)[param_1];
    if (*psVar4 == -0x7fdc) {
      if (*DAT_0300525c == '\x01') {
        pcVar5 = DAT_0300525c + 0xf;
        bVar1 = DAT_0300525c[0xf];
      }
      else {
        bVar1 = DAT_0300525c[param_1 + 0x10];
        pcVar5 = DAT_0300525c + param_1 + 0x10;
      }
      if (((uint)bVar1 + (uint)(ushort)psVar4[2] & 0xff) < param_3) {
        uVar3 = 0x500;
      }
      else {
        uVar2 = REG_IME;
        REG_IME = 0;
        *(undefined4 *)(psVar4 + 4) = param_2;
        *pcVar5 = (char)((uint)bVar1 + (uint)(ushort)psVar4[2]) - (char)param_3;
        psVar4[2] = (short)param_3;
        *(undefined1 *)(psVar4 + 1) = 1;
        REG_IME = uVar2;
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0x403;
    }
  }
  else {
    uVar3 = 0x400;
  }
  return uVar3;
}


/* sub_08044BB2 @ 0x08044BB2 */

void sub_08044BB2(uint param_1)

{
  if ((param_1 < 4) && (*(short *)(&DAT_03005278)[param_1] == -0x7fdc)) {
    *(undefined1 *)((short *)(&DAT_03005278)[param_1] + 1) = 1;
  }
  return;
}


/* sub_08044BCE @ 0x08044BCE */

void sub_08044BCE(uint param_1)

{
  if (param_1 < 4) {
    *(undefined1 *)((&DAT_03005278)[param_1] + 0x12) = 0;
  }
  return;
}


/* sub_08044BE0 @ 0x08044BE0 */

undefined8 sub_08044BE0(uint param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  undefined4 uStack_1c;
  uint uStack_18;
  
  puVar5 = (ushort *)(&DAT_03005278)[param_1];
  if (((char)puVar5[1] == '\0') || (*(char *)((int)puVar5 + 3) == '\0')) {
    uVar3 = 0;
  }
  else {
    bVar1 = *DAT_0300525c;
    uStack_18 = (*puVar5 & 0xf) << (&DAT_087b7717)[(uint)bVar1 * 0x10] | (uint)puVar5[2];
    if (*DAT_0300525c == 1) {
      uStack_18 = uStack_18 | (uint)*(byte *)((int)puVar5 + 3) << 0x12;
    }
    puVar4 = &uStack_18;
    for (bVar2 = 0; bVar2 < (byte)(&gUnknown_087B7714)[(uint)bVar1 * 0x10]; bVar2 = bVar2 + 1) {
      uVar3 = *puVar4;
      puVar6 = (undefined1 *)*param_2;
      puVar4 = (uint *)((int)puVar4 + 1);
      *puVar6 = (char)uVar3;
      *param_2 = puVar6 + 1;
    }
    uStack_1c = *(undefined4 *)(puVar5 + 4);
    __call_via_r3(&uStack_1c,param_2,puVar5[2],*(undefined4 *)(DAT_03005264 + 4));
    if (*DAT_0300525c == 1) {
      DAT_0300525c[0xe] = 0x10;
    }
    else {
      DAT_0300525c[0xe] = DAT_0300525c[0xe] | (byte)(0x10 << (param_1 & 0xff));
    }
    uVar3 = (uint)(byte)(&gUnknown_087B7714)[(uint)bVar1 * 0x10] + (uint)puVar5[2] & 0xffff;
  }
  return CONCAT44(param_2,uVar3);
}


