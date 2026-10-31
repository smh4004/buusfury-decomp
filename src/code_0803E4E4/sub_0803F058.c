/* sub_0803F058  (original: 0x0803F058-0x0803F07C in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E152();


void sub_0803F058(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sub_0803E152(iVar1 * 0x60 + param_1 + 0x18,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xf);
  return;
}

