/* sub_08034A20  (original: 0x08034A20-0x08034A4A in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800EEB0();


void sub_08034A20(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_0800EEB0(param_2,0x13);
  if (iVar1 == 0) {
    sub_0800ECDA(param_2,0x14);
    *(undefined2 *)(param_2 + 0x12) = 0x47;
    *(undefined1 *)(param_2 + 0x11) = 8;
  }
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  return;
}

