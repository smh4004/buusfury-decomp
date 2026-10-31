/* sub_08042C98  (original: 0x08042C98-0x08042CE6 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804333C();
extern int sub_0804337C();
extern byte volatile DAT_03004cf8;
extern int volatile DAT_0300525c;
extern undefined2 volatile DAT_03004cdc;
extern undefined2 volatile DAT_03004cfc;


void sub_08042C98(uint param_1)

{
  uint uVar1;
  
  if ((DAT_03004cf8 & param_1) != 0) {
    DAT_03004cf8 = DAT_03004cf8 & ~(byte)param_1;
    uVar1 = 0;
    do {
      if ((1 << uVar1 & param_1) != 0) {
        (&DAT_03004cfc)[uVar1] = 0;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 4);
    param_1 = *(byte *)(DAT_0300525c + 3) & param_1;
    if (param_1 != 0) {
      sub_0804337C(param_1);
    }
    DAT_03004cdc = (undefined2)param_1;
    sub_0804333C(0x33,param_1);
  }
  return;
}

