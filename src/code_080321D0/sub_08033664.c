/* sub_08033664  (original: 0x08033664-0x0803369E in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049150();
extern int sub_08046E40();
extern int sub_0803DADA();
extern undefined4 volatile gUnknown_0806EE6C;


void sub_08033664(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08046E40(*(undefined4 *)(param_1 + 0x38),0,*(undefined4 *)(param_1 + 0x44),param_4,param_4);
  *(undefined4 **)(param_1 + 0x20) = &gUnknown_0806EE6C;
  *(undefined4 *)(param_1 + 0x18) = 0x78;
  *(undefined4 *)(param_1 + 0x1c) = 0x18;
  *(undefined1 *)(param_1 + 0x15) = 0x10;
  if (param_2 != 0) {
    sub_0803DADA(param_1 + 0x14,param_2);
  }
  sub_08049150(param_1 + 0x14,0x6000040);
  return;
}

