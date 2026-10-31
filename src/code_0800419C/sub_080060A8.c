/* sub_080060A8  (original: 0x080060A8-0x080060F8 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 86% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08005FBE();
extern int sub_0803D5B8();
extern undefined volatile gUIStringPtrs;
extern undefined volatile _0804B2DC;


undefined4 *
sub_080060A8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined1 param_12)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    sub_08005FBE(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar1);
    *param_1 = &_0804B2DC;
    param_1[10] = param_11;
    param_1[7] = *(undefined4 *)(&gUIStringPtrs + param_8 * 4);
    param_1[8] = param_9;
    param_1[9] = param_10;
    *(undefined1 *)(param_1 + 0xb) = param_12;
  }
  return param_1;
}

