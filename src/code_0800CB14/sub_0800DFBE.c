/* sub_0800DFBE  (original: 0x0800DFBE-0x0800DFD4 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803FACC();


void sub_0800DFBE(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = sub_0803FACC(0xff);
  *(undefined2 *)(param_2 + 0x12) = uVar1;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}

