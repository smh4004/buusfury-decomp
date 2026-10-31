/* sub_0800BDA0  (original: 0x0800BDA0-0x0800BE4E in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800B5F0();
extern int sub_0801191A();
extern int __call_via_r1();
extern int sub_0803E378();
extern int sub_08013B34();
extern int sub_0800B8FC();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_086B82EC;
extern undefined volatile gUnknown_08319488;


void sub_0800BDA0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(param_1 + 0x30);
  iVar2 = __call_via_r1(*(int **)(param_1 + 0x30),*(int *)(iVar2 + 0x80) + iVar2);
  if (((*(int *)(param_1 + 0x2c) == 0) && (-1 < *(int *)(iVar2 + 8))) &&
     ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(iVar2 + 0x14) * 0x18] << 0x1c) < 0)) {
    uVar1 = sub_0800B5F0(0,param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  iVar3 = **(int **)(param_1 + 0x30);
  iVar3 = __call_via_r1(*(int **)(param_1 + 0x30),*(int *)(iVar3 + 0x84) + iVar3);
  if (((int)((uint)*(ushort *)(iVar3 + 4) << 0x16) < 0) && (iVar2 = sub_08013B34(iVar2), iVar2 != 0)
     ) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
  }
  iVar2 = **(int **)(param_1 + 0x34);
  uVar1 = __call_via_r1(*(int **)(param_1 + 0x34),*(int *)(iVar2 + 0x80) + iVar2);
  iVar2 = **(int **)(param_1 + 0x34);
  iVar2 = __call_via_r1(*(int **)(param_1 + 0x34),*(int *)(iVar2 + 0x84) + iVar2);
  if ((int)((uint)*(ushort *)(iVar2 + 4) << 0x16) < 0) {
    sub_08013B34(uVar1);
  }
  sub_0800B8FC(param_1);
  return;
}

