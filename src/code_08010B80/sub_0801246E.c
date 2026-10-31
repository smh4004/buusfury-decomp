/* sub_0801246E  (original: 0x0801246E-0x080124D2 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_08011C0C();
extern int sub_0803D5B8();
extern int volatile DAT_03002a5c;
extern undefined4 volatile DAT_03002a58;
extern undefined volatile DAT_03001c4c;


undefined4 *
sub_0801246E(undefined4 *param_1,undefined4 param_2,undefined2 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x2c), param_1 != (undefined4 *)0x0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    uVar1 = param_4[1];
    param_1[3] = *param_4;
    param_1[4] = uVar1;
    param_1[10] = 0;
    if (param_5 == (undefined4 *)0x0) {
      param_5 = param_1 + 6;
    }
    param_1[5] = param_5;
    if (DAT_03002a5c == 0) {
      DAT_03002a58 = 0;
    }
    DAT_03002a5c = DAT_03002a5c + 1;
    *(undefined2 *)(param_1 + 2) = *param_3;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    sub_08011C0C(&DAT_03001c4c,0xf,0);
  }
  return param_1;
}

