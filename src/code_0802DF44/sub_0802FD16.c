/* sub_0802FD16  (original: 0x0802FD16-0x0802FDF8 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803DE50();
extern int sub_08046E40();
extern int sub_0804F9A4();
extern undefined volatile DAT_06010000;
extern undefined4 volatile gUnknown_0806EE6C;


void sub_0802FD16(int param_1,short *param_2)

{
  int iVar1;
  int a0;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0xc))
  sub_08046E40(*(undefined4 *)(param_1 + 0x3c),0,*(undefined4 *)(param_1 + 0x48));
  a0 = param_1 + 0x18;
  if (*param_2 != 0x30) {
    iVar1 = sub_0804F9A4(&gUnknown_0806EE6C);
    *(int *)(param_1 + 0x1c) = 0xc - iVar1;
    *(undefined4 *)(param_1 + 0x20) = 0xc;
    sub_0803DE50(a0,*param_2);
    *(undefined4 *)(param_1 + 0x1c) = 0xe;
    *(undefined4 *)(param_1 + 0x20) = 0xc;
    sub_0803DE50(a0,0x3a);
  }
  iVar1 = sub_0804F9A4(&gUnknown_0806EE6C,param_2[1]);
  *(int *)(param_1 + 0x1c) = 0x1b - iVar1;
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  sub_0803DE50(a0,param_2[1]);
  iVar1 = sub_0804F9A4(&gUnknown_0806EE6C,param_2[2]);
  *(int *)(param_1 + 0x1c) = 0x25 - iVar1;
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  sub_0803DE50(a0,param_2[2]);
  *(undefined4 *)(param_1 + 0x1c) = 0x27;
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  sub_0803DE50(a0,0x3a);
  iVar1 = sub_0804F9A4(&gUnknown_0806EE6C,param_2[3]);
  *(int *)(param_1 + 0x1c) = 0x34 - iVar1;
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  sub_0803DE50(a0,param_2[3]);
  iVar1 = sub_0804F9A4(&gUnknown_0806EE6C,param_2[4]);
  *(int *)(param_1 + 0x1c) = 0x3e - iVar1;
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  sub_0803DE50(a0,param_2[4]);
  uStack_1c = 0x20;
  uStack_18 = 0x10;
  uStack_24 = 0;
  uStack_20 = 0;
  sub_0804915C(a0,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),(int)&uStack_24);
  uStack_20 = 0;
  uStack_24 = 0x20;
  uStack_1c = 0x40;
  uStack_18 = 0x10;
  sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010200,(int)&uStack_24);
  return;
}

