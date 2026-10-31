/* sub_0802C1B0  (original: 0x0802C1B0-0x0802C1D0 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0803FACC();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03001b00;


void sub_0802C1B0(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  
  sub_0800ECDA(param_2,0x12);
  uVar1 = sub_0803FACC(**(undefined4 **)(param_2 + 0x50));
  *(undefined1 *)(param_2 + 0x11) = uVar1;
  sub_0800ED18(param_2,&DAT_03001b00);
  return;
}

