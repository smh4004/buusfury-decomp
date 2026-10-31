/* sub_08011346  (original: 0x08011346-0x0801137C in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08011346(byte *param_1,int param_2)

{
  byte bVar1;
  
  param_1[param_2 * 10 + 0x694] = 0;
  param_1[param_2 * 10 + 0x69d] = 0xff;
  bVar1 = *param_1;
  param_1[param_2 * 10 + 0x69c] = bVar1;
  if (bVar1 != 0xff) {
    param_1[(uint)bVar1 * 10 + 0x69d] = (byte)param_2;
  }
  *param_1 = (byte)param_2;
  return;
}

