/* sub_08003754  (original: 0x08003754-0x08003774 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03001988;


void sub_08003754(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (param_1[iVar1] != 0) {
    DAT_03001988 = 1;
    return;
  }
  DAT_03001988 = 0;
  return;
}

