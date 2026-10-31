/* sub_0802FF36  (original: 0x0802FF36-0x0802FF50 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EE78();


void sub_0802FF36(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x12) + 1;
  *(short *)(param_2 + 0x12) = sVar1;
  if (sVar1 == 4) {
    *(undefined1 *)(param_2 + 0x11) = 4;
    sub_0800EE78();
  }
  return;
}

