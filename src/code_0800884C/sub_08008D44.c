/* sub_08008D44  (original: 0x08008D44-0x08008E70 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0800C0C8();
extern int sub_08021094();
extern int Area_Lookup();
extern int sub_08008B30();
extern int sub_08008A36();
extern int sub_080109AA();
extern int sub_0800BF34();
extern int sub_0801713C();
extern int sub_0800B854();
extern int sub_080104F2();
extern int sub_0803D5B8();
extern int sub_0801191A();
extern undefined volatile _0804E324;
extern byte volatile DAT_03001068;
extern int volatile DAT_03001a34;
extern byte volatile DAT_03001069;
extern undefined1 volatile DAT_03001574;
extern undefined volatile _0804D300;
extern undefined volatile gUnknown_086B82EC;
extern undefined volatile DAT_03001a24;
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03002bd8;


undefined4
sub_08008D44(undefined1 *param_1,undefined1 param_2,undefined1 param_3,short *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(int *)((char *)__frame + 0x0))
#define local_1c (*(int *)((char *)__frame + 0x4))
#define local_18 (*(undefined * *)((char *)__frame + 0x8))
  local_20 = *param_4 + -0x70;
  local_1c = param_4[1] + -0x4c;
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = Area_Lookup();
  sub_08008B30(param_1,uVar1,&local_20,param_5,param_6);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  uVar1 = sub_0801713C(&gUnknown_086B82EC +
                       (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
  local_18 = &DAT_03001a24;
  if (DAT_03001a34 == 0) {
    uVar1 = sub_080109AA(0,uVar1,param_4,1);
    puVar2 = (undefined4 *)sub_0803D5B8(8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804D300;
      puVar2[1] = uVar1;
    }
    sub_08021094(&DAT_03002bd8,puVar2);
    sub_0801191A(&DAT_03001c4c,uVar1);
    if ((int)((uint)DAT_03001069 << 0x1e) < 0) {
      uVar4 = sub_0800B854(0);
      sub_0801191A(&DAT_03001c4c,uVar4);
    }
  }
  else {
    uVar1 = sub_080104F2(0,uVar1,param_4);
    puVar2 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804E324;
      puVar2[1] = uVar1;
      puVar2[2] = 0xffffffff;
    }
    sub_08021094(&DAT_03002bd8,puVar2);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  uVar3 = sub_08008A36(*(undefined4 *)(param_1 + 4));
  if (*(int *)(local_18 + 0x10) == 0) {
    if ((*(ushort *)(param_1 + 8) != uVar3) && (*(short *)(param_1 + 8) = (short)uVar3, uVar3 != 0))
    {
      uVar4 = sub_0800BF34(0,uVar3);
      sub_0801191A(&DAT_03001c4c,uVar4);
    }
  }
  else {
    uVar4 = sub_0800C0C8(0);
    sub_0801191A(&DAT_03001c4c,uVar4);
    *(short *)(param_1 + 8) = (short)uVar3;
  }
  return uVar1;
}

