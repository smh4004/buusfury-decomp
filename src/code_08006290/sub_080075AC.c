/* sub_080075AC  (original: 0x080075AC-0x08007674 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_08006D98();
extern int __call_via_r1();
extern int sub_0803D8A0();
extern int sub_08008D44();
extern int __call_via_r2();
extern int sub_0803D5B8();
extern int sub_08006DD6();
extern int volatile DAT_03001a34;
extern undefined1 volatile DAT_0300197c;
extern undefined volatile _080495B4;


void sub_080075AC(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
  if ((*(ushort *)(iVar2 + 2) & (ushort)*(byte *)(param_1 + 0x11)) != 0) {
    iVar6 = *(int *)(param_1 + 0x14);
    iVar3 = __call_via_r2(param_2,2,*(int *)(*param_2 + 0x34) + *param_2);
    iVar2 = param_2[0x8c];
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x10);
    sub_08006D98(0,param_2);
    sub_0803D8A0();
    piVar4 = (int *)sub_08008D44(&DAT_0300197c,*(undefined1 *)(iVar6 + 0x11),
                                 *(undefined1 *)(iVar6 + 0x12),iVar6 + 0x14,
                                 *(undefined1 *)(iVar6 + 0x13),1);
    if (DAT_03001a34 == 0) {
      bVar1 = *(byte *)(iVar6 + 0x10);
      if (bVar1 >> 4 == 0) {
        *(byte *)(piVar4 + 4) = bVar1;
      }
      else {
        *(byte *)(piVar4 + 4) = (bVar1 >> 4) - 1;
      }
      sub_08006DD6(0,piVar4);
      sub_0803D8A0();
      if (iVar3 != 0) {
        *(short *)(piVar4 + 0x8c) = (short)iVar2;
        __call_via_r2(piVar4,2,*(int *)(*piVar4 + 0x28) + *piVar4);
      }
    }
    else {
      puVar5 = (undefined4 *)sub_0803D5B8(0xc);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = &_080495B4;
        puVar5[1] = 0;
        puVar5[2] = 4;
      }
      sub_0803D8A0();
    }
  }
  return;
}

