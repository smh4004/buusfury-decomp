/* sub_0800D290  (original: 0x0800D290-0x0800D2D4 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800776C();
extern int sub_0803D5B8();
extern undefined volatile _0804E444;
extern undefined volatile _08049D98;


undefined4 * sub_0800D290(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x14), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  uVar1 = sub_0800776C();
  *param_1 = &_0804E444;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(short *)(param_1 + 1) = (short)*param_3 + -0xf;
  *(short *)((int)param_1 + 6) = (short)uVar2 + -7;
  *(short *)(param_1 + 2) = (short)uVar3;
  *(short *)((int)param_1 + 10) = (short)uVar4;
  *param_1 = &_08049D98;
  param_1[3] = uVar1;
  param_1[4] = param_2;
  return param_1;
}

