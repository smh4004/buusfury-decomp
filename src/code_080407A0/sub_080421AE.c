/* sub_080421AE  (original: 0x080421AE-0x08042204 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08042AAA();
extern int sub_08049168();
extern undefined1 volatile DAT_03004be9;
extern undefined1 volatile DAT_03004bea;
extern undefined1 volatile DAT_03004beb;
extern undefined1 volatile DAT_03004bec;
extern undefined1 volatile DAT_03004bed;
extern undefined1 volatile DAT_03004be8;
extern undefined1 volatile DAT_03005218;
extern int sub_0804225C();
extern undefined2 volatile REG_TM2CNT;


void sub_080421AE(int param_1)

{
  DAT_03004be9 = 0;
  DAT_03004bea = 0;
  DAT_03004beb = 0;
  DAT_03004bec = 0;
  DAT_03004bed = 0;
  DAT_03004be8 = 0;
  sub_08049168(0x300521a,0,0x40);
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 5) = 0x20;
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0x7ff9;
  *(char **)(param_1 + 0xc) = "TESTING";
  *(code **)(param_1 + 0x10) = sub_0804225C;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined2 *)(param_1 + 0x16) = 0xf0;
  *(undefined2 *)(param_1 + 0x18) = 0xf0;
  sub_08042AAA(0x80420b9,0x80420b1);
  REG_TM2CNT = 0x8300;
  DAT_03005218 = 1;
  return;
}

