/* sub_080417AC  (original: 0x080417AC-0x080417F0 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08042AAA();
extern int sub_08041844();
extern undefined1 volatile DAT_03004b2c;
extern undefined1 volatile DAT_03005218;
extern undefined1 volatile DAT_03004b2f;
extern undefined2 volatile REG_TM2CNT;


void sub_080417AC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_03004b2c = 0;
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 5) = 0x20;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0x7ff9;
  *(char **)(param_1 + 0xc) = "TESTING";
  *(code **)(param_1 + 0x10) = sub_08041844;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined2 *)(param_1 + 0x16) = 0xf0;
  *(undefined2 *)(param_1 + 0x18) = 0xf0;
  *(undefined2 *)(param_1 + 6) = 0;
  sub_08042AAA(0x804168d,0x8041655,0xf0,param_4,param_4);
  REG_TM2CNT = 0x8300;
  DAT_03005218 = 1;
  DAT_03004b2f = 5;
  return;
}

