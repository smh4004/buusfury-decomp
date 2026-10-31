/* sub_08017E64  (original: 0x08017E64-0x08017EC2 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800776C();
extern int sub_0803D5B8();
extern undefined volatile _0804A0C0;
extern undefined volatile _0804E444;


undefined4 * sub_08017E64(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x14), param_1 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
    uVar5 = *(undefined4 *)(param_2 + 0x20);
    uVar1 = sub_0800776C();
    *param_1 = &_0804E444;
    *(short *)(param_1 + 1) = (short)uVar2 + -0x13;
    *(short *)((int)param_1 + 6) = (short)uVar3 + -0xb;
    *(short *)(param_1 + 2) = (short)uVar4 + 4;
    *(short *)((int)param_1 + 10) = (short)uVar5 + 4;
    *param_1 = &_0804A0C0;
    param_1[4] = param_2;
    param_1[3] = uVar1;
  }
  return param_1;
}

