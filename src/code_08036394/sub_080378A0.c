/* sub_080378A0  (original: 0x080378A0-0x080378E0 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern int sub_0803E378();
extern int sub_0803E302();
extern undefined volatile gUnknown_08319428;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_083192CC;


void sub_080378A0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  if (*(int *)(param_1 + 0x54) < 0x3c) {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = 1;
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC,0x5c4,param_4,param_4);
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319428,0x40,0);
  }
  return;
}

