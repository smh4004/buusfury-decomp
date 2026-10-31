/* sub_0802111C  (original: 0x0802111C-0x08021174 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08021094();
extern int sub_0803D5B8();
extern undefined volatile _0804E324;
extern int volatile DAT_03001a34;
extern undefined4 volatile DAT_03002bd8;
extern undefined volatile _0804D300;


void sub_0802111C(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (DAT_03001a34 == 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D300;
      puVar1[1] = uVar2;
    }
    sub_08021094(&DAT_03002bd8,puVar1);
  }
  else {
    puVar1 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804E324;
      puVar1[1] = uVar2;
      puVar1[2] = 0xffffffff;
    }
    sub_08021094(&DAT_03002bd8,puVar1);
  }
  return;
}

