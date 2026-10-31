/* sub_080447E0  (original: 0x080447E0-0x0804481E in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03005268;
extern undefined4 volatile DAT_03005278;


undefined4 sub_080447E0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 < 4) {
    if (param_1 * 0x4000000 < 0) {
      *(undefined4 *)((&DAT_03005268)[param_2] + 0x68) = param_3;
      *(undefined4 *)((&DAT_03005268)[param_2] + 0x6c) = param_4;
    }
    else {
      if (-1 < param_1 << 0x1b) {
        return 0x600;
      }
      *(undefined4 *)((&DAT_03005278)[param_2] + 0x14) = param_3;
      *(undefined4 *)((&DAT_03005278)[param_2] + 0x18) = param_4;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x400;
  }
  return uVar1;
}

