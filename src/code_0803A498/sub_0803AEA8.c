/* sub_0803AEA8  (original: 0x0803AEA8-0x0803AF58 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803A84A();
extern int sub_08009728();
extern int sub_080096C4();
extern int sub_0800927E();
extern int sub_0803D5B8();
extern int sub_080096EA();
extern int sub_080096AC();
extern undefined1 volatile DAT_030032e4;
extern undefined4 volatile DAT_03001990;
extern undefined volatile _0804A884;
extern undefined4 volatile DAT_030019a4;


undefined4 * sub_0803AEA8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x20), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804A884;
    uVar2 = param_2[1];
    param_1[5] = *param_2;
    param_1[6] = uVar2;
    param_1[7] = param_3;
    iVar1 = sub_0803A84A(0,0,param_2,1,2,0);
    param_1[3] = iVar1;
    sub_0800927E(&DAT_03001990,*(undefined1 *)(iVar1 + 4));
    sub_080096C4(&DAT_030019a4,0,1);
    sub_080096EA(&DAT_030019a4,0,1);
    sub_080096EA(&DAT_030019a4,1,2);
    sub_080096EA(&DAT_030019a4,2,2);
    sub_080096EA(&DAT_030019a4,3,2);
    sub_080096EA(&DAT_030019a4,4,2);
    sub_08009728(&DAT_030019a4,0x32,0x32);
    sub_080096AC(&DAT_030019a4,0);
    param_1[4] = 0x100;
    DAT_030032e4 = 0;
  }
  return param_1;
}

