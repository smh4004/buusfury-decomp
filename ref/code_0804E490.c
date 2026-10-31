/* Ghidra reference decompilation of code_0804E490 (read-only; see docs/decomp.md). */
#include "ghidra_types.h"

/* sub_0804E490 @ 0x0804E490 */

void sub_0804E490(char *param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  
  cVar1 = *param_1;
  *param_1 = cVar1 + '\x01';
  if (cVar1 == '\0') {
    sVar2 = sub_0801124C(&DAT_03001c4c,param_3);
    *(short *)(param_1 + 2) = sVar2;
    sub_08049138((int)(&DAT_06010000 + sVar2 * 0x20),param_2,param_3);
  }
  return;
}


/* sub_0804E4CC @ 0x0804E4CC */

void sub_0804E4CC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0804E490(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14),param_4,param_4);
  return;
}


/* sub_0804E4D8 @ 0x0804E4D8 */

void sub_0804E4D8(void)

{
  return;
}


/* sub_0804E4DA @ 0x0804E4DA */

undefined4 sub_0804E4DA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E4DC @ 0x0804E4DC */

void sub_0804E4DC(void)

{
  return;
}


/* sub_0804E4DE @ 0x0804E4DE */

undefined4 sub_0804E4DE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E4E0 @ 0x0804E4E0 */

void sub_0804E4E0(void)

{
  return;
}


/* sub_0804E4E2 @ 0x0804E4E2 */

undefined4 sub_0804E4E2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E4E4 @ 0x0804E4E4 */

void sub_0804E4E4(void)

{
  return;
}


/* sub_0804E4E6 @ 0x0804E4E6 */

undefined4 sub_0804E4E6(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E4E8 @ 0x0804E4E8 */

void sub_0804E4E8(void)

{
  return;
}


/* sub_0804E4EA @ 0x0804E4EA */

undefined4 sub_0804E4EA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E4EC @ 0x0804E4EC */

void sub_0804E4EC(void)

{
  return;
}


/* sub_0804E4EE @ 0x0804E4EE */

undefined4 sub_0804E4EE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E4F0 @ 0x0804E4F0 */

void sub_0804E4F0(void)

{
  return;
}


/* sub_0804E4F2 @ 0x0804E4F2 */

undefined4 sub_0804E4F2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E4F4 @ 0x0804E4F4 */

void sub_0804E4F4(void)

{
  return;
}


/* sub_0804E4F6 @ 0x0804E4F6 */

undefined4 sub_0804E4F6(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E4F8 @ 0x0804E4F8 */

void sub_0804E4F8(void)

{
  return;
}


/* sub_0804E4FA @ 0x0804E4FA */

undefined4 sub_0804E4FA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E4FC @ 0x0804E4FC */

void sub_0804E4FC(void)

{
  return;
}


/* sub_0804E4FE @ 0x0804E4FE */

undefined4 sub_0804E4FE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E500 @ 0x0804E500 */

void sub_0804E500(void)

{
  return;
}


/* sub_0804E502 @ 0x0804E502 */

undefined4 sub_0804E502(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E504 @ 0x0804E504 */

void sub_0804E504(void)

{
  return;
}


/* sub_0804E506 @ 0x0804E506 */

undefined4 sub_0804E506(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E508 @ 0x0804E508 */

void sub_0804E508(void)

{
  return;
}


/* sub_0804E50A @ 0x0804E50A */

void sub_0804E50A(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0804E50C @ 0x0804E50C */

void sub_0804E50C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0804E51E @ 0x0804E51E */

undefined4 sub_0804E51E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E520 @ 0x0804E520 */

void sub_0804E520(void)

{
  return;
}


/* sub_0804E522 @ 0x0804E522 */

undefined4 sub_0804E522(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E524 @ 0x0804E524 */

void sub_0804E524(void)

{
  return;
}


/* sub_0804E526 @ 0x0804E526 */

void sub_0804E526(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0x11,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0804E528 @ 0x0804E528 */

void sub_0804E528(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0x11,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0804E53A @ 0x0804E53A */

void sub_0804E53A(undefined4 param_1,undefined4 param_2)

{
  sub_0800F924(param_2);
  return;
}


/* sub_0804E53C @ 0x0804E53C */

void sub_0804E53C(undefined4 param_1,undefined4 param_2)

{
  sub_0800F924(param_2);
  return;
}


/* sub_0804E546 @ 0x0804E546 */

undefined4 sub_0804E546(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E548 @ 0x0804E548 */

void sub_0804E548(void)

{
  return;
}


/* sub_0804E54A @ 0x0804E54A */

undefined4 sub_0804E54A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804E54C @ 0x0804E54C */

void sub_0804E54C(void)

{
  return;
}


/* sub_0804E54E @ 0x0804E54E */

void sub_0804E54E(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_08000158(0x31);
  if (*(int *)(param_2 + 0x38) != *(int *)(iVar1 + 4)) {
    sub_0800EECC(param_2);
  }
  return;
}


/* sub_0804E550 @ 0x0804E550 */

void sub_0804E550(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_08000158(0x31);
  if (*(int *)(param_2 + 0x38) != *(int *)(iVar1 + 4)) {
    sub_0800EECC(param_2);
  }
  return;
}


/* sub_0804E56A @ 0x0804E56A */

void sub_0804E56A(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_08000158(0x32);
  if (*(int *)(param_2 + 0x38) != *(int *)(iVar1 + 4)) {
    sub_0800EECC(param_2);
  }
  sub_0800ECDA(param_2,0xc);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804E56C @ 0x0804E56C */

void sub_0804E56C(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_08000158(0x32);
  if (*(int *)(param_2 + 0x38) != *(int *)(iVar1 + 4)) {
    sub_0800EECC(param_2);
  }
  sub_0800ECDA(param_2,0xc);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804E59C @ 0x0804E59C */

void sub_0804E59C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(*(int *)(param_2 + 0x58) + 0xa0) == *(int *)(param_2 + 0x50)) {
    sub_0800ED18(param_2,&DAT_0300326c,*(int *)(param_2 + 0x50),param_4,param_4);
  }
  return;
}


/* sub_0804E5B8 @ 0x0804E5B8 */

void sub_0804E5B8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_08000158(0x35);
  if (*(int *)(param_2 + 0x38) != *(int *)(iVar1 + 4)) {
    sub_0800EECC(param_2);
  }
  sub_0800ECDA(param_2,0xc);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804E5E8 @ 0x0804E5E8 */

void sub_0804E5E8(undefined4 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined2 *)(param_2 + 0x12) = 0;
  sub_0800ECDA(param_2,0);
  sub_0800ED18(param_2,&DAT_03003158);
  return;
}


/* sub_0804E608 @ 0x0804E608 */

void sub_0804E608(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_030030ec);
  return;
}


/* sub_0804E624 @ 0x0804E624 */

void sub_0804E624(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 4) = 0;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2,param_1,param_4);
  return;
}


/* sub_0804E63C @ 0x0804E63C */

void sub_0804E63C(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0xe);
  sub_0800ED18(param_2,&DAT_03001b20);
  return;
}


/* sub_0804E648 @ 0x0804E648 */

void sub_0804E648(void)

{
  undefined4 unaff_r4;
  
  sub_0800ED18(unaff_r4,&DAT_03001b20);
  return;
}


/* sub_0804E658 @ 0x0804E658 */

void sub_0804E658(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_03001b20);
  return;
}


/* sub_0804E674 @ 0x0804E674 */

void sub_0804E674(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x10);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  return;
}


/* sub_0804E682 @ 0x0804E682 */

void sub_0804E682(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_030030d0);
  return;
}


/* sub_0804E684 @ 0x0804E684 */

void sub_0804E684(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_030030d0);
  return;
}


/* sub_0804E6A0 @ 0x0804E6A0 */

void sub_0804E6A0(int param_1,int *param_2)

{
  int iVar1;
  
  sub_080342A8();
  iVar1 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
  *(int *)(param_1 + 0x10) = iVar1 * *(int *)(param_1 + 0xc) >> 0x10;
  return;
}


/* sub_0804E6C2 @ 0x0804E6C2 */

void sub_0804E6C2(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0xc);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804E6C4 @ 0x0804E6C4 */

void sub_0804E6C4(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0xc);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804E6E0 @ 0x0804E6E0 */

void sub_0804E6E0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804E6E6 @ 0x0804E6E6 */

void sub_0804E6E6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_0804E6E8 @ 0x0804E6E8 */

void sub_0804E6E8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_0804E6F6 @ 0x0804E6F6 */

void sub_0804E6F6(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x15);
  sub_0800ED18(param_2,&DAT_03001b20);
  return;
}


/* sub_0804E6F8 @ 0x0804E6F8 */

void sub_0804E6F8(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x15);
  sub_0800ED18(param_2,&DAT_03001b20);
  return;
}


/* sub_0804E714 @ 0x0804E714 */

void sub_0804E714(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    iVar1 = sub_0803FACC(0x1000);
    sub_0800FE34(&local_2c,param_2);
    local_18 = local_28 + local_20 >> 1;
    local_1c = local_2c + local_24 >> 1;
    uVar2 = sub_0802A81C(0,&local_1c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}


/* sub_0804E784 @ 0x0804E784 */

void sub_0804E784(int param_1)

{
  sub_08049168(param_1 + 4,0,0xc);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* sub_0804E79A @ 0x0804E79A */

void sub_0804E79A(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804E79C @ 0x0804E79C */

void sub_0804E79C(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804E7A2 @ 0x0804E7A2 */

void sub_0804E7A2(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_03003264);
  return;
}


/* sub_0804E7A4 @ 0x0804E7A4 */

void sub_0804E7A4(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_03003264);
  return;
}


/* sub_0804E7C0 @ 0x0804E7C0 */

void sub_0804E7C0(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x15);
  sub_0800ED18(param_2,&DAT_03003128);
  return;
}


/* sub_0804E7DC @ 0x0804E7DC */

void sub_0804E7DC(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  sub_0800ECDA(param_2,0x15);
  sub_0800ED18(param_2,&DAT_03001b20);
  return;
}


/* sub_0804E800 @ 0x0804E800 */

void sub_0804E800(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804E806 @ 0x0804E806 */

void sub_0804E806(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,4);
  sub_0800ED18(param_2,&DAT_03003214);
  return;
}


/* sub_0804E808 @ 0x0804E808 */

void sub_0804E808(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,4);
  sub_0800ED18(param_2,&DAT_03003214);
  return;
}


/* sub_0804E824 @ 0x0804E824 */

void sub_0804E824(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x1a4);
  return;
}


/* sub_0804E834 @ 0x0804E834 */

void sub_0804E834(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0xe);
  sub_0800ED18(param_2,&DAT_03003254);
  return;
}


/* sub_0804E850 @ 0x0804E850 */

void sub_0804E850(undefined4 param_1,undefined4 param_2)

{
  sub_0800F924(param_2);
  return;
}


/* sub_0804E85A @ 0x0804E85A */

void sub_0804E85A(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_030032a0);
  return;
}


/* sub_0804E85C @ 0x0804E85C */

void sub_0804E85C(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_030032a0);
  return;
}


/* sub_0804E878 @ 0x0804E878 */

void sub_0804E878(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03001b38);
  return;
}


/* sub_0804E894 @ 0x0804E894 */

void sub_0804E894(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    iVar1 = sub_0803FACC(0x1000);
    sub_0800FE34(&local_2c,param_2);
    local_18 = local_28 + local_20 >> 1;
    local_1c = local_2c + local_24 >> 1;
    uVar2 = sub_0802A81C(0,&local_1c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}


/* sub_0804E904 @ 0x0804E904 */

void sub_0804E904(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0xe);
  sub_0800ED18(param_2,&DAT_03003254);
  return;
}


/* sub_0804E920 @ 0x0804E920 */

void sub_0804E920(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804E92C @ 0x0804E92C */

void sub_0804E92C(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  sub_0800DE60();
  return;
}


/* sub_0804E938 @ 0x0804E938 */

void sub_0804E938(undefined4 param_1,undefined4 param_2)

{
  sub_0800F924(param_2);
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_0300325c);
  return;
}


/* sub_0804E958 @ 0x0804E958 */

void sub_0804E958(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_030030c8);
  return;
}


/* sub_0804E974 @ 0x0804E974 */

void sub_0804E974(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0804E986 @ 0x0804E986 */

void sub_0804E986(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03003248);
  return;
}


/* sub_0804E988 @ 0x0804E988 */

void sub_0804E988(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03003248);
  return;
}


/* sub_0804E9A4 @ 0x0804E9A4 */

void sub_0804E9A4(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804E9AA @ 0x0804E9AA */

void sub_0804E9AA(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(param_2 + 0x1a4);
  uVar1 = sub_0803FACC(4);
  puVar2 = (undefined4 *)sub_0803D5B8(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D3EC;
    puVar2[1] = uVar1;
  }
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_0804E9AC @ 0x0804E9AC */

void sub_0804E9AC(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(param_2 + 0x1a4);
  uVar1 = sub_0803FACC(4);
  puVar2 = (undefined4 *)sub_0803D5B8(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D3EC;
    puVar2[1] = uVar1;
  }
  sub_0800ED18(param_2,puVar2);
  return;
}


/* sub_0804E9E8 @ 0x0804E9E8 */

void sub_0804E9E8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804BECC;
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  sub_0800ED18(param_2,puVar1);
  return;
}


/* sub_0804EA0C @ 0x0804EA0C */

void sub_0804EA0C(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(param_1 + 4);
  return;
}


/* sub_0804EA16 @ 0x0804EA16 */

void sub_0804EA16(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804EA18 @ 0x0804EA18 */

void sub_0804EA18(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804EA20 @ 0x0804EA20 */

void sub_0804EA20(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  return;
}


/* sub_0804EA2A @ 0x0804EA2A */

void sub_0804EA2A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  iVar2 = *piVar1;
  __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + (int)piVar1,iVar2,param_4);
  return;
}


/* sub_0804EA2C @ 0x0804EA2C */

void sub_0804EA2C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  iVar2 = *piVar1;
  __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + (int)piVar1,iVar2,param_4);
  return;
}


/* sub_0804EA3C @ 0x0804EA3C */

void sub_0804EA3C(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_0300322c);
  return;
}


/* sub_0804EA58 @ 0x0804EA58 */

void sub_0804EA58(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804EA5E @ 0x0804EA5E */

void sub_0804EA5E(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804EA60 @ 0x0804EA60 */

void sub_0804EA60(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804EA84 @ 0x0804EA84 */

void sub_0804EA84(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804EAA0 @ 0x0804EAA0 */

void sub_0804EAA0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  sub_0800ECDA(param_2,0x11);
  sub_0800ED18(param_2,&DAT_03001b38);
  return;
}


/* sub_0804EAC4 @ 0x0804EAC4 */

void sub_0804EAC4(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804EACA @ 0x0804EACA */

void sub_0804EACA(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804EACC @ 0x0804EACC */

void sub_0804EACC(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804EAD2 @ 0x0804EAD2 */

void sub_0804EAD2(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_1 + 8);
  DAT_03003038 = 0;
  return;
}


/* sub_0804EAD4 @ 0x0804EAD4 */

void sub_0804EAD4(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_1 + 8);
  DAT_03003038 = 0;
  return;
}


/* sub_0804EAF4 @ 0x0804EAF4 */

void sub_0804EAF4(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x15);
  sub_0800ED18(param_2,&DAT_03003120);
  return;
}


/* sub_0804EB10 @ 0x0804EB10 */

void sub_0804EB10(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804EB16 @ 0x0804EB16 */

void sub_0804EB16(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03001b38);
  return;
}


/* sub_0804EB18 @ 0x0804EB18 */

void sub_0804EB18(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03001b38);
  return;
}


/* sub_0804EB34 @ 0x0804EB34 */

void sub_0804EB34(void)

{
  return;
}


/* sub_0804EB36 @ 0x0804EB36 */

void sub_0804EB36(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804EB38 @ 0x0804EB38 */

void sub_0804EB38(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804EB54 @ 0x0804EB54 */

void sub_0804EB54(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804EB5C @ 0x0804EB5C */

void sub_0804EB5C(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2,0,param_4);
  return;
}


/* sub_0804EB78 @ 0x0804EB78 */

void sub_0804EB78(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804EB94 @ 0x0804EB94 */

void sub_0804EB94(void)

{
  sub_0800DE60();
  return;
}


/* sub_0804EB9C @ 0x0804EB9C */

void sub_0804EB9C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  iVar2 = *piVar1;
  __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + (int)piVar1,iVar2,param_4);
  return;
}


/* sub_0804EBAC @ 0x0804EBAC */

void sub_0804EBAC(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x15);
  sub_0800ED18(param_2,&DAT_03003130);
  return;
}


/* sub_0804EBC8 @ 0x0804EBC8 */

void sub_0804EBC8(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804EBE4 @ 0x0804EBE4 */

void sub_0804EBE4(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  return;
}


/* sub_0804EBEA @ 0x0804EBEA */

void sub_0804EBEA(undefined4 param_1,int param_2)

{
  sub_0800DE60(param_1);
  *(undefined1 *)(param_2 + 8) = 0x37;
  return;
}


/* sub_0804EBEC @ 0x0804EBEC */

void sub_0804EBEC(undefined4 param_1,int param_2)

{
  sub_0800DE60();
  *(undefined1 *)(param_2 + 8) = 0x37;
  return;
}


/* sub_0804EBFA @ 0x0804EBFA */

void sub_0804EBFA(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804EBFC @ 0x0804EBFC */

void sub_0804EBFC(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* sub_0804EC02 @ 0x0804EC02 */

undefined4 sub_0804EC02(undefined4 param_1)

{
  return param_1;
}


/* sub_0804EC04 @ 0x0804EC04 */

void sub_0804EC04(void)

{
  return;
}


/* sub_0804EC06 @ 0x0804EC06 */

undefined4 sub_0804EC06(undefined4 param_1)

{
  return param_1;
}


/* sub_0804EC08 @ 0x0804EC08 */

void sub_0804EC08(void)

{
  return;
}


/* sub_0804EC0A @ 0x0804EC0A */

void sub_0804EC0A(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800ED18(param_2,&DAT_03003234,param_3,param_4,param_4);
  return;
}


/* sub_0804EC0C @ 0x0804EC0C */

void sub_0804EC0C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0800ED18(param_2,&DAT_03003234,param_3,param_4,param_4);
  return;
}


/* sub_0804EC1C @ 0x0804EC1C */

void sub_0804EC1C(void)

{
  return;
}


/* sub_0804EC1E @ 0x0804EC1E */

undefined4 sub_0804EC1E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804EC20 @ 0x0804EC20 */

void sub_0804EC20(void)

{
  return;
}


/* sub_0804EC22 @ 0x0804EC22 */

void sub_0804EC22(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* sub_0804EC24 @ 0x0804EC24 */

void sub_0804EC24(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* sub_0804EC2A @ 0x0804EC2A */

void sub_0804EC2A(undefined4 param_1)

{
  sub_0804912C(0x6000000,0,0x18000);
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BLDCNT = 0x3f5f;
  sub_0802574C(param_1);
  return;
}


/* sub_0804EC2C @ 0x0804EC2C */

void sub_0804EC2C(undefined4 param_1)

{
  sub_0804912C(0x6000000,0,0x18000);
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BLDCNT = 0x3f5f;
  sub_0802574C(param_1);
  return;
}


/* sub_0804EC5C @ 0x0804EC5C */

void sub_0804EC5C(undefined4 param_1)

{
  sub_0804912C(0x6000000,0,0x18000);
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BLDCNT = 0x3f5f;
  sub_08026212(param_1);
  return;
}


/* sub_0804EC8C @ 0x0804EC8C */

void sub_0804EC8C(int param_1)

{
  sub_0800AA9C(param_1 + 0x238);
  return;
}


/* sub_0804EC9A @ 0x0804EC9A */

undefined4 sub_0804EC9A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804EC9C @ 0x0804EC9C */

void sub_0804EC9C(void)

{
  return;
}


/* sub_0804EC9E @ 0x0804EC9E */

void sub_0804EC9E(int param_1)

{
  sub_0800AA9C(param_1 + 0x228);
  return;
}


/* sub_0804ECA0 @ 0x0804ECA0 */

void sub_0804ECA0(int param_1)

{
  sub_0800AA9C(param_1 + 0x228);
  return;
}


/* sub_0804ECAE @ 0x0804ECAE */

void sub_0804ECAE(int param_1)

{
  sub_0800AA4A(param_1 + 0x238);
  return;
}


/* sub_0804ECB0 @ 0x0804ECB0 */

void sub_0804ECB0(int param_1)

{
  sub_0800AA4A(param_1 + 0x238);
  return;
}


/* sub_0804ECBE @ 0x0804ECBE */

undefined4 sub_0804ECBE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804ECC0 @ 0x0804ECC0 */

void sub_0804ECC0(void)

{
  return;
}


/* sub_0804ECC2 @ 0x0804ECC2 */

void sub_0804ECC2(int param_1)

{
  sub_0800AA4A(param_1 + 0x228);
  return;
}


/* sub_0804ECC4 @ 0x0804ECC4 */

void sub_0804ECC4(int param_1)

{
  sub_0800AA4A(param_1 + 0x228);
  return;
}


/* sub_0804ECCC @ 0x0804ECCC */

void sub_0804ECCC(void)

{
  sub_0800AA4A();
  return;
}


/* sub_0804ECD2 @ 0x0804ECD2 */

void sub_0804ECD2(int param_1)

{
  sub_0800AAD8(param_1 + 0x238);
  return;
}


/* sub_0804ECD4 @ 0x0804ECD4 */

void sub_0804ECD4(int param_1)

{
  sub_0800AAD8(param_1 + 0x238);
  return;
}


/* sub_0804ECE2 @ 0x0804ECE2 */

undefined4 sub_0804ECE2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804ECE4 @ 0x0804ECE4 */

void sub_0804ECE4(void)

{
  return;
}


/* sub_0804ECE6 @ 0x0804ECE6 */

void sub_0804ECE6(int param_1)

{
  sub_0800AAD8(param_1 + 0x228);
  return;
}


/* sub_0804ECE8 @ 0x0804ECE8 */

void sub_0804ECE8(int param_1)

{
  sub_0800AAD8(param_1 + 0x228);
  return;
}


/* sub_0804ECF6 @ 0x0804ECF6 */

undefined4 sub_0804ECF6(undefined4 param_1)

{
  return param_1;
}


/* sub_0804ECF8 @ 0x0804ECF8 */

void sub_0804ECF8(void)

{
  return;
}


/* sub_0804ECFA @ 0x0804ECFA */

void sub_0804ECFA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804ECFC @ 0x0804ECFC */

void sub_0804ECFC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804ED10 @ 0x0804ED10 */

void sub_0804ED10(void)

{
  return;
}


/* sub_0804ED12 @ 0x0804ED12 */

undefined4 sub_0804ED12(void)

{
  return 0;
}


/* sub_0804ED14 @ 0x0804ED14 */

undefined4 sub_0804ED14(void)

{
  return 0;
}


/* sub_0804ED18 @ 0x0804ED18 */

void sub_0804ED18(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x20);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  return;
}


/* sub_0804ED26 @ 0x0804ED26 */

undefined4 sub_0804ED26(void)

{
  return 1;
}


/* sub_0804ED28 @ 0x0804ED28 */

undefined4 sub_0804ED28(void)

{
  return 1;
}


/* sub_0804ED2C @ 0x0804ED2C */

undefined4 sub_0804ED2C(void)

{
  return 1;
}


/* sub_0804ED30 @ 0x0804ED30 */

undefined4 sub_0804ED30(void)

{
  return 1;
}


/* sub_0804ED34 @ 0x0804ED34 */

undefined4 sub_0804ED34(void)

{
  return 1;
}


/* sub_0804ED38 @ 0x0804ED38 */

undefined4 sub_0804ED38(void)

{
  return 1;
}


/* sub_0804ED3C @ 0x0804ED3C */

undefined4 sub_0804ED3C(void)

{
  return 1;
}


/* sub_0804ED40 @ 0x0804ED40 */

undefined4 sub_0804ED40(void)

{
  return 1;
}


/* sub_0804ED44 @ 0x0804ED44 */

undefined4 sub_0804ED44(void)

{
  return 1;
}


/* sub_0804ED48 @ 0x0804ED48 */

undefined4 sub_0804ED48(void)

{
  return 0;
}


/* sub_0804ED4C @ 0x0804ED4C */

undefined4 sub_0804ED4C(void)

{
  return 0;
}


/* sub_0804ED50 @ 0x0804ED50 */

undefined4 sub_0804ED50(void)

{
  return 0;
}


/* sub_0804ED54 @ 0x0804ED54 */

undefined4 sub_0804ED54(void)

{
  return 1;
}


/* sub_0804ED58 @ 0x0804ED58 */

void sub_0804ED58(void)

{
  return;
}


/* sub_0804ED5A @ 0x0804ED5A */

undefined4 sub_0804ED5A(void)

{
  return 1;
}


/* sub_0804ED5C @ 0x0804ED5C */

undefined4 sub_0804ED5C(void)

{
  return 1;
}


/* sub_0804ED60 @ 0x0804ED60 */

undefined4 sub_0804ED60(void)

{
  return 2;
}


/* sub_0804ED64 @ 0x0804ED64 */

undefined4 sub_0804ED64(void)

{
  return 0;
}


/* sub_0804ED68 @ 0x0804ED68 */

undefined4 sub_0804ED68(void)

{
  return 0;
}


/* sub_0804ED6C @ 0x0804ED6C */

void sub_0804ED6C(int param_1)

{
  sub_0803FADE(*(undefined4 *)(param_1 + 0xc));
  return;
}


/* sub_0804ED76 @ 0x0804ED76 */

undefined4 sub_0804ED76(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) < DAT_03000f94 - *(int *)(param_2 + 0x210)) {
    return 1;
  }
  return 0;
}


/* sub_0804ED78 @ 0x0804ED78 */

undefined4 sub_0804ED78(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) < DAT_03000f94 - *(int *)(param_2 + 0x210)) {
    return 1;
  }
  return 0;
}


/* sub_0804ED98 @ 0x0804ED98 */

undefined4 sub_0804ED98(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) < DAT_03000f94 - *(int *)(param_2 + 0x1e8)) {
    return 1;
  }
  return 0;
}


/* sub_0804EDB8 @ 0x0804EDB8 */

undefined4 sub_0804EDB8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) < DAT_03000f94 - *(int *)(param_2 + 0x1ec)) {
    return 1;
  }
  return 0;
}


/* sub_0804EDD8 @ 0x0804EDD8 */

undefined4 sub_0804EDD8(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x28c) + *(int *)(param_1 + 0x10) * -0x400 < 0 !=
      SBORROW4(*(int *)(param_2 + 0x28c),*(int *)(param_1 + 0x10) * 0x400)) {
    return 1;
  }
  return 0;
}


/* sub_0804EDF0 @ 0x0804EDF0 */

bool sub_0804EDF0(void)

{
  return 0 < DAT_03002fe4;
}


/* sub_0804EE04 @ 0x0804EE04 */

void sub_0804EE04(void)

{
  undefined1 auStack_18 [16];
  
  sub_0800FDFA(auStack_18);
  sub_08009324(auStack_18,DAT_03001a54);
  return;
}


/* sub_0804EE24 @ 0x0804EE24 */

int sub_0804EE24(void)

{
  return 1 - DAT_0300302c;
}


/* sub_0804EE34 @ 0x0804EE34 */

undefined4 sub_0804EE34(void)

{
  return DAT_0300302c;
}


/* sub_0804EE40 @ 0x0804EE40 */

undefined4 sub_0804EE40(void)

{
  if (*(int *)(*(int *)(DAT_03001c34 + 0x58) + 0xa8) == *(int *)(DAT_03001c34 + 0x50)) {
    return 1;
  }
  return 0;
}


/* sub_0804EE5C @ 0x0804EE5C */

undefined4 sub_0804EE5C(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x1e4) == *(int *)(param_1 + 0xc)) {
    return 1;
  }
  return 0;
}


/* sub_0804EE70 @ 0x0804EE70 */

bool sub_0804EE70(void)

{
  return *(int *)(*(int *)(DAT_03001c34 + 0x58) + 0xa8) != *(int *)(DAT_03001c34 + 0x50);
}


/* sub_0804EE90 @ 0x0804EE90 */

bool sub_0804EE90(void)

{
  return DAT_030032e4 == '\x01';
}


/* sub_0804EEA4 @ 0x0804EEA4 */

undefined4 sub_0804EEA4(void)

{
  return 0;
}


/* sub_0804EEA8 @ 0x0804EEA8 */

undefined4 sub_0804EEA8(void)

{
  return 0;
}


/* sub_0804EEAC @ 0x0804EEAC */

void sub_0804EEAC(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    *puVar1 = &_08049EEC;
    puVar1[4] = 0;
  }
  return;
}


/* sub_0804EED0 @ 0x0804EED0 */

void sub_0804EED0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08050544(0,param_1,param_3,param_4,param_4);
  return;
}


/* sub_0804EEDC @ 0x0804EEDC */

void sub_0804EEDC(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    *puVar1 = &_0804A810;
  }
  return;
}


/* sub_0804EEFC @ 0x0804EEFC */

void sub_0804EEFC(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &_0804B348;
    puVar1[5] = 0;
  }
  return;
}


/* sub_0804EF20 @ 0x0804EF20 */

void sub_0804EF20(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    *puVar1 = &_0804B994;
    puVar1[4] = 300;
  }
  return;
}


/* sub_0804EF48 @ 0x0804EF48 */

void sub_0804EF48(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &_0804B9A4;
    puVar1[5] = 0;
  }
  return;
}


/* sub_0804EF6C @ 0x0804EF6C */

void sub_0804EF6C(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    *puVar1 = &_0804C878;
    puVar1[4] = 0;
  }
  return;
}


/* sub_0804EF90 @ 0x0804EF90 */

void sub_0804EF90(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    *puVar1 = &_0804CD9C;
    puVar1[4] = 0;
  }
  return;
}


/* sub_0804EFB4 @ 0x0804EFB4 */

void sub_0804EFB4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = &_0804D0E8;
    puVar1[6] = 0;
  }
  return;
}


/* sub_0804EFDC @ 0x0804EFDC */

void sub_0804EFDC(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = &_0804D504;
    puVar1[6] = 0;
  }
  return;
}


/* sub_0804EFF8 @ 0x0804EFF8 */

void sub_0804EFF8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_3;
  param_1[6] = param_2;
  return;
}


/* sub_0804F004 @ 0x0804F004 */

undefined4 * sub_0804F004(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    *puVar1 = &_0804DEDC;
    iVar2 = sub_0803FACC(0x78);
    puVar1[3] = iVar2 + 0xf0;
  }
  return puVar1;
}


/* sub_0804F034 @ 0x0804F034 */

undefined4 * sub_0804F034(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    *puVar1 = &_0804E1A4;
    iVar2 = sub_0803FACC(0xb4);
    puVar1[3] = iVar2 + 0x78;
  }
  return puVar1;
}


/* sub_0804F064 @ 0x0804F064 */

void sub_0804F064(void)

{
  return;
}


/* sub_0804F066 @ 0x0804F066 */

undefined4 sub_0804F066(void)

{
  return 0;
}


/* sub_0804F068 @ 0x0804F068 */

undefined4 sub_0804F068(void)

{
  return 0;
}


/* sub_0804F06C @ 0x0804F06C */

undefined4 sub_0804F06C(void)

{
  return 1;
}


/* sub_0804F070 @ 0x0804F070 */

undefined4 sub_0804F070(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


/* sub_0804F074 @ 0x0804F074 */

void sub_0804F074(void)

{
  return;
}


/* sub_0804F076 @ 0x0804F076 */

undefined4 sub_0804F076(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F078 @ 0x0804F078 */

void sub_0804F078(void)

{
  return;
}


/* sub_0804F07A @ 0x0804F07A */

void sub_0804F07A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F07C @ 0x0804F07C */

void sub_0804F07C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F090 @ 0x0804F090 */

void sub_0804F090(void)

{
  return;
}


/* sub_0804F092 @ 0x0804F092 */

void sub_0804F092(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F094 @ 0x0804F094 */

void sub_0804F094(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F09C @ 0x0804F09C */

void sub_0804F09C(void)

{
  return;
}


/* sub_0804F09E @ 0x0804F09E */

undefined4 sub_0804F09E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F0A0 @ 0x0804F0A0 */

void sub_0804F0A0(void)

{
  return;
}


/* sub_0804F0A2 @ 0x0804F0A2 */

undefined4 sub_0804F0A2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F0A4 @ 0x0804F0A4 */

void sub_0804F0A4(void)

{
  return;
}


/* sub_0804F0A6 @ 0x0804F0A6 */

void sub_0804F0A6(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F0A8 @ 0x0804F0A8 */

void sub_0804F0A8(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F0B0 @ 0x0804F0B0 */

void sub_0804F0B0(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F0B8 @ 0x0804F0B8 */

void sub_0804F0B8(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F0C0 @ 0x0804F0C0 */

void sub_0804F0C0(void)

{
  return;
}


/* sub_0804F0C2 @ 0x0804F0C2 */

undefined4 sub_0804F0C2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F0C4 @ 0x0804F0C4 */

void sub_0804F0C4(void)

{
  return;
}


/* sub_0804F0C6 @ 0x0804F0C6 */

void sub_0804F0C6(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F0C8 @ 0x0804F0C8 */

void sub_0804F0C8(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F0D0 @ 0x0804F0D0 */

void sub_0804F0D0(void)

{
  return;
}


/* sub_0804F0D2 @ 0x0804F0D2 */

void sub_0804F0D2(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F0D4 @ 0x0804F0D4 */

void sub_0804F0D4(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F0DC @ 0x0804F0DC */

void sub_0804F0DC(void)

{
  return;
}


/* sub_0804F0DE @ 0x0804F0DE */

undefined4 sub_0804F0DE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F0E0 @ 0x0804F0E0 */

void sub_0804F0E0(void)

{
  return;
}


/* sub_0804F0E2 @ 0x0804F0E2 */

void sub_0804F0E2(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F0E4 @ 0x0804F0E4 */

void sub_0804F0E4(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F0EC @ 0x0804F0EC */

void sub_0804F0EC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F100 @ 0x0804F100 */

void sub_0804F100(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F114 @ 0x0804F114 */

void sub_0804F114(void)

{
  return;
}


/* sub_0804F116 @ 0x0804F116 */

undefined4 sub_0804F116(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F118 @ 0x0804F118 */

void sub_0804F118(void)

{
  return;
}


/* sub_0804F11A @ 0x0804F11A */

void sub_0804F11A(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F11C @ 0x0804F11C */

void sub_0804F11C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F124 @ 0x0804F124 */

void sub_0804F124(void)

{
  return;
}


/* sub_0804F126 @ 0x0804F126 */

void sub_0804F126(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F128 @ 0x0804F128 */

void sub_0804F128(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F130 @ 0x0804F130 */

void sub_0804F130(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F138 @ 0x0804F138 */

void sub_0804F138(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F140 @ 0x0804F140 */

void sub_0804F140(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F148 @ 0x0804F148 */

void sub_0804F148(void)

{
  return;
}


/* sub_0804F14A @ 0x0804F14A */

void sub_0804F14A(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F14C @ 0x0804F14C */

void sub_0804F14C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F154 @ 0x0804F154 */

void sub_0804F154(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F15C @ 0x0804F15C */

void sub_0804F15C(void)

{
  return;
}


/* sub_0804F15E @ 0x0804F15E */

undefined4 sub_0804F15E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F160 @ 0x0804F160 */

void sub_0804F160(void)

{
  return;
}


/* sub_0804F162 @ 0x0804F162 */

undefined4 sub_0804F162(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F164 @ 0x0804F164 */

void sub_0804F164(void)

{
  return;
}


/* sub_0804F166 @ 0x0804F166 */

void sub_0804F166(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F168 @ 0x0804F168 */

void sub_0804F168(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F170 @ 0x0804F170 */

void sub_0804F170(void)

{
  return;
}


/* sub_0804F172 @ 0x0804F172 */

undefined4 sub_0804F172(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F174 @ 0x0804F174 */

void sub_0804F174(void)

{
  return;
}


/* sub_0804F176 @ 0x0804F176 */

undefined4 sub_0804F176(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F178 @ 0x0804F178 */

void sub_0804F178(void)

{
  return;
}


/* sub_0804F17A @ 0x0804F17A */

void sub_0804F17A(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F17C @ 0x0804F17C */

void sub_0804F17C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F184 @ 0x0804F184 */

void sub_0804F184(void)

{
  return;
}


/* sub_0804F186 @ 0x0804F186 */

undefined4 sub_0804F186(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F188 @ 0x0804F188 */

void sub_0804F188(void)

{
  return;
}


/* sub_0804F18A @ 0x0804F18A */

void sub_0804F18A(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F18C @ 0x0804F18C */

void sub_0804F18C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F194 @ 0x0804F194 */

void sub_0804F194(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F19C @ 0x0804F19C */

void sub_0804F19C(void)

{
  return;
}


/* sub_0804F19E @ 0x0804F19E */

undefined4 sub_0804F19E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1A0 @ 0x0804F1A0 */

void sub_0804F1A0(void)

{
  return;
}


/* sub_0804F1A2 @ 0x0804F1A2 */

undefined4 sub_0804F1A2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1A4 @ 0x0804F1A4 */

void sub_0804F1A4(void)

{
  return;
}


/* sub_0804F1A6 @ 0x0804F1A6 */

undefined4 sub_0804F1A6(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1A8 @ 0x0804F1A8 */

void sub_0804F1A8(void)

{
  return;
}


/* sub_0804F1AA @ 0x0804F1AA */

undefined4 sub_0804F1AA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1AC @ 0x0804F1AC */

void sub_0804F1AC(void)

{
  return;
}


/* sub_0804F1AE @ 0x0804F1AE */

undefined4 sub_0804F1AE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1B0 @ 0x0804F1B0 */

void sub_0804F1B0(void)

{
  return;
}


/* sub_0804F1B2 @ 0x0804F1B2 */

undefined4 sub_0804F1B2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1B4 @ 0x0804F1B4 */

void sub_0804F1B4(void)

{
  return;
}


/* sub_0804F1B6 @ 0x0804F1B6 */

void sub_0804F1B6(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F1B8 @ 0x0804F1B8 */

void sub_0804F1B8(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F1C0 @ 0x0804F1C0 */

void sub_0804F1C0(void)

{
  return;
}


/* sub_0804F1C2 @ 0x0804F1C2 */

void sub_0804F1C2(int *param_1)

{
  sub_08009692(&DAT_030019a4,0);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_0804F1C4 @ 0x0804F1C4 */

void sub_0804F1C4(int *param_1)

{
  sub_08009692(&DAT_030019a4,0);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}


/* sub_0804F1E8 @ 0x0804F1E8 */

void sub_0804F1E8(void)

{
  return;
}


/* sub_0804F1EA @ 0x0804F1EA */

undefined4 sub_0804F1EA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1EC @ 0x0804F1EC */

void sub_0804F1EC(void)

{
  return;
}


/* sub_0804F1EE @ 0x0804F1EE */

undefined4 sub_0804F1EE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1F0 @ 0x0804F1F0 */

void sub_0804F1F0(void)

{
  return;
}


/* sub_0804F1F2 @ 0x0804F1F2 */

undefined4 sub_0804F1F2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1F4 @ 0x0804F1F4 */

void sub_0804F1F4(void)

{
  return;
}


/* sub_0804F1F6 @ 0x0804F1F6 */

undefined4 sub_0804F1F6(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1F8 @ 0x0804F1F8 */

void sub_0804F1F8(void)

{
  return;
}


/* sub_0804F1FA @ 0x0804F1FA */

undefined4 sub_0804F1FA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F1FC @ 0x0804F1FC */

void sub_0804F1FC(void)

{
  return;
}


/* sub_0804F1FE @ 0x0804F1FE */

undefined4 sub_0804F1FE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F200 @ 0x0804F200 */

void sub_0804F200(void)

{
  return;
}


/* sub_0804F202 @ 0x0804F202 */

undefined4 sub_0804F202(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F204 @ 0x0804F204 */

void sub_0804F204(void)

{
  return;
}


/* sub_0804F206 @ 0x0804F206 */

undefined4 sub_0804F206(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F208 @ 0x0804F208 */

void sub_0804F208(void)

{
  return;
}


/* sub_0804F20A @ 0x0804F20A */

undefined4 sub_0804F20A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F20C @ 0x0804F20C */

void sub_0804F20C(void)

{
  return;
}


/* sub_0804F20E @ 0x0804F20E */

void sub_0804F20E(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    *param_1 = &_0804AAF4;
    if (0 < (int)param_1[2]) {
      do {
        iVar1 = *(int *)param_1[iVar2 + 3];
        __call_via_r1((int *)param_1[iVar2 + 3],*(int *)(iVar1 + 0xc) + iVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[2]);
    }
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0804F210 @ 0x0804F210 */

void sub_0804F210(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    *param_1 = &_0804AAF4;
    if (0 < (int)param_1[2]) {
      do {
        iVar1 = *(int *)param_1[iVar2 + 3];
        __call_via_r1((int *)param_1[iVar2 + 3],*(int *)(iVar1 + 0xc) + iVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[2]);
    }
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0804F248 @ 0x0804F248 */

void sub_0804F248(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F250 @ 0x0804F250 */

void sub_0804F250(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F258 @ 0x0804F258 */

void sub_0804F258(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F260 @ 0x0804F260 */

void sub_0804F260(void)

{
  return;
}


/* sub_0804F262 @ 0x0804F262 */

void sub_0804F262(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F264 @ 0x0804F264 */

void sub_0804F264(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F26C @ 0x0804F26C */

void sub_0804F26C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F274 @ 0x0804F274 */

void sub_0804F274(void)

{
  return;
}


/* sub_0804F276 @ 0x0804F276 */

void sub_0804F276(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F278 @ 0x0804F278 */

void sub_0804F278(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F280 @ 0x0804F280 */

void sub_0804F280(void)

{
  return;
}


/* sub_0804F282 @ 0x0804F282 */

undefined4 sub_0804F282(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F284 @ 0x0804F284 */

void sub_0804F284(void)

{
  return;
}


/* sub_0804F286 @ 0x0804F286 */

void sub_0804F286(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F288 @ 0x0804F288 */

void sub_0804F288(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F290 @ 0x0804F290 */

void sub_0804F290(void)

{
  return;
}


/* sub_0804F292 @ 0x0804F292 */

undefined4 sub_0804F292(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F294 @ 0x0804F294 */

void sub_0804F294(void)

{
  return;
}


/* sub_0804F296 @ 0x0804F296 */

undefined4 sub_0804F296(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F298 @ 0x0804F298 */

void sub_0804F298(void)

{
  return;
}


/* sub_0804F29A @ 0x0804F29A */

undefined4 sub_0804F29A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F29C @ 0x0804F29C */

void sub_0804F29C(void)

{
  return;
}


/* sub_0804F29E @ 0x0804F29E */

void sub_0804F29E(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F2A0 @ 0x0804F2A0 */

void sub_0804F2A0(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F2A8 @ 0x0804F2A8 */

void sub_0804F2A8(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F2B0 @ 0x0804F2B0 */

void sub_0804F2B0(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F2B8 @ 0x0804F2B8 */

void sub_0804F2B8(void)

{
  return;
}


/* sub_0804F2BA @ 0x0804F2BA */

undefined4 sub_0804F2BA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F2BC @ 0x0804F2BC */

void sub_0804F2BC(void)

{
  return;
}


/* sub_0804F2BE @ 0x0804F2BE */

void sub_0804F2BE(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F2C0 @ 0x0804F2C0 */

void sub_0804F2C0(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F2C8 @ 0x0804F2C8 */

void sub_0804F2C8(void)

{
  return;
}


/* sub_0804F2CA @ 0x0804F2CA */

undefined4 sub_0804F2CA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F2CC @ 0x0804F2CC */

void sub_0804F2CC(void)

{
  return;
}


/* sub_0804F2CE @ 0x0804F2CE */

undefined4 sub_0804F2CE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F2D0 @ 0x0804F2D0 */

void sub_0804F2D0(void)

{
  return;
}


/* sub_0804F2D2 @ 0x0804F2D2 */

void sub_0804F2D2(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F2D4 @ 0x0804F2D4 */

void sub_0804F2D4(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F2DC @ 0x0804F2DC */

void sub_0804F2DC(void)

{
  return;
}


/* sub_0804F2DE @ 0x0804F2DE */

undefined4 sub_0804F2DE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F2E0 @ 0x0804F2E0 */

void sub_0804F2E0(void)

{
  return;
}


/* sub_0804F2E2 @ 0x0804F2E2 */

undefined4 sub_0804F2E2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F2E4 @ 0x0804F2E4 */

void sub_0804F2E4(void)

{
  return;
}


/* sub_0804F2E6 @ 0x0804F2E6 */

undefined4 sub_0804F2E6(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F2E8 @ 0x0804F2E8 */

void sub_0804F2E8(void)

{
  return;
}


/* sub_0804F2EA @ 0x0804F2EA */

void sub_0804F2EA(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F2EC @ 0x0804F2EC */

void sub_0804F2EC(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F2F4 @ 0x0804F2F4 */

void sub_0804F2F4(void)

{
  return;
}


/* sub_0804F2F6 @ 0x0804F2F6 */

void sub_0804F2F6(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F2F8 @ 0x0804F2F8 */

void sub_0804F2F8(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F300 @ 0x0804F300 */

void sub_0804F300(void)

{
  return;
}


/* sub_0804F302 @ 0x0804F302 */

void sub_0804F302(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F304 @ 0x0804F304 */

void sub_0804F304(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F30C @ 0x0804F30C */

void sub_0804F30C(void)

{
  return;
}


/* sub_0804F30E @ 0x0804F30E */

undefined4 sub_0804F30E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F310 @ 0x0804F310 */

void sub_0804F310(void)

{
  return;
}


/* sub_0804F312 @ 0x0804F312 */

void sub_0804F312(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F314 @ 0x0804F314 */

void sub_0804F314(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F31C @ 0x0804F31C */

void sub_0804F31C(void)

{
  return;
}


/* sub_0804F31E @ 0x0804F31E */

undefined4 sub_0804F31E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F320 @ 0x0804F320 */

void sub_0804F320(void)

{
  return;
}


/* sub_0804F322 @ 0x0804F322 */

undefined4 sub_0804F322(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F324 @ 0x0804F324 */

void sub_0804F324(void)

{
  return;
}


/* sub_0804F326 @ 0x0804F326 */

void sub_0804F326(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F328 @ 0x0804F328 */

void sub_0804F328(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F330 @ 0x0804F330 */

void sub_0804F330(void)

{
  return;
}


/* sub_0804F332 @ 0x0804F332 */

void sub_0804F332(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F334 @ 0x0804F334 */

void sub_0804F334(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F33C @ 0x0804F33C */

void sub_0804F33C(void)

{
  return;
}


/* sub_0804F33E @ 0x0804F33E */

void sub_0804F33E(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F340 @ 0x0804F340 */

void sub_0804F340(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F348 @ 0x0804F348 */

void sub_0804F348(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F350 @ 0x0804F350 */

void sub_0804F350(void)

{
  return;
}


/* sub_0804F352 @ 0x0804F352 */

void sub_0804F352(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F354 @ 0x0804F354 */

void sub_0804F354(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F35C @ 0x0804F35C */

void sub_0804F35C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F364 @ 0x0804F364 */

void sub_0804F364(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F36C @ 0x0804F36C */

void sub_0804F36C(void)

{
  return;
}


/* sub_0804F36E @ 0x0804F36E */

undefined4 sub_0804F36E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F370 @ 0x0804F370 */

void sub_0804F370(void)

{
  return;
}


/* sub_0804F372 @ 0x0804F372 */

void sub_0804F372(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F374 @ 0x0804F374 */

void sub_0804F374(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F37C @ 0x0804F37C */

void sub_0804F37C(void)

{
  return;
}


/* sub_0804F37E @ 0x0804F37E */

undefined4 sub_0804F37E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F380 @ 0x0804F380 */

void sub_0804F380(void)

{
  return;
}


/* sub_0804F382 @ 0x0804F382 */

undefined4 sub_0804F382(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F384 @ 0x0804F384 */

void sub_0804F384(void)

{
  return;
}


/* sub_0804F386 @ 0x0804F386 */

undefined4 sub_0804F386(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F388 @ 0x0804F388 */

void sub_0804F388(void)

{
  return;
}


/* sub_0804F38A @ 0x0804F38A */

undefined4 sub_0804F38A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F38C @ 0x0804F38C */

void sub_0804F38C(void)

{
  return;
}


/* sub_0804F38E @ 0x0804F38E */

void sub_0804F38E(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F390 @ 0x0804F390 */

void sub_0804F390(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F398 @ 0x0804F398 */

void sub_0804F398(void)

{
  return;
}


/* sub_0804F39A @ 0x0804F39A */

undefined4 sub_0804F39A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F39C @ 0x0804F39C */

void sub_0804F39C(void)

{
  return;
}


/* sub_0804F39E @ 0x0804F39E */

void sub_0804F39E(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F3A0 @ 0x0804F3A0 */

void sub_0804F3A0(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F3A8 @ 0x0804F3A8 */

void sub_0804F3A8(void)

{
  return;
}


/* sub_0804F3AA @ 0x0804F3AA */

undefined4 sub_0804F3AA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F3AC @ 0x0804F3AC */

void sub_0804F3AC(void)

{
  return;
}


/* sub_0804F3AE @ 0x0804F3AE */

undefined4 sub_0804F3AE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F3B0 @ 0x0804F3B0 */

void sub_0804F3B0(void)

{
  return;
}


/* sub_0804F3B2 @ 0x0804F3B2 */

void sub_0804F3B2(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F3B4 @ 0x0804F3B4 */

void sub_0804F3B4(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F3BC @ 0x0804F3BC */

void sub_0804F3BC(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    *param_1 = &_0804BDA8;
    if (0 < (int)param_1[1]) {
      do {
        iVar1 = *(int *)param_1[iVar2 + 2];
        __call_via_r1((int *)param_1[iVar2 + 2],*(int *)(iVar1 + 0xc) + iVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[1]);
    }
    sub_0803D63C(param_1);
  }
  return;
}


/* sub_0804F3F4 @ 0x0804F3F4 */

void sub_0804F3F4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &_0804BDD0;
    sub_0803D63C();
  }
  return;
}


/* sub_0804F408 @ 0x0804F408 */

void sub_0804F408(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F410 @ 0x0804F410 */

void sub_0804F410(void)

{
  return;
}


/* sub_0804F412 @ 0x0804F412 */

undefined4 sub_0804F412(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F414 @ 0x0804F414 */

void sub_0804F414(void)

{
  return;
}


/* sub_0804F416 @ 0x0804F416 */

void sub_0804F416(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)(*param_1 + 0x10) + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F418 @ 0x0804F418 */

void sub_0804F418(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)(*param_1 + 0x10) + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F42C @ 0x0804F42C */

void sub_0804F42C(void)

{
  return;
}


/* sub_0804F42E @ 0x0804F42E */

void sub_0804F42E(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F430 @ 0x0804F430 */

void sub_0804F430(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F438 @ 0x0804F438 */

void sub_0804F438(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F440 @ 0x0804F440 */

void sub_0804F440(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F448 @ 0x0804F448 */

void sub_0804F448(void)

{
  return;
}


/* sub_0804F44A @ 0x0804F44A */

undefined4 sub_0804F44A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F44C @ 0x0804F44C */

void sub_0804F44C(void)

{
  return;
}


/* sub_0804F44E @ 0x0804F44E */

undefined4 sub_0804F44E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F450 @ 0x0804F450 */

void sub_0804F450(void)

{
  return;
}


/* sub_0804F452 @ 0x0804F452 */

undefined4 sub_0804F452(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F454 @ 0x0804F454 */

void sub_0804F454(void)

{
  return;
}


/* sub_0804F456 @ 0x0804F456 */

undefined4 sub_0804F456(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F458 @ 0x0804F458 */

void sub_0804F458(void)

{
  return;
}


/* sub_0804F45A @ 0x0804F45A */

void sub_0804F45A(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F45C @ 0x0804F45C */

void sub_0804F45C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F464 @ 0x0804F464 */

void sub_0804F464(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F46C @ 0x0804F46C */

void sub_0804F46C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F474 @ 0x0804F474 */

void sub_0804F474(void)

{
  return;
}


/* sub_0804F476 @ 0x0804F476 */

void sub_0804F476(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F478 @ 0x0804F478 */

void sub_0804F478(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F480 @ 0x0804F480 */

void sub_0804F480(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F488 @ 0x0804F488 */

void sub_0804F488(void)

{
  return;
}


/* sub_0804F48A @ 0x0804F48A */

undefined4 sub_0804F48A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F48C @ 0x0804F48C */

void sub_0804F48C(void)

{
  return;
}


/* sub_0804F48E @ 0x0804F48E */

void sub_0804F48E(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F490 @ 0x0804F490 */

void sub_0804F490(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F498 @ 0x0804F498 */

void sub_0804F498(void)

{
  return;
}


/* sub_0804F49A @ 0x0804F49A */

undefined4 sub_0804F49A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F49C @ 0x0804F49C */

void sub_0804F49C(void)

{
  return;
}


/* sub_0804F49E @ 0x0804F49E */

void sub_0804F49E(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F4A0 @ 0x0804F4A0 */

void sub_0804F4A0(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F4A8 @ 0x0804F4A8 */

void sub_0804F4A8(void)

{
  return;
}


/* sub_0804F4AA @ 0x0804F4AA */

void sub_0804F4AA(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F4AC @ 0x0804F4AC */

void sub_0804F4AC(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F4B4 @ 0x0804F4B4 */

void sub_0804F4B4(void)

{
  return;
}


/* sub_0804F4B6 @ 0x0804F4B6 */

void sub_0804F4B6(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F4B8 @ 0x0804F4B8 */

void sub_0804F4B8(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F4C0 @ 0x0804F4C0 */

void sub_0804F4C0(void)

{
  return;
}


/* sub_0804F4C2 @ 0x0804F4C2 */

undefined4 sub_0804F4C2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F4C4 @ 0x0804F4C4 */

void sub_0804F4C4(void)

{
  return;
}


/* sub_0804F4C6 @ 0x0804F4C6 */

void sub_0804F4C6(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F4C8 @ 0x0804F4C8 */

void sub_0804F4C8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    __call_via_r1(piVar1,*(int *)*piVar1 + *piVar1);
  }
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F4E4 @ 0x0804F4E4 */

void sub_0804F4E4(void)

{
  return;
}


/* sub_0804F4E6 @ 0x0804F4E6 */

void sub_0804F4E6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)(*param_1 + 0x10) + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F4E8 @ 0x0804F4E8 */

void sub_0804F4E8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)(*param_1 + 0x10) + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F4FC @ 0x0804F4FC */

void sub_0804F4FC(void)

{
  return;
}


/* sub_0804F4FE @ 0x0804F4FE */

void sub_0804F4FE(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F500 @ 0x0804F500 */

void sub_0804F500(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F508 @ 0x0804F508 */

void sub_0804F508(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F510 @ 0x0804F510 */

void sub_0804F510(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F518 @ 0x0804F518 */

void sub_0804F518(void)

{
  return;
}


/* sub_0804F51A @ 0x0804F51A */

undefined4 sub_0804F51A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F51C @ 0x0804F51C */

void sub_0804F51C(void)

{
  return;
}


/* sub_0804F51E @ 0x0804F51E */

undefined4 sub_0804F51E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F520 @ 0x0804F520 */

void sub_0804F520(void)

{
  return;
}


/* sub_0804F522 @ 0x0804F522 */

undefined4 sub_0804F522(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F524 @ 0x0804F524 */

void sub_0804F524(void)

{
  return;
}


/* sub_0804F526 @ 0x0804F526 */

undefined4 sub_0804F526(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F528 @ 0x0804F528 */

void sub_0804F528(void)

{
  return;
}


/* sub_0804F52A @ 0x0804F52A */

undefined4 sub_0804F52A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F52C @ 0x0804F52C */

void sub_0804F52C(void)

{
  return;
}


/* sub_0804F52E @ 0x0804F52E */

undefined4 sub_0804F52E(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F530 @ 0x0804F530 */

void sub_0804F530(void)

{
  return;
}


/* sub_0804F532 @ 0x0804F532 */

undefined4 sub_0804F532(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F534 @ 0x0804F534 */

void sub_0804F534(void)

{
  return;
}


/* sub_0804F536 @ 0x0804F536 */

undefined4 sub_0804F536(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F538 @ 0x0804F538 */

void sub_0804F538(void)

{
  return;
}


/* sub_0804F53A @ 0x0804F53A */

void sub_0804F53A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F53C @ 0x0804F53C */

void sub_0804F53C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F550 @ 0x0804F550 */

undefined4 sub_0804F550(void)

{
  return 0;
}


/* sub_0804F554 @ 0x0804F554 */

void sub_0804F554(void)

{
  return;
}


/* sub_0804F556 @ 0x0804F556 */

undefined4 sub_0804F556(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F558 @ 0x0804F558 */

void sub_0804F558(void)

{
  return;
}


/* sub_0804F55A @ 0x0804F55A */

void sub_0804F55A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F55C @ 0x0804F55C */

void sub_0804F55C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F570 @ 0x0804F570 */

void sub_0804F570(void)

{
  return;
}


/* sub_0804F572 @ 0x0804F572 */

void sub_0804F572(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F574 @ 0x0804F574 */

void sub_0804F574(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F588 @ 0x0804F588 */

void sub_0804F588(void)

{
  return;
}


/* sub_0804F58A @ 0x0804F58A */

void sub_0804F58A(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F58C @ 0x0804F58C */

void sub_0804F58C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F594 @ 0x0804F594 */

void sub_0804F594(void)

{
  return;
}


/* sub_0804F596 @ 0x0804F596 */

undefined4 sub_0804F596(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F598 @ 0x0804F598 */

void sub_0804F598(void)

{
  return;
}


/* sub_0804F59A @ 0x0804F59A */

void sub_0804F59A(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F59C @ 0x0804F59C */

void sub_0804F59C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F5B0 @ 0x0804F5B0 */

void sub_0804F5B0(void)

{
  return;
}


/* sub_0804F5B2 @ 0x0804F5B2 */

void sub_0804F5B2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F5B4 @ 0x0804F5B4 */

void sub_0804F5B4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,param_4,param_4);
  }
  return;
}


/* sub_0804F5C8 @ 0x0804F5C8 */

void sub_0804F5C8(void)

{
  return;
}


/* sub_0804F5CA @ 0x0804F5CA */

void sub_0804F5CA(undefined4 param_1,undefined4 param_2)

{
  sub_0800F954(param_2);
  return;
}


/* sub_0804F5CC @ 0x0804F5CC */

void sub_0804F5CC(undefined4 param_1,undefined4 param_2)

{
  sub_0800F954(param_2);
  return;
}


/* sub_0804F5D0 @ 0x0804F5D0 */

void sub_0804F5D0(void)

{
  sub_0800F954();
  return;
}


/* sub_0804F5D6 @ 0x0804F5D6 */

void sub_0804F5D6(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 1;
  return;
}


/* sub_0804F5D8 @ 0x0804F5D8 */

void sub_0804F5D8(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 1;
  return;
}


/* sub_0804F5E0 @ 0x0804F5E0 */

void sub_0804F5E0(void)

{
  return;
}


/* sub_0804F5E2 @ 0x0804F5E2 */

undefined4 sub_0804F5E2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F5E4 @ 0x0804F5E4 */

void sub_0804F5E4(void)

{
  return;
}


/* sub_0804F5E6 @ 0x0804F5E6 */

void sub_0804F5E6(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F5E8 @ 0x0804F5E8 */

void sub_0804F5E8(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F5F0 @ 0x0804F5F0 */

void sub_0804F5F0(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F5F8 @ 0x0804F5F8 */

void sub_0804F5F8(void)

{
  return;
}


/* sub_0804F5FA @ 0x0804F5FA */

void sub_0804F5FA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  return;
}


/* sub_0804F5FC @ 0x0804F5FC */

void sub_0804F5FC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  return;
}


/* sub_0804F60A @ 0x0804F60A */

void sub_0804F60A(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2,param_4,param_4);
  return;
}


/* sub_0804F60C @ 0x0804F60C */

void sub_0804F60C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2,param_4,param_4);
  return;
}


/* sub_0804F61E @ 0x0804F61E */

void sub_0804F61E(undefined4 param_1,undefined4 param_2)

{
  sub_0800F954(param_2);
  return;
}


/* sub_0804F620 @ 0x0804F620 */

void sub_0804F620(undefined4 param_1,undefined4 param_2)

{
  sub_0800F954(param_2);
  return;
}


/* sub_0804F62A @ 0x0804F62A */

void sub_0804F62A(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  return;
}


/* sub_0804F62C @ 0x0804F62C */

void sub_0804F62C(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  return;
}


/* sub_0804F636 @ 0x0804F636 */

void sub_0804F636(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_1 + 8);
  return;
}


/* sub_0804F638 @ 0x0804F638 */

void sub_0804F638(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_1 + 8);
  return;
}


/* sub_0804F648 @ 0x0804F648 */

void sub_0804F648(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F650 @ 0x0804F650 */

void sub_0804F650(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 1;
  return;
}


/* sub_0804F65A @ 0x0804F65A */

void sub_0804F65A(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  return;
}


/* sub_0804F65C @ 0x0804F65C */

void sub_0804F65C(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  return;
}


/* sub_0804F666 @ 0x0804F666 */

void sub_0804F666(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  return;
}


/* sub_0804F668 @ 0x0804F668 */

void sub_0804F668(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  return;
}


/* sub_0804F672 @ 0x0804F672 */

undefined4 sub_0804F672(undefined4 param_1)

{
  return param_1;
}


/* sub_0804F674 @ 0x0804F674 */

void sub_0804F674(void)

{
  return;
}


/* sub_0804F676 @ 0x0804F676 */

void sub_0804F676(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F678 @ 0x0804F678 */

void sub_0804F678(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F680 @ 0x0804F680 */

void sub_0804F680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + iVar1,iVar2,param_4);
  return;
}


/* sub_0804F690 @ 0x0804F690 */

void sub_0804F690(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 1;
  return;
}


/* sub_0804F69A @ 0x0804F69A */

void sub_0804F69A(undefined4 param_1)

{
  DAT_03002fe4 = 0;
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F69C @ 0x0804F69C */

void sub_0804F69C(void)

{
  DAT_03002fe4 = 0;
  sub_0803D63C();
  return;
}


/* sub_0804F6B0 @ 0x0804F6B0 */

void sub_0804F6B0(undefined4 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 8) = 0x38;
  sub_0803D63C();
  return;
}


/* sub_0804F6BC @ 0x0804F6BC */

void sub_0804F6BC(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F6C4 @ 0x0804F6C4 */

void sub_0804F6C4(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F6CC @ 0x0804F6CC */

void sub_0804F6CC(undefined4 param_1,int *param_2)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  param_2[0x73] = 1;
  return;
}


/* sub_0804F6DA @ 0x0804F6DA */

void sub_0804F6DA(void)

{
  int unaff_r4;
  
  __call_via_r2();
  *(undefined4 *)(unaff_r4 + 0x1cc) = 1;
  return;
}


/* sub_0804F6E8 @ 0x0804F6E8 */

void sub_0804F6E8(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F6F0 @ 0x0804F6F0 */

void sub_0804F6F0(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F6F8 @ 0x0804F6F8 */

void sub_0804F6F8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + iVar1,iVar2,param_4);
  return;
}


/* sub_0804F708 @ 0x0804F708 */

void sub_0804F708(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F710 @ 0x0804F710 */

void sub_0804F710(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  sub_0803D63C();
  return;
}


/* sub_0804F720 @ 0x0804F720 */

void sub_0804F720(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 1;
  sub_0803D63C();
  return;
}


/* sub_0804F730 @ 0x0804F730 */

void sub_0804F730(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_08037106();
  }
  *(short *)(param_2 + 0x12) = (short)(**(int **)(param_2 + 0x50) << 3);
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F750 @ 0x0804F750 */

void sub_0804F750(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  return;
}


/* sub_0804F75A @ 0x0804F75A */

void sub_0804F75A(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F75C @ 0x0804F75C */

void sub_0804F75C(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F764 @ 0x0804F764 */

void sub_0804F764(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    sub_08037106();
  }
  *(short *)(param_2 + 0x12) = (short)(**(int **)(param_2 + 0x50) << 3);
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F784 @ 0x0804F784 */

void sub_0804F784(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  return;
}


/* sub_0804F78E @ 0x0804F78E */

void sub_0804F78E(undefined4 param_1)

{
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F790 @ 0x0804F790 */

void sub_0804F790(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F798 @ 0x0804F798 */

void sub_0804F798(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F7A0 @ 0x0804F7A0 */

void sub_0804F7A0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 1;
  sub_0803D63C();
  return;
}


/* sub_0804F7B0 @ 0x0804F7B0 */

void sub_0804F7B0(void)

{
  sub_0803D63C();
  return;
}


/* sub_0804F7B8 @ 0x0804F7B8 */

void sub_0804F7B8(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1cc) = 1;
  return;
}


/* sub_0804F7C2 @ 0x0804F7C2 */

void sub_0804F7C2(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  return;
}


/* sub_0804F7C4 @ 0x0804F7C4 */

void sub_0804F7C4(undefined4 param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x176) = 0;
  return;
}


/* sub_0804F7CE @ 0x0804F7CE */

void sub_0804F7CE(undefined4 param_1)

{
  sub_0801C552();
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F7D0 @ 0x0804F7D0 */

void sub_0804F7D0(undefined4 param_1)

{
  sub_0801C552();
  sub_0803D63C(param_1);
  return;
}


/* sub_0804F7E0 @ 0x0804F7E0 */

void sub_0804F7E0(void)

{
  return;
}


/* sub_0804F7E2 @ 0x0804F7E2 */

void sub_0804F7E2(int param_1)

{
  undefined4 uVar1;
  int iStack_14;
  int iStack_10;
  
  iStack_14 = sub_0803FACC(0x200);
  iStack_14 = iStack_14 + -0x100;
  iStack_10 = sub_0803FACC(0x200);
  iStack_10 = iStack_10 + -0x100;
  uVar1 = sub_0800D30E(0,-*(int *)(param_1 + 0x10),param_1 + 8,&iStack_14);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_0804F7E4 @ 0x0804F7E4 */

void sub_0804F7E4(int param_1)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  
  local_14 = sub_0803FACC(0x200);
  local_14 = local_14 + -0x100;
  local_10 = sub_0803FACC(0x200);
  local_10 = local_10 + -0x100;
  uVar1 = sub_0800D30E(0,-*(int *)(param_1 + 0x10),param_1 + 8,&local_14);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}


/* sub_0804F82C @ 0x0804F82C */

void sub_0804F82C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_080043D8(&DAT_03001068,*(undefined4 *)(param_1 + 8),param_3,param_4,param_4);
  return;
}


/* sub_0804F840 @ 0x0804F840 */

undefined1 * sub_0804F840(void)

{
  return &DAT_03001560 + (uint)DAT_03001068 * 0x68;
}


/* sub_0804F858 @ 0x0804F858 */

int sub_0804F858(int param_1)

{
  return param_1 + 0x240;
}


/* sub_0804F860 @ 0x0804F860 */

undefined4 sub_0804F860(int param_1)

{
  return *(undefined4 *)(param_1 + 0x228);
}


/* sub_0804F86A @ 0x0804F86A */

undefined * sub_0804F86A(void)

{
  return &gUnknown_080555A0;
}


/* sub_0804F86C @ 0x0804F86C */

undefined * sub_0804F86C(void)

{
  return &gUnknown_080555A0;
}


/* sub_0804F874 @ 0x0804F874 */

void sub_0804F874(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  __16__rt_sdiv(*(undefined4 *)(*(int *)(param_1 + 0x224) + 4),
                (*(int *)(param_1 + 0x28c) >> 10) * param_2,0x200,param_4,param_4);
  return;
}


/* sub_0804F892 @ 0x0804F892 */

undefined4 sub_0804F892(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


/* sub_0804F894 @ 0x0804F894 */

undefined4 sub_0804F894(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


/* sub_0804F898 @ 0x0804F898 */

undefined8 sub_0804F898(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x80) + *param_1);
  software_interrupt(6);
  return CONCAT44((int)*(short *)(iVar1 + 0x18),param_2 * *(short *)(iVar1 + 0x16));
}


/* sub_0804F8B4 @ 0x0804F8B4 */

void sub_0804F8B4(void)

{
  software_interrupt(6);
  return;
}


/* sub_0804F8B8 @ 0x0804F8B8 */

undefined4 sub_0804F8B8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x224) + 4);
}


/* sub_0804F8C4 @ 0x0804F8C4 */

undefined4 sub_0804F8C4(void)

{
  return 0;
}


/* sub_0804F8C8 @ 0x0804F8C8 */

undefined * sub_0804F8C8(void)

{
  return &DAT_03003300;
}


/* sub_0804F8D4 @ 0x0804F8D4 */

undefined * sub_0804F8D4(void)

{
  return &DAT_03002c18;
}


/* sub_0804F8E0 @ 0x0804F8E0 */

undefined * sub_0804F8E0(void)

{
  return &DAT_03002dac;
}


/* sub_0804F8EC @ 0x0804F8EC */

void sub_0804F8EC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 8);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_0804F8F4 @ 0x0804F8F4 */

void sub_0804F8F4(void)

{
  __call_via_r2();
  return;
}


/* sub_0804F8FA @ 0x0804F8FA */

undefined4 sub_0804F8FA(void)

{
  return 0;
}


/* sub_0804F8FC @ 0x0804F8FC */

undefined4 sub_0804F8FC(void)

{
  return 0;
}


/* sub_0804F900 @ 0x0804F900 */

void sub_0804F900(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[2];
  param_1[1] = param_2[1] + param_2[3] >> 1;
  *param_1 = iVar1 + iVar2 >> 1;
  return;
}


/* sub_0804F92C @ 0x0804F92C */

undefined4 sub_0804F92C(void)

{
  return 0;
}


/* sub_0804F930 @ 0x0804F930 */

undefined4 sub_0804F930(void)

{
  return 4;
}


/* sub_0804F934 @ 0x0804F934 */

undefined4 sub_0804F934(void)

{
  return 0;
}


/* sub_0804F938 @ 0x0804F938 */

undefined4 sub_0804F938(void)

{
  return 4;
}


/* sub_0804F93C @ 0x0804F93C */

undefined4 sub_0804F93C(void)

{
  return 4;
}


/* sub_0804F940 @ 0x0804F940 */

undefined4 sub_0804F940(void)

{
  return 0xff;
}


/* sub_0804F944 @ 0x0804F944 */

void sub_0804F944(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x1a4);
  *param_1 = *(int *)(param_2 + 0x1a0) >> 8;
  param_1[1] = iVar1 >> 8;
  return;
}


/* sub_0804F964 @ 0x0804F964 */

undefined4 sub_0804F964(void)

{
  return 0;
}


/* sub_0804F968 @ 0x0804F968 */

bool sub_0804F968(int param_1)

{
  return *(int *)(param_1 + 300) != 0;
}


/* sub_0804F97A @ 0x0804F97A */

undefined1 sub_0804F97A(int param_1)

{
  return *(undefined1 *)(param_1 + 0x12f);
}


/* sub_0804F97C @ 0x0804F97C */

undefined1 sub_0804F97C(int param_1)

{
  return *(undefined1 *)(param_1 + 0x12f);
}


/* sub_0804F984 @ 0x0804F984 */

undefined4 sub_0804F984(int param_1)

{
  if ((DAT_03002f54 == 1) && (*(int *)(param_1 + 300) == 1)) {
    return 1;
  }
  return 0;
}


/* sub_0804F9A0 @ 0x0804F9A0 */

undefined4 sub_0804F9A0(void)

{
  return 0;
}


/* sub_0804F9A4 @ 0x0804F9A4 */

int sub_0804F9A4(int *param_1,uint param_2)

{
  if (0xfe < param_2) {
    return param_1[1] + 1;
  }
  return *(ushort *)(*param_1 + (uint)*(ushort *)(*param_1 + param_2 * 2) * 2) + 1;
}


/* sub_0804F9BC @ 0x0804F9BC */

undefined4 sub_0804F9BC(void)

{
  return 0;
}


/* sub_0804F9C0 @ 0x0804F9C0 */

undefined4 sub_0804F9C0(void)

{
  return 0;
}


/* sub_0804F9C4 @ 0x0804F9C4 */

undefined4 sub_0804F9C4(void)

{
  return 1;
}


/* sub_0804F9C8 @ 0x0804F9C8 */

undefined4 sub_0804F9C8(void)

{
  return 1;
}


/* sub_0804F9CC @ 0x0804F9CC */

undefined4 sub_0804F9CC(void)

{
  return 1;
}


/* sub_0804F9D0 @ 0x0804F9D0 */

undefined4 sub_0804F9D0(void)

{
  return 0;
}


/* sub_0804F9D4 @ 0x0804F9D4 */

undefined4 sub_0804F9D4(void)

{
  return 0;
}


/* sub_0804F9D8 @ 0x0804F9D8 */

bool sub_0804F9D8(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}


/* sub_0804F9E6 @ 0x0804F9E6 */

bool sub_0804F9E6(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}


/* sub_0804F9E8 @ 0x0804F9E8 */

bool sub_0804F9E8(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}


/* sub_0804F9F6 @ 0x0804F9F6 */

bool sub_0804F9F6(int param_1)

{
  return *(int *)(param_1 + 4) == 0;
}


/* sub_0804F9F8 @ 0x0804F9F8 */

bool sub_0804F9F8(int param_1)

{
  return *(int *)(param_1 + 4) == 0;
}


/* sub_0804FA02 @ 0x0804FA02 */

undefined4 sub_0804FA02(void)

{
  return 0;
}


/* sub_0804FA06 @ 0x0804FA06 */

undefined4 sub_0804FA06(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 0x10) == '\0')) {
    return 1;
  }
  return 0;
}


/* sub_0804FA08 @ 0x0804FA08 */

undefined4 sub_0804FA08(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 0x10) == '\0')) {
    return 1;
  }
  return 0;
}


/* sub_0804FA1C @ 0x0804FA1C */

undefined4 sub_0804FA1C(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 0x10) == '\0')) {
    return 1;
  }
  return 0;
}


/* sub_0804FA30 @ 0x0804FA30 */

undefined4 sub_0804FA30(int param_1,int param_2)

{
  if ((*(char *)(param_1 + 4) == '\0') && (0xf < *(ushort *)(param_2 + 0x12))) {
    return 0;
  }
  return 1;
}


/* sub_0804FA44 @ 0x0804FA44 */

undefined4 sub_0804FA44(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 0x10) == '\0')) {
    return 1;
  }
  return 0;
}


/* sub_0804FA58 @ 0x0804FA58 */

bool sub_0804FA58(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}


/* sub_0804FA66 @ 0x0804FA66 */

undefined4 sub_0804FA66(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 0x10) == '\0')) {
    return 1;
  }
  return 0;
}


/* sub_0804FA68 @ 0x0804FA68 */

undefined4 sub_0804FA68(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 0x10) == '\0')) {
    return 1;
  }
  return 0;
}


/* sub_0804FA7C @ 0x0804FA7C */

undefined4 sub_0804FA7C(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 0x10) == '\0')) {
    return 1;
  }
  return 0;
}


/* sub_0804FA90 @ 0x0804FA90 */

undefined4 sub_0804FA90(void)

{
  return 2;
}


/* sub_0804FA94 @ 0x0804FA94 */

undefined4 sub_0804FA94(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0xd;
  }
  return uVar1;
}


/* sub_0804FAAC @ 0x0804FAAC */

undefined4 sub_0804FAAC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}


/* sub_0804FAC4 @ 0x0804FAC4 */

undefined4 sub_0804FAC4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0xb;
  }
  return uVar1;
}


/* sub_0804FADC @ 0x0804FADC */

undefined4 sub_0804FADC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}


/* sub_0804FAF4 @ 0x0804FAF4 */

undefined4 sub_0804FAF4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


/* sub_0804FB0C @ 0x0804FB0C */

undefined4 sub_0804FB0C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}


/* sub_0804FB24 @ 0x0804FB24 */

undefined4 sub_0804FB24(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0xe;
  }
  return uVar1;
}


/* sub_0804FB3C @ 0x0804FB3C */

undefined4 sub_0804FB3C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 10;
  }
  return uVar1;
}


/* sub_0804FB54 @ 0x0804FB54 */

undefined4 sub_0804FB54(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0x11;
  }
  return uVar1;
}


/* sub_0804FB6C @ 0x0804FB6C */

undefined4 sub_0804FB6C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  iVar2 = __call_via_r2(param_1,param_2,iVar2 + *param_1,iVar2,param_4);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 6;
  }
  return uVar1;
}


/* sub_0804FB84 @ 0x0804FB84 */

undefined4 sub_0804FB84(void)

{
  return 0;
}


/* sub_0804FB88 @ 0x0804FB88 */

undefined4 sub_0804FB88(void)

{
  return 1;
}


/* sub_0804FB8C @ 0x0804FB8C */

undefined4 sub_0804FB8C(void)

{
  return 1;
}


/* sub_0804FB90 @ 0x0804FB90 */

undefined4 sub_0804FB90(void)

{
  return 0;
}


/* sub_0804FB94 @ 0x0804FB94 */

undefined4 sub_0804FB94(void)

{
  return 1;
}


/* sub_0804FB98 @ 0x0804FB98 */

void sub_0804FB98(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x1c);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_0804FBA6 @ 0x0804FBA6 */

undefined4 sub_0804FBA6(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


/* sub_0804FBA8 @ 0x0804FBA8 */

undefined4 sub_0804FBA8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


/* sub_0804FBAC @ 0x0804FBAC */

undefined4 sub_0804FBAC(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


/* sub_0804FBB0 @ 0x0804FBB0 */

bool sub_0804FBB0(int param_1)

{
  return *(int *)(param_1 + 0xc) == 0;
}


/* sub_0804FBBE @ 0x0804FBBE */

undefined4 sub_0804FBBE(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


/* sub_0804FBC0 @ 0x0804FBC0 */

undefined4 sub_0804FBC0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


/* sub_0804FBC4 @ 0x0804FBC4 */

undefined4 sub_0804FBC4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


/* sub_0804FBC8 @ 0x0804FBC8 */

undefined4 sub_0804FBC8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


/* sub_0804FBCC @ 0x0804FBCC */

undefined4 sub_0804FBCC(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


/* sub_0804FBD0 @ 0x0804FBD0 */

undefined4 sub_0804FBD0(void)

{
  return 0;
}


/* sub_0804FBD4 @ 0x0804FBD4 */

undefined4 sub_0804FBD4(void)

{
  return 1;
}


/* sub_0804FBD8 @ 0x0804FBD8 */

undefined4 sub_0804FBD8(void)

{
  return 1;
}


/* sub_0804FBDC @ 0x0804FBDC */

undefined4 sub_0804FBDC(void)

{
  return 1;
}


/* sub_0804FBE0 @ 0x0804FBE0 */

void sub_0804FBE0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  __call_via_r1(*(int **)(param_1 + 0xc),iVar2 + iVar1,iVar2,param_4,param_4);
  return;
}


/* sub_0804FBF0 @ 0x0804FBF0 */

undefined4 sub_0804FBF0(void)

{
  return 1;
}


/* sub_0804FBF2 @ 0x0804FBF2 */

void sub_0804FBF2(void)

{
  return;
}


/* sub_0804FBF4 @ 0x0804FBF4 */

undefined4 sub_0804FBF4(void)

{
  return 1;
}


/* sub_0804FBF8 @ 0x0804FBF8 */

undefined4 sub_0804FBF8(void)

{
  return 0;
}


/* sub_0804FBFC @ 0x0804FBFC */

undefined4 sub_0804FBFC(void)

{
  return DAT_03004a7c;
}


/* sub_0804FC08 @ 0x0804FC08 */

undefined4 sub_0804FC08(void)

{
  return 1;
}


/* sub_0804FC0C @ 0x0804FC0C */

undefined4 sub_0804FC0C(void)

{
  return 0;
}


/* sub_0804FC10 @ 0x0804FC10 */

undefined4 sub_0804FC10(void)

{
  return 1;
}


/* sub_0804FC14 @ 0x0804FC14 */

undefined4 sub_0804FC14(void)

{
  return 1;
}


/* sub_0804FC18 @ 0x0804FC18 */

undefined4 sub_0804FC18(void)

{
  return 1;
}


/* sub_0804FC1C @ 0x0804FC1C */

undefined4 sub_0804FC1C(void)

{
  return 0;
}


/* sub_0804FC20 @ 0x0804FC20 */

undefined4 sub_0804FC20(void)

{
  return 1;
}


/* sub_0804FC24 @ 0x0804FC24 */

undefined4 sub_0804FC24(void)

{
  return 0;
}


/* sub_0804FC28 @ 0x0804FC28 */

undefined4 sub_0804FC28(void)

{
  return 1;
}


/* sub_0804FC2C @ 0x0804FC2C */

undefined4 sub_0804FC2C(int param_1)

{
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x3c)) {
    return 1;
  }
  return 0;
}


/* sub_0804FC3C @ 0x0804FC3C */

undefined4 sub_0804FC3C(void)

{
  return 1;
}


/* sub_0804FC40 @ 0x0804FC40 */

undefined4 sub_0804FC40(void)

{
  return 1;
}


/* sub_0804FC44 @ 0x0804FC44 */

undefined4 sub_0804FC44(void)

{
  return 0;
}


/* sub_0804FC48 @ 0x0804FC48 */

undefined4 sub_0804FC48(void)

{
  return 0;
}


/* sub_0804FC4C @ 0x0804FC4C */

undefined4 sub_0804FC4C(void)

{
  return 0;
}


/* sub_0804FC50 @ 0x0804FC50 */

undefined4 sub_0804FC50(void)

{
  return 0;
}


/* sub_0804FC54 @ 0x0804FC54 */

undefined4 sub_0804FC54(void)

{
  return 1;
}


/* sub_0804FC58 @ 0x0804FC58 */

void sub_0804FC58(void)

{
  return;
}


/* sub_0804FC5A @ 0x0804FC5A */

void sub_0804FC5A(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0804FC5C @ 0x0804FC5C */

void sub_0804FC5C(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0804FC6E @ 0x0804FC6E */

void sub_0804FC6E(undefined4 param_1,int param_2)

{
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -8;
  return;
}


/* sub_0804FC70 @ 0x0804FC70 */

void sub_0804FC70(undefined4 param_1,int param_2)

{
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -8;
  return;
}


/* sub_0804FC78 @ 0x0804FC78 */

void sub_0804FC78(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  return;
}


/* sub_0804FC8A @ 0x0804FC8A */

void sub_0804FC8A(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804FC8C @ 0x0804FC8C */

void sub_0804FC8C(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}


/* sub_0804FCA8 @ 0x0804FCA8 */

void sub_0804FCA8(undefined4 param_1,int param_2)

{
  sub_0800DE94();
  *(undefined1 *)(param_2 + 8) = 0x37;
  return;
}


/* sub_0804FCB6 @ 0x0804FCB6 */

undefined4 sub_0804FCB6(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FCB8 @ 0x0804FCB8 */

void sub_0804FCB8(void)

{
  return;
}


/* sub_0804FCBA @ 0x0804FCBA */

undefined4 sub_0804FCBA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FCBC @ 0x0804FCBC */

void sub_0804FCBC(void)

{
  return;
}


/* sub_0804FCBE @ 0x0804FCBE */

undefined4 sub_0804FCBE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FCC0 @ 0x0804FCC0 */

void sub_0804FCC0(void)

{
  return;
}


/* sub_0804FCC2 @ 0x0804FCC2 */

undefined4 sub_0804FCC2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FCC4 @ 0x0804FCC4 */

void sub_0804FCC4(void)

{
  return;
}


/* sub_0804FCC6 @ 0x0804FCC6 */

undefined4 sub_0804FCC6(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FCC8 @ 0x0804FCC8 */

void sub_0804FCC8(void)

{
  return;
}


/* sub_0804FCCA @ 0x0804FCCA */

void sub_0804FCCA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  return;
}


/* sub_0804FCCC @ 0x0804FCCC */

void sub_0804FCCC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  return;
}


/* sub_0804FCDA @ 0x0804FCDA */

undefined4 sub_0804FCDA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FCDC @ 0x0804FCDC */

void sub_0804FCDC(void)

{
  return;
}


/* sub_0804FCDE @ 0x0804FCDE */

undefined4 sub_0804FCDE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FCE0 @ 0x0804FCE0 */

void sub_0804FCE0(void)

{
  return;
}


/* sub_0804FCE2 @ 0x0804FCE2 */

void sub_0804FCE2(undefined4 param_1,undefined4 *param_2)

{
  DAT_03002f48 = *param_2;
  return;
}


/* sub_0804FCE4 @ 0x0804FCE4 */

void sub_0804FCE4(undefined4 param_1,undefined4 *param_2)

{
  DAT_03002f48 = *param_2;
  return;
}


/* sub_0804FCF8 @ 0x0804FCF8 */

void sub_0804FCF8(void)

{
  return;
}


/* sub_0804FCFA @ 0x0804FCFA */

void sub_0804FCFA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_0804FCFC @ 0x0804FCFC */

void sub_0804FCFC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_0804FD0A @ 0x0804FD0A */

undefined4 sub_0804FD0A(void)

{
  return 0;
}


/* sub_0804FD0C @ 0x0804FD0C */

undefined4 sub_0804FD0C(void)

{
  return 0;
}


/* sub_0804FD10 @ 0x0804FD10 */

void sub_0804FD10(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = DAT_03002da8;
  return;
}


/* sub_0804FD24 @ 0x0804FD24 */

void sub_0804FD24(void)

{
  return;
}


/* sub_0804FD26 @ 0x0804FD26 */

void sub_0804FD26(undefined4 param_1,int param_2)

{
  int a2;
  
  a2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x1c) + *DAT_03004a8c);
  sub_08049168(param_2,0,a2);
  return;
}


/* sub_0804FD28 @ 0x0804FD28 */

void sub_0804FD28(undefined4 param_1,int param_2)

{
  int a2;
  
  a2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x1c) + *DAT_03004a8c);
  sub_08049168(param_2,0,a2);
  return;
}


/* sub_0804FD4C @ 0x0804FD4C */

void sub_0804FD4C(undefined4 param_1,int param_2)

{
  int a2;
  
  a2 = __call_via_r1(DAT_03004a8c,*(int *)(*DAT_03004a8c + 0x1c) + *DAT_03004a8c);
  sub_08049168(param_2,0,a2);
  return;
}


/* sub_0804FD70 @ 0x0804FD70 */

void sub_0804FD70(void)

{
  return;
}


/* sub_0804FD72 @ 0x0804FD72 */

void sub_0804FD72(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 4) = uVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  sub_0803D63C();
  iVar1 = **(int **)(param_2 + 0xc);
  __call_via_r3(*(int **)(param_2 + 0xc),param_2,param_3,*(int *)(iVar1 + 4) + iVar1,param_4);
  return;
}


/* sub_0804FD74 @ 0x0804FD74 */

void sub_0804FD74(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 4) = uVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  sub_0803D63C();
  iVar1 = **(int **)(param_2 + 0xc);
  __call_via_r3(*(int **)(param_2 + 0xc),param_2,param_3,*(int *)(iVar1 + 4) + iVar1,param_4);
  return;
}


/* sub_0804FDA0 @ 0x0804FDA0 */

void sub_0804FDA0(void)

{
  return;
}


/* sub_0804FDA2 @ 0x0804FDA2 */

uint sub_0804FDA2(void)

{
  return ((uint)DAT_03003304 << 0x1c) >> 0x1f;
}


/* sub_0804FDA4 @ 0x0804FDA4 */

uint sub_0804FDA4(void)

{
  return ((uint)DAT_03003304 << 0x1c) >> 0x1f;
}


/* sub_0804FDB4 @ 0x0804FDB4 */

undefined4 sub_0804FDB4(void)

{
  return 0;
}


/* sub_0804FDB8 @ 0x0804FDB8 */

void sub_0804FDB8(void)

{
  return;
}


/* sub_0804FDBA @ 0x0804FDBA */

undefined4 sub_0804FDBA(void)

{
  return 0;
}


/* sub_0804FDBC @ 0x0804FDBC */

undefined4 sub_0804FDBC(void)

{
  return 0;
}


/* sub_0804FDC0 @ 0x0804FDC0 */

undefined4 sub_0804FDC0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* sub_0804FDC4 @ 0x0804FDC4 */

undefined4 sub_0804FDC4(void)

{
  return 0;
}


/* sub_0804FDC8 @ 0x0804FDC8 */

void sub_0804FDC8(void)

{
  return;
}


/* sub_0804FDCA @ 0x0804FDCA */

undefined4 sub_0804FDCA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FDCC @ 0x0804FDCC */

void sub_0804FDCC(void)

{
  return;
}


/* sub_0804FDCE @ 0x0804FDCE */

undefined4 sub_0804FDCE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FDD0 @ 0x0804FDD0 */

void sub_0804FDD0(void)

{
  return;
}


/* sub_0804FDD2 @ 0x0804FDD2 */

undefined4 sub_0804FDD2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FDD4 @ 0x0804FDD4 */

void sub_0804FDD4(void)

{
  return;
}


/* sub_0804FDD6 @ 0x0804FDD6 */

undefined4 sub_0804FDD6(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FDD8 @ 0x0804FDD8 */

void sub_0804FDD8(void)

{
  return;
}


/* sub_0804FDDA @ 0x0804FDDA */

undefined4 sub_0804FDDA(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FDDC @ 0x0804FDDC */

void sub_0804FDDC(void)

{
  return;
}


/* sub_0804FDDE @ 0x0804FDDE */

undefined4 sub_0804FDDE(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FDE0 @ 0x0804FDE0 */

void sub_0804FDE0(void)

{
  return;
}


/* sub_0804FDE2 @ 0x0804FDE2 */

undefined4 sub_0804FDE2(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FDE4 @ 0x0804FDE4 */

void sub_0804FDE4(void)

{
  return;
}


/* sub_0804FDE6 @ 0x0804FDE6 */

void sub_0804FDE6(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0xc);
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2));
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  return;
}


/* sub_0804FDE8 @ 0x0804FDE8 */

void sub_0804FDE8(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0xc);
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2));
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  return;
}


/* sub_0804FE1C @ 0x0804FE1C */

void sub_0804FE1C(void)

{
  return;
}


/* sub_0804FE1E @ 0x0804FE1E */

void sub_0804FE1E(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(param_1 + 2) != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)*(short *)(param_1 + 2));
    param_1[2] = -1;
    param_1[3] = -1;
  }
  return;
}


/* sub_0804FE20 @ 0x0804FE20 */

void sub_0804FE20(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(param_1 + 2) != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)*(short *)(param_1 + 2));
    param_1[2] = -1;
    param_1[3] = -1;
  }
  return;
}


/* sub_0804FE54 @ 0x0804FE54 */

void sub_0804FE54(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = (iVar1 + -1) - param_2;
  if (iVar1 != 0) {
    sub_08049138((int)(param_1 + param_2 + 1),(int)(param_1 + param_2 + 2),iVar1 * 4);
  }
  return;
}


/* sub_0804FE72 @ 0x0804FE72 */

undefined4 sub_0804FE72(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FE74 @ 0x0804FE74 */

void sub_0804FE74(void)

{
  return;
}


/* sub_0804FE76 @ 0x0804FE76 */

undefined4 sub_0804FE76(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FE78 @ 0x0804FE78 */

void sub_0804FE78(void)

{
  return;
}


/* sub_0804FE7A @ 0x0804FE7A */

undefined4 sub_0804FE7A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FE7C @ 0x0804FE7C */

void sub_0804FE7C(void)

{
  return;
}


/* sub_0804FE7E @ 0x0804FE7E */

undefined4 sub_0804FE7E(void)

{
  return 0;
}


/* sub_0804FE80 @ 0x0804FE80 */

undefined4 sub_0804FE80(void)

{
  return 0;
}


/* sub_0804FE84 @ 0x0804FE84 */

undefined4 sub_0804FE84(void)

{
  return 1;
}


/* sub_0804FE88 @ 0x0804FE88 */

undefined4 sub_0804FE88(void)

{
  return 1;
}


/* sub_0804FE8C @ 0x0804FE8C */

undefined4 sub_0804FE8C(void)

{
  return 0;
}


/* sub_0804FE90 @ 0x0804FE90 */

undefined4 sub_0804FE90(void)

{
  return 1;
}


/* sub_0804FE94 @ 0x0804FE94 */

undefined4 sub_0804FE94(void)

{
  return 1;
}


/* sub_0804FE98 @ 0x0804FE98 */

void sub_0804FE98(void)

{
  return;
}


/* sub_0804FE9A @ 0x0804FE9A */

undefined4 sub_0804FE9A(undefined4 param_1)

{
  return param_1;
}


/* sub_0804FE9C @ 0x0804FE9C */

void sub_0804FE9C(void)

{
  return;
}


/* sub_0804FE9E @ 0x0804FE9E */

undefined4 sub_0804FE9E(void)

{
  return 0;
}


/* sub_0804FEA0 @ 0x0804FEA0 */

undefined4 sub_0804FEA0(void)

{
  return 0;
}


/* sub_0804FEA4 @ 0x0804FEA4 */

undefined4 sub_0804FEA4(void)

{
  return 1;
}


/* sub_0804FEA8 @ 0x0804FEA8 */

undefined4 sub_0804FEA8(void)

{
  return 1;
}


/* sub_0804FEAC @ 0x0804FEAC */

void sub_0804FEAC(void)

{
  return;
}


/* sub_0804FEAE @ 0x0804FEAE */

undefined4 sub_0804FEAE(void)

{
  return 1;
}


/* sub_0804FEB0 @ 0x0804FEB0 */

undefined4 sub_0804FEB0(void)

{
  return 1;
}


/* sub_0804FEB4 @ 0x0804FEB4 */

undefined4 sub_0804FEB4(void)

{
  return 0;
}


/* sub_0804FEB8 @ 0x0804FEB8 */

undefined4 sub_0804FEB8(void)

{
  return 1;
}


/* sub_0804FEBC @ 0x0804FEBC */

void sub_0804FEBC(void)

{
  return;
}


/* sub_0804FEBE @ 0x0804FEBE */

undefined4 sub_0804FEBE(void)

{
  return 1;
}


/* sub_0804FEC0 @ 0x0804FEC0 */

undefined4 sub_0804FEC0(void)

{
  return 1;
}


/* sub_0804FEC4 @ 0x0804FEC4 */

bool sub_0804FEC4(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03001b30;
}


/* sub_0804FEDC @ 0x0804FEDC */

bool sub_0804FEDC(undefined4 param_1,int param_2)

{
  return *(int *)(*(int *)(param_2 + 0x58) + 0xa0) != *(int *)(param_2 + 0x50);
}


/* sub_0804FEF4 @ 0x0804FEF4 */

bool sub_0804FEF4(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03001b30;
}


/* sub_0804FEF8 @ 0x0804FEF8 */

int sub_0804FEF8(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_2 != &DAT_03001b30) {
    iVar1 = 0;
  }
  return param_3 - iVar1;
}


/* sub_0804FF0C @ 0x0804FF0C */

bool sub_0804FF0C(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003158;
}


/* sub_0804FF24 @ 0x0804FF24 */

bool sub_0804FF24(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_030030ec;
}


/* sub_0804FF3C @ 0x0804FF3C */

undefined4 sub_0804FF3C(void)

{
  return 0;
}


/* sub_0804FF40 @ 0x0804FF40 */

undefined4 sub_0804FF40(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2,param_4,param_4);
  if (iVar1 != 0) {
    __call_via_r2(param_1,param_2,*(int *)*param_1 + *param_1);
  }
  return 0;
}


/* sub_0804FF58 @ 0x0804FF58 */

undefined4 sub_0804FF58(void)

{
  undefined4 unaff_r4;
  int *unaff_r5;
  
  __call_via_r2(unaff_r5,unaff_r4,*(int *)*unaff_r5 + *unaff_r5);
  return 0;
}


/* sub_0804FF6A @ 0x0804FF6A */

undefined4 sub_0804FF6A(void)

{
  return 1;
}


/* sub_0804FF6C @ 0x0804FF6C */

undefined4 sub_0804FF6C(void)

{
  return 1;
}


/* sub_0804FF70 @ 0x0804FF70 */

undefined4 sub_0804FF70(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1e8) = DAT_03000f94;
  return 1;
}


/* sub_0804FF84 @ 0x0804FF84 */

void sub_0804FF84(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x18);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  return;
}


/* sub_0804FF92 @ 0x0804FF92 */

bool sub_0804FF92(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_0300314c;
}


/* sub_0804FF94 @ 0x0804FF94 */

bool sub_0804FF94(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_0300314c;
}


/* sub_0804FFAC @ 0x0804FFAC */

undefined4 sub_0804FFAC(void)

{
  return 1;
}


/* sub_0804FFB0 @ 0x0804FFB0 */

bool sub_0804FFB0(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03001b30;
}


/* sub_0804FFC8 @ 0x0804FFC8 */

undefined4 sub_0804FFC8(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1ec) = DAT_03000f94;
  return 1;
}


/* sub_0804FFDC @ 0x0804FFDC */

void sub_0804FFDC(void)

{
  return;
}


/* sub_0804FFDE @ 0x0804FFDE */

void sub_0804FFDE(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x18);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_0804FFE0 @ 0x0804FFE0 */

void sub_0804FFE0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x18);
  __call_via_r2(param_1,param_2,iVar1 + *param_1,iVar1,param_4);
  return;
}


/* sub_0804FFEE @ 0x0804FFEE */

undefined4 sub_0804FFEE(void)

{
  return 1;
}


/* sub_0804FFF0 @ 0x0804FFF0 */

undefined4 sub_0804FFF0(void)

{
  return 1;
}


/* sub_0804FFF4 @ 0x0804FFF4 */

undefined4 sub_0804FFF4(void)

{
  return 1;
}


/* sub_0804FFF8 @ 0x0804FFF8 */

bool sub_0804FFF8(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003264;
}


/* sub_0804FFFA @ 0x0804FFFA */

int sub_0804FFFA(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (*(undefined4 **)(param_2 + 0x14) != &DAT_03003264) {
    iVar1 = 0;
  }
  return param_3 - iVar1;
}


/* sub_08050010 @ 0x08050010 */

bool sub_08050010(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003128;
}


/* sub_08050028 @ 0x08050028 */

undefined4 sub_08050028(void)

{
  return 1;
}


/* sub_0805002C @ 0x0805002C */

undefined4 sub_0805002C(void)

{
  return 1;
}


/* sub_08050030 @ 0x08050030 */

undefined4 sub_08050030(void)

{
  return 1;
}


/* sub_08050034 @ 0x08050034 */

bool sub_08050034(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003214;
}


/* sub_0805004C @ 0x0805004C */

bool sub_0805004C(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) == &DAT_03001b30;
}


/* sub_08050060 @ 0x08050060 */

bool sub_08050060(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_030032a0;
}


/* sub_08050078 @ 0x08050078 */

void sub_08050078(undefined4 param_1,undefined4 param_2)

{
  sub_0800EE9E(param_2);
  return;
}


/* sub_08050082 @ 0x08050082 */

undefined4 sub_08050082(void)

{
  return 1;
}


/* sub_08050084 @ 0x08050084 */

undefined4 sub_08050084(void)

{
  return 1;
}


/* sub_08050088 @ 0x08050088 */

undefined4 sub_08050088(undefined4 param_1,int param_2)

{
  if ((*(int *)(*(int *)(param_2 + 0x58) + 0xa0) == *(int *)(param_2 + 0x50)) &&
     (*(ushort *)(param_2 + 0x12) < 0xf8)) {
    return 0;
  }
  return 1;
}


/* sub_080500A2 @ 0x080500A2 */

bool sub_080500A2(undefined4 param_1,int param_2)

{
  return 8 < *(ushort *)(param_2 + 0x12);
}


/* sub_080500A4 @ 0x080500A4 */

bool sub_080500A4(undefined4 param_1,int param_2)

{
  return 8 < *(ushort *)(param_2 + 0x12);
}


/* sub_080500B0 @ 0x080500B0 */

undefined4 sub_080500B0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = sub_0800EEB0(param_2,0x11);
  if ((iVar1 == 0) && (iVar1 = sub_0800EEB0(param_2,0x13), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* sub_080500D4 @ 0x080500D4 */

undefined4 sub_080500D4(void)

{
  return 1;
}


/* sub_080500D8 @ 0x080500D8 */

undefined4 sub_080500D8(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(param_1 + 4);
  return 1;
}


/* sub_080500E4 @ 0x080500E4 */

void sub_080500E4(void)

{
  return;
}


/* sub_080500E6 @ 0x080500E6 */

void sub_080500E6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 4);
  __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + iVar1,iVar2,param_4);
  return;
}


/* sub_080500E8 @ 0x080500E8 */

void sub_080500E8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 4);
  __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + iVar1,iVar2,param_4);
  return;
}


/* sub_080500F6 @ 0x080500F6 */

void sub_080500F6(void)

{
  return;
}


/* sub_080500F8 @ 0x080500F8 */

bool sub_080500F8(undefined4 param_1,int param_2)

{
  return *(char *)(param_2 + 0x11) == '\x03';
}


/* sub_080500FA @ 0x080500FA */

bool sub_080500FA(undefined4 param_1,int param_2)

{
  return param_2 == 3;
}


/* sub_08050104 @ 0x08050104 */

bool sub_08050104(undefined4 param_1,int param_2)

{
  return *(char *)(param_2 + 0x11) == '\x03';
}


/* sub_08050110 @ 0x08050110 */

bool sub_08050110(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03001b38;
}


/* sub_08050128 @ 0x08050128 */

undefined4 sub_08050128(void)

{
  return 1;
}


/* sub_0805012C @ 0x0805012C */

void sub_0805012C(void)

{
  return;
}


/* sub_0805012E @ 0x0805012E */

bool sub_0805012E(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003120;
}


/* sub_08050130 @ 0x08050130 */

bool sub_08050130(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003120;
}


/* sub_08050148 @ 0x08050148 */

undefined4 sub_08050148(void)

{
  return 1;
}


/* sub_0805014C @ 0x0805014C */

bool sub_0805014C(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03001b38;
}


/* sub_08050164 @ 0x08050164 */

bool sub_08050164(undefined4 param_1,int param_2)

{
  return *(int *)(param_2 + 0x204) != 0;
}


/* sub_08050174 @ 0x08050174 */

undefined4 sub_08050174(void)

{
  return 1;
}


/* sub_08050178 @ 0x08050178 */

void sub_08050178(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 4);
  __call_via_r2(*(int **)(param_1 + 4),param_2,iVar2 + iVar1,iVar2,param_4);
  return;
}


/* sub_08050188 @ 0x08050188 */

bool sub_08050188(undefined4 param_1,int param_2)

{
  return *(undefined4 **)(param_2 + 0x14) != &DAT_03003130;
}


/* sub_080501A0 @ 0x080501A0 */

undefined4 sub_080501A0(undefined4 param_1,int param_2)

{
  *(int *)(param_2 + 0x1e4) = *(int *)(param_2 + 0x1e4) + 1;
  return 1;
}


/* sub_080501B0 @ 0x080501B0 */

undefined4 sub_080501B0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = sub_0800EEB0(param_2,0x11);
  if ((iVar1 == 0) && (iVar1 = sub_0800EEB0(param_2,0x13), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* sub_080501D4 @ 0x080501D4 */

void sub_080501D4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_080387DC(param_1,1,param_3,param_4,param_4);
  return;
}


/* sub_080501DE @ 0x080501DE */

undefined4 sub_080501DE(undefined4 param_1)

{
  return param_1;
}


/* sub_080501E0 @ 0x080501E0 */

void sub_080501E0(void)

{
  return;
}


/* sub_080501E2 @ 0x080501E2 */

void sub_080501E2(undefined4 param_1)

{
  sub_08040F02(param_1);
  DAT_03004a80 = DAT_03004a80 + 1;
  return;
}


/* sub_080501E4 @ 0x080501E4 */

void sub_080501E4(void)

{
  sub_08040F02();
  DAT_03004a80 = DAT_03004a80 + 1;
  return;
}


/* sub_080501F8 @ 0x080501F8 */

void sub_080501F8(void)

{
  return;
}


/* sub_080501FA @ 0x080501FA */

void sub_080501FA(undefined4 param_1)

{
  sub_08042D84(param_1);
  DAT_03004a80 = DAT_03004a80 + 1;
  return;
}


/* sub_080501FC @ 0x080501FC */

void sub_080501FC(void)

{
  sub_08042D84();
  DAT_03004a80 = DAT_03004a80 + 1;
  return;
}


/* sub_08050208 @ 0x08050208 */

void sub_08050208(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}


/* sub_08050210 @ 0x08050210 */

bool sub_08050210(void)

{
  return DAT_03004a6c < 2;
}


/* sub_08050224 @ 0x08050224 */

undefined4 sub_08050224(void)

{
  return 0;
}


/* sub_08050228 @ 0x08050228 */

undefined4 sub_08050228(void)

{
  return 1;
}


/* sub_0805022C @ 0x0805022C */

undefined4 sub_0805022C(void)

{
  return 0;
}


/* sub_08050230 @ 0x08050230 */

undefined4 sub_08050230(void)

{
  return 1;
}


/* sub_08050234 @ 0x08050234 */

undefined4 sub_08050234(void)

{
  return 1;
}


/* sub_08050238 @ 0x08050238 */

undefined4 sub_08050238(void)

{
  return 0;
}


/* sub_0805023C @ 0x0805023C */

int sub_0805023C(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08046DD0(param_1,param_2,0x56,param_4,param_4);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_2 + 0x56);
  *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)(param_2 + 0x57);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_2 + 0x5a);
  *(undefined2 *)(param_1 + 0x5c) = *(undefined2 *)(param_2 + 0x5c);
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_2 + 0x5e);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_2 + 0x62);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_2 + 100);
  *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_2 + 0x66);
  return param_1;
}


/* sub_080502A0 @ 0x080502A0 */

void sub_080502A0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}


/* sub_080502AA @ 0x080502AA */

void sub_080502AA(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


/* sub_080502AC @ 0x080502AC */

void sub_080502AC(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


/* sub_080502BA @ 0x080502BA */

int sub_080502BA(int param_1,int param_2)

{
  undefined4 uVar1;
  
  sub_08046DD0(param_1,param_2,0x4f8);
  sub_08047018(param_1 + 0x4f8,param_2 + 0x4f8,param_2 + 0x8a0,0x68,0x805023d);
  uVar1 = *(undefined4 *)(param_2 + 0x8a0);
  *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_2 + 0x8a4);
  *(undefined4 *)(param_1 + 0x8a0) = uVar1;
  return param_1;
}


/* sub_080502BC @ 0x080502BC */

int sub_080502BC(int param_1,int param_2)

{
  undefined4 uVar1;
  
  sub_08046DD0(param_1,param_2,0x4f8);
  sub_08047018(param_1 + 0x4f8,param_2 + 0x4f8,param_2 + 0x8a0,0x68,0x805023d);
  uVar1 = *(undefined4 *)(param_2 + 0x8a0);
  *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_2 + 0x8a4);
  *(undefined4 *)(param_1 + 0x8a0) = uVar1;
  return param_1;
}


/* sub_080502FC @ 0x080502FC */

undefined4 * sub_080502FC(undefined4 *param_1,undefined1 param_2)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(300), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492EC;
  *(undefined1 *)(param_1 + 0x45) = param_2;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  sub_0804912C((int)(param_1 + 0x21),-1,0x80);
  sub_0804912C((int)(param_1 + 0x41),0,0x10);
  param_1[0x49] = 0xffff;
  DAT_03002f50 = 0;
  DAT_03002f54 = 0;
  return param_1;
}


/* sub_080502FE @ 0x080502FE */

undefined4 * sub_080502FE(undefined4 *param_1,undefined1 param_2)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(300), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492EC;
  *(undefined1 *)(param_1 + 0x45) = param_2;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  sub_0804912C((int)(param_1 + 0x21),-1,0x80);
  sub_0804912C((int)(param_1 + 0x41),0,0x10);
  param_1[0x49] = 0xffff;
  DAT_03002f50 = 0;
  DAT_03002f54 = 0;
  return param_1;
}


/* sub_08050300 @ 0x08050300 */

undefined4 * sub_08050300(undefined4 *param_1)

{
  undefined1 unaff_r5;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(300), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492EC;
  *(undefined1 *)(param_1 + 0x45) = unaff_r5;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  sub_0804912C((int)(param_1 + 0x21),-1,0x80);
  sub_0804912C((int)(param_1 + 0x41),0,0x10);
  param_1[0x49] = 0xffff;
  DAT_03002f50 = 0;
  DAT_03002f54 = 0;
  return param_1;
}


/* sub_08050364 @ 0x08050364 */

int sub_08050364(int param_1)

{
  if ((param_1 == 0) && (param_1 = sub_0803D5B8(0x68), param_1 == 0)) {
    return 0;
  }
  sub_08046FF4(param_1 + 0x2e,param_1 + 0x3a,2,0x8050869);
  sub_08046FF4(param_1 + 0x3c,param_1 + 0x4c,4,0x8050535);
  return param_1;
}


/* sub_080503A4 @ 0x080503A4 */

undefined4 * sub_080503A4(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(300), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492EC;
  *(undefined1 *)(param_1 + 0x45) = 4;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  sub_0804912C((int)(param_1 + 0x21),-1,0x80);
  sub_0804912C((int)(param_1 + 0x41),0,0x10);
  param_1[0x49] = 0xffff;
  DAT_03002f50 = 0;
  DAT_03002f54 = 0;
  *param_1 = &_080497F4;
  return param_1;
}


/* sub_08050414 @ 0x08050414 */

undefined4 * sub_08050414(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x130), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_080492EC;
  *(undefined1 *)(param_1 + 0x45) = 3;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  sub_0804912C((int)(param_1 + 0x21),-1,0x80);
  sub_0804912C((int)(param_1 + 0x41),0,0x10);
  param_1[0x49] = 0xffff;
  DAT_03002f50 = 0;
  DAT_03002f54 = 0;
  *param_1 = &_08049814;
  param_1[0x4b] = 0;
  return param_1;
}


/* sub_08050484 @ 0x08050484 */

void sub_08050484(int *param_1,int param_2)

{
  if ((param_1 != (int *)0x0) || (param_1 = (int *)sub_0803D5B8(4), param_1 != (int *)0x0)) {
    *param_1 = param_2 << 8;
  }
  return;
}


