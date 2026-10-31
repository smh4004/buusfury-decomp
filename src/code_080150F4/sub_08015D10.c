/* sub_08015D10  (original: 0x08015D10-0x08015DA8 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 98% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08005FBE();
extern int sub_08013E64();
extern int sub_0803D5B8();
extern undefined volatile _08049C68;


undefined4 *
sub_08015D10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x114), param_1 != (undefined4 *)0x0)) {
    sub_08005FBE(param_1,param_2,param_3,param_4,param_5,0xffffffff,0xffffffff);
    *param_1 = &_08049C68;
    uVar1 = param_6[1];
    uVar2 = param_6[2];
    uVar3 = param_6[3];
    param_1[9] = *param_6;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
    param_1[0x13] = 0;
    param_1[0x11] = param_7;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x44] = 0;
    uVar1 = sub_08013E64(0,param_1[1],4,param_1[9],param_1[10],param_7,1,0);
    param_1[7] = uVar1;
    uVar1 = sub_08013E64(0,param_1[1],5,param_1[0xb] + -0x10,param_1[10],param_1[0x11],1,0);
    param_1[8] = uVar1;
  }
  return param_1;
}

