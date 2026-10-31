/* sub_080214DA  (original: 0x080214DA-0x080214FC in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_03003e5c;
extern undefined volatile DAT_06010000;
extern undefined volatile gUnknown_08319440;
extern undefined volatile gUnknown_083192CC;


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

