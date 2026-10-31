/* sub_0802DB6C  (original: 0x0802DB6C-0x0802DBDE in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019B04();
extern int sub_08019B4E();
extern int sub_0803D5B8();
extern undefined volatile _0804C99C;


undefined4 *
sub_0802DB6C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 *param_5,int param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(100), param_1 != (undefined4 *)0x0)) {
    uVar1 = 0x400;
    if (param_8 != 0) {
      uVar1 = 0x100;
    }
    sub_08019B04(param_1,uVar1,param_3);
    *param_1 = &_0804C99C;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = param_2;
    param_1[0x18] = param_6;
    uVar1 = *param_5;
    param_1[0x17] = param_5[1];
    param_1[0x16] = uVar1;
    iVar2 = param_4[1];
    param_1[8] = *param_4 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x11] = param_7;
    param_1[0x12] = param_8;
    *(undefined1 *)(param_1 + 2) = 0x37;
    uVar1 = *(undefined4 *)(param_6 + 4);
    param_1[0x14] = 0;
    param_1[6] = uVar1;
    sub_08019B4E(param_1);
  }
  return param_1;
}

