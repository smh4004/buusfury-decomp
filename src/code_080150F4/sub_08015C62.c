/* sub_08015C62  (original: 0x08015C62-0x08015CD2 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@02000000.
 */
#include "ghidra_types.h"
extern int sub_0803FFE8();
extern int sub_08005FBE();
extern int sub_0803D5B8();
extern undefined volatile _080493F4;
extern undefined volatile gUnknown_0806E050;
extern undefined volatile gUIStringPtrs;


undefined4 *
sub_08015C62(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9,
            int param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x40), param_1 != (undefined4 *)0x0)) {
    sub_08005FBE(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar2);
    *param_1 = &_080493F4;
    param_1[8] = param_9;
    param_1[9] = param_10;
    param_1[0xc] = param_9 + 3;
    param_1[0xd] = param_10 + 8;
    param_1[7] = *(undefined4 *)(&gUIStringPtrs + param_8 * 4);
    param_1[0xe] = param_11;
    param_1[0xf] = param_12;
    iVar1 = sub_0803FFE8(&gUnknown_0806E050);
    param_1[10] = param_1[8] + iVar1 + 6;
    param_1[0xb] = param_1[9] + 10;
  }
  return param_1;
}

