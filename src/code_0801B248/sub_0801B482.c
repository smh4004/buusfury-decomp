/* sub_0801B482  (original: 0x0801B482-0x0801B4A4 in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_083192CC;


void sub_0801B482(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40);
  return;
}

