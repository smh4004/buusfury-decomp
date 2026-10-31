/* sub_08027484  (original: 0x08027484-0x080274A6 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0800EECC();
extern undefined * volatile gUnknown_0874D360;


void sub_08027484(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 4) + 1;
  *(char *)(param_1 + 4) = (char)iVar1;
  if (*(undefined **)(param_2 + 0x38) != (&gUnknown_0874D360)[(uint)(iVar1 * 0x8000000) >> 0x1d]) {
    sub_0800EECC();
  }
  return;
}

