/* sub_080074EC  (original: 0x080074EC-0x08007532 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800938C();
extern int sub_08011E0E();
extern int sub_0803D8A0();
extern int sub_08011DB4();
extern int sub_0803D5B8();
extern int sub_08024F3C();
extern undefined4 volatile DAT_030019a4;
extern undefined volatile DAT_03001c4c;
extern undefined volatile _080495B4;
extern undefined volatile _080496CC;


void sub_080074EC(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080496CC;
    puVar1[1] = 0x100;
    puVar1[2] = 0x10;
  }
  sub_0803D8A0();
  sub_08011DB4(&DAT_03001c4c);
  sub_08024F3C(0);
  sub_0803D8A0();
  sub_0800938C(&DAT_030019a4,1);
  sub_08011E0E(&DAT_03001c4c);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_080495B4;
    puVar1[1] = 0;
    puVar1[2] = 0x10;
  }
  sub_0803D8A0();
  return;
}

