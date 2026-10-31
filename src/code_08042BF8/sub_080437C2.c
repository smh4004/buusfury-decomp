/* sub_080437C2  (original: 0x080437C2-0x080437EE in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045A5E();
extern int __call_via_r2();
extern byte * volatile DAT_03005260;
extern undefined4 * volatile DAT_03005264;


void sub_080437C2(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  
  sub_08045A5E(0x8043775);
  pbVar1 = DAT_03005260;
  *(short *)(DAT_03005260 + 0x1c) = (short)param_2;
  if ((int)((uint)*pbVar1 << 0x1c) < 0) {
    __call_via_r2(param_1,param_2,*DAT_03005264);
  }
  return;
}

