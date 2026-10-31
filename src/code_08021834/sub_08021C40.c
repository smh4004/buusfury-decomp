/* sub_08021C40  (original: 0x08021C40-0x08021C7C in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern int sub_08021BF8();
extern int sub_08040160();
extern int sub_0802E732();
extern undefined4 volatile DAT_03002c00;
extern undefined4 volatile DAT_03002c08;
extern undefined4 volatile DAT_03002c0c;
extern undefined volatile DAT_03001c4c;


void sub_08021C40(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  DAT_03002c00 = 0xb4;
  *(undefined4 *)(param_1 + 0x30) = 0x3c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  DAT_03002c08 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  DAT_03002c0c = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = sub_0802E732(0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  *(undefined4 *)(param_1 + 0x24) = 0;
  sub_08021BF8(0);
  sub_08040160();
  return;
}

