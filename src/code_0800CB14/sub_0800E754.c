/* sub_0800E754  (original: 0x0800E754-0x0800E7F6 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FD74();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03000f94;
extern undefined volatile _0804C888;


undefined4 *
sub_0800E754(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = param_1;
  iVar3 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x224), param_1 != (undefined4 *)0x0)) {
    sub_0800FD74(param_1,param_2,param_3,param_5,param_6,puVar2,param_2,param_3,iVar3);
    *param_1 = &_0804C888;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    param_1[0x73] = 1;
    param_1[0x72] = 0;
    *(ushort *)(param_1 + 0x6c) = (ushort)*(byte *)(param_4 + 0xd);
    *(ushort *)((int)param_1 + 0x1b2) = (ushort)*(byte *)(param_4 + 0xe);
    *(ushort *)(param_1 + 0x6d) = (ushort)*(byte *)(param_4 + 0xf);
    *(ushort *)((int)param_1 + 0x1b6) = (ushort)*(byte *)(param_4 + 0xf);
    *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_4 + 0x10);
    *(undefined1 *)((int)param_1 + 0x1b9) = *(undefined1 *)(param_4 + 0x11);
    param_1[0x6f] = 0;
    param_1[0x70] = 0x1000;
    param_1[0x71] = 0;
    param_1[0x79] = 0;
    uVar1 = DAT_03000f94;
    param_1[0x7a] = DAT_03000f94;
    param_1[0x7b] = uVar1;
    param_1[0x81] = 0;
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x88] = 0;
  }
  return param_1;
}

