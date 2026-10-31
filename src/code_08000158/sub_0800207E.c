/* sub_0800207E  (original: 0x0800207E-0x080020D8 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 67% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08021094();
extern int sub_080001C6();
extern int sub_0803D5B8();
extern undefined volatile _0804E324;
extern int volatile DAT_03001a34;
extern undefined4 volatile DAT_03002bd8;
extern undefined volatile _0804D300;


void sub_0800207E(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  uVar1 = sub_080001C6(param_1[iVar3]);
  if (DAT_03001a34 == 0) {
    puVar2 = (undefined4 *)sub_0803D5B8(8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804D300;
      puVar2[1] = uVar1;
    }
    sub_08021094(&DAT_03002bd8,puVar2);
  }
  else {
    puVar2 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804E324;
      puVar2[1] = uVar1;
      puVar2[2] = 0xffffffff;
    }
    sub_08021094(&DAT_03002bd8,puVar2);
  }
  return;
}

