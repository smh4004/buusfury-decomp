/* sub_08026212  (original: 0x08026212-0x08026274 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern int sub_08027390();
extern int sub_08024A9C();
extern int sub_08026F94();
extern undefined volatile DAT_03001c4c;
extern undefined2 volatile REG_DISPCNT;


void sub_08026212(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  sub_08024A9C(param_1,1,param_3,param_4,param_4);
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined4 *)(param_1 + 0x510) = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      uVar1 = sub_08027390(0,iVar2 * 0x28 + param_1 + 0x10);
      sub_0801191A(&DAT_03001c4c,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  uVar1 = sub_08026F94(0);
  *(undefined4 *)(param_1 + 0x51c) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  REG_DISPCNT = 0x1940;
  return;
}

