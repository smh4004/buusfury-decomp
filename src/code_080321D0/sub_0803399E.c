/* sub_0803399E  (original: 0x0803399E-0x08033A2A in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int volatile DAT_03001c34;
extern undefined volatile _0804C3CC;
extern undefined4 volatile DAT_03001b00;


void sub_0803399E(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[12];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_30 ((int *)((char *)__frame + 0x0))
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = DAT_03001c34;
  sub_0800ECDA(DAT_03001c34,9);
  *(undefined1 *)(iVar1 + 0x11) = 0;
  *(byte *)(iVar1 + 0x10) = *(byte *)(param_2 + 0x10) ^ 1;
  sub_0800ED18(iVar1,&DAT_03001b00);
  local_30[0] = 0;
  local_30[1] = 0x1000;
  local_30[2] = 0;
  local_30[3] = 0xfffff000;
  local_30[4] = 0xfffff000;
  local_30[5] = 0;
  local_30[6] = 0x1000;
  local_30[7] = 0;
  iVar3 = *(int *)(iVar1 + 0x1a4);
  iVar4 = local_30[(uint)*(byte *)(param_2 + 0x10) * 2 + 1];
  *(int *)(param_2 + 0x1a0) =
       *(int *)(iVar1 + 0x1a0) - local_30[(uint)*(byte *)(param_2 + 0x10) * 2];
  *(int *)(param_2 + 0x1a4) = iVar3 - iVar4;
  puVar2 = (undefined4 *)sub_0803D5B8(4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804C3CC;
  }
  sub_0800ECDA(param_2,0x12);
  sub_0800ED18(param_2,puVar2);
  return;
}

