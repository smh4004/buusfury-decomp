/* sub_080220D8  (original: 0x080220D8-0x0802214A in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 98% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011C0C();
extern int sub_0801191A();
extern int sub_08022470();
extern int sub_0803D5B8();
extern int sub_08012846();
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03002a64;
extern undefined volatile _0804D260;


undefined4 *
sub_080220D8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x200), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804D260;
    param_1[3] = 0;
    param_1[0x74] = param_3;
    piVar3 = param_1 + 0x75;
    *piVar3 = 0;
    param_1[1] = param_4;
    uVar1 = sub_08022470(0,param_2);
    param_1[2] = uVar1;
    sub_0801191A(&DAT_03001c4c,uVar1);
    iVar2 = *piVar3;
    *piVar3 = iVar2 + 1;
    piVar3[iVar2 + 1] = param_1[2];
    sub_08011C0C(&DAT_03001c4c,0x19,param_1 + 3);
    sub_08012846(&DAT_03002a64,param_1 + 3);
  }
  return param_1;
}

