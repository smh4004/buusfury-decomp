/* sub_0800FD74  (original: 0x0800FD74-0x0800FDFA in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 90% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800F58C();
extern int sub_0803D5B8();
extern undefined volatile _0804BA08;


undefined4 *
sub_0800FD74(undefined4 *param_1,undefined4 param_2,undefined4 param_3,short *param_4,
            undefined4 param_5)

{
  short sVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1b0), param_1 != (undefined4 *)0x0)) {
    sub_0800F58C(param_1,param_2,param_3);
    *param_1 = &_0804BA08;
    param_1[0x6a] = 0xf000;
    param_1[0x6b] = 0;
    param_1[0x66] = param_5;
    *(undefined2 *)(param_1 + 0x67) = *(undefined2 *)(param_1[0x16] + 8);
    sVar1 = param_4[1];
    param_1[0x68] = (int)*param_4 << 8;
    param_1[0x69] = (int)sVar1 << 8;
    iVar2 = param_1[0x16];
    *(byte *)((int)param_1 + 0x19e) = *(char *)(iVar2 + 0xc) + (*(byte *)(iVar2 + 10) >> 1);
    *(byte *)((int)param_1 + 0x19f) = *(char *)(iVar2 + 0xd) + (*(byte *)(iVar2 + 0xb) >> 1);
  }
  return param_1;
}

