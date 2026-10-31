/* sub_08036D84  (original: 0x08036D84-0x08036DD6 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08054ADC();
extern int sub_0802ED98();
extern int sub_080210B6();
extern int sub_080549B4();
extern int sub_080532E8();
extern int sub_08054A64();
extern int sub_08049198();
extern int sub_08054B3C();
extern int volatile DAT_030019ac;
extern int volatile DAT_030019b4;
extern undefined4 volatile DAT_030019a4;
extern undefined4 volatile DAT_03002bd8;


void sub_08036D84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  sub_080210B6(&DAT_03002bd8);
  DAT_030019ac = *(int *)(param_1 + 8) << 10;
  uVar1 = sub_08054ADC(*(undefined4 *)(param_1 + 8));
  sub_08054B3C(uVar1,0x3bb7e762);
  sub_080549B4();
  sub_08049198();
  uVar1 = sub_080532E8();
  uVar1 = sub_08054B3C(uVar1,0x4222f9db);
  sub_08054B3C(uVar1,0x44800000);
  iVar2 = sub_08054A64();
  DAT_030019b4 = iVar2 + 0x4400;
  sub_0802ED98(&DAT_030019a4);
  return;
}

