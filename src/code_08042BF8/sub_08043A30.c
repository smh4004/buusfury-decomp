/* sub_08043A30  (original: 0x08043A30-0x08043A78 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080433E6();
extern int sub_08045A5E();
extern int sub_08045F4A();
extern int volatile DAT_03005260;
extern undefined2 volatile REG_IME;


void sub_08043A30(uint param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  sub_08045A5E(0x80437c3);
  sub_08045F4A((param_1 & 3) + 0x3c,param_2,param_3);
  if (param_3 == 0) {
    *(undefined2 *)(DAT_03005260 + 0x1a) = 1;
  }
  else {
    uVar1 = REG_IME;
    REG_IME = 0;
    uVar2 = sub_080433E6(600,param_3);
    *(undefined2 *)(DAT_03005260 + 0x1a) = uVar2;
    REG_IME = uVar1;
  }
  return;
}

