/* sub_0801E578  (original: 0x0801E578-0x0801E68A in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 30% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_08040096();
extern int sub_080400AC();
extern int sub_080400D8();
extern int sub_0803D5B8();
extern int sub_080400C2();
extern int sub_0803D850();
extern int sub_08005460();
extern undefined volatile DAT_03003e5c;
extern undefined volatile _0804B5AC;
extern undefined volatile _0804947C;
extern undefined volatile _0804920C;
extern undefined volatile gUnknown_08319488;


undefined4 sub_0801E578(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    sub_080400D8();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar1 = (undefined4 *)sub_0803D5B8(0x2fc);
    if (puVar1 != (undefined4 *)0x0) {
      sub_08005460(puVar1,9,10,1);
      *puVar1 = &_0804947C;
      puVar1[0xbe] = 0;
    }
    sub_0803D850(puVar1);
    uVar2 = 1;
  }
  else if (param_3 == 1) {
    sub_08040096();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    uVar2 = 1;
  }
  else if (param_3 == 2) {
    sub_080400AC();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    uVar2 = 1;
  }
  else if (param_3 == 3) {
    sub_080400C2();
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0,param_4);
    puVar1 = (undefined4 *)sub_0803D5B8(0x114);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804920C;
      puVar1[1] = 0;
      puVar1[0x43] = 0;
      puVar1[0x42] = 0;
      puVar1[0x44] = 0;
      *puVar1 = &_0804B5AC;
    }
    sub_0803D850();
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

