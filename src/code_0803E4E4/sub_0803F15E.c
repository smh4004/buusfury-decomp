/* sub_0803F15E  (original: 0x0803F15E-0x0803F18C in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0803F15E(undefined1 *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  do {
    param_1[param_2 * 0x60 + 0x62] = param_3;
    param_1[param_2 * 0x60 + 0x77] = param_3;
    param_1[param_2 * 0x60 + 0x70] = param_3;
    param_1[param_2 * 0x60 + 0x28] = param_3;
    iVar1 = param_2 + 1;
    *(undefined1 **)(param_1 + param_2 * 0x60 + 0x44) = param_1 + param_2 * 0x60 + 0x18;
    param_2 = iVar1;
  } while (iVar1 < 0xf);
  param_1[1] = param_1[2];
  *param_1 = 1;
  return;
}

