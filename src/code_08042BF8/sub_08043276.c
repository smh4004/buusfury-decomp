/* sub_08043276  (original: 0x08043276-0x080432A0 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_IME;


undefined4 sub_08043276(int param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  
  if (((*(char *)(param_3 + 9) != '\0') && (param_1 == 0)) && (*(char *)(param_3 + 0x30) != '\0')) {
    return 5;
  }
  uVar1 = REG_IME;
  REG_IME = 0;
  *(char *)(param_3 + 9) = (char)param_1;
  *(undefined2 *)(param_3 + 0x32) = param_2;
  REG_IME = uVar1;
  return 0;
}

