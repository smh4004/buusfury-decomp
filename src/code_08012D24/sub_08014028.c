/* sub_08014028  (original: 0x08014028-0x080140B2 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FFE8();
extern int sub_08005FBE();
extern int sub_0803D5B8();
extern undefined volatile gUnknown_0806E050;
extern undefined volatile _0804BF54;


undefined4 *
sub_08014028(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
            undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = param_1;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x3c), param_1 != (undefined4 *)0x0)) {
    sub_08005FBE(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar5);
    *param_1 = &_0804BF54;
    uVar2 = param_8[1];
    uVar3 = param_8[2];
    uVar4 = param_8[3];
    param_1[9] = *param_8;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar4;
    param_1[8] = param_9;
    param_1[7] = param_10;
    param_1[0xe] = (int)(param_1[10] + param_1[0xc]) >> 1;
    param_1[0xd] = (int)(param_1[9] + param_1[0xb]) >> 1;
    param_1[0xe] = param_1[0xe] + 3;
    iVar1 = sub_0803FFE8(&gUnknown_0806E050,param_1[8]);
    param_1[0xd] = param_1[0xd] - iVar1 / 2;
  }
  return param_1;
}

